#!/bin/bash

if [ $# == 1 ] && [ $1 == "clear" ]; then
	rm *.replace
	make fclean -C ../
	exit
fi

diffCheck()
{
	diff "${1}.replace" "${1}_python.replace"
}

replace()
{
	$1 $3 $4 $5
	python3 $2 $3 $4 $5
}

Test()
{
	file="nonewline"
	replace $1 $2 $file "4." "xxx"
	diffCheck $file

	file="newline"
	replace $1 $2 $file "new" "wwww"
	diffCheck $file

	file="map"
	replace $1 $2 $file "." "_"
	diffCheck $file

	file="map2"
	replace $1 $2 $file "o" "@"
	diffCheck $file

	file="prologue"
	replace $1 $2 $file ", " "4242"
	diffCheck $file

	rm *python.replace
}


if [ -f replace.py ]; then
	if [ ! -e ../replace ]; then
		make -C ../
	fi
	Test "../replace" "replace.py"
elif [ -f files/replace.py ]; then
	cd files
	Test "../replace" "replace.py"
	cd ../
fi
