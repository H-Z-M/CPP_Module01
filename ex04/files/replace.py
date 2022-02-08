import sys

def test(args):
    file = args[0]
    fromStr = args[1]
    toStr = args[2]
    if not file or not fromStr or not toStr:
        sys.exit(1)
    try:
        with open(file,'r') as ifs:
            buf = ifs.read()
            with open(file+'_python.replace', 'w') as ofs:
                ofs.write(buf.replace(fromStr, toStr))
    except OSError:
        sys.exit(1)

if __name__ == '__main__':
    if len(sys.argv) != 4:
        sys.exit(1)
    test(sys.argv[1:])
