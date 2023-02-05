import sys

for i, line in enumerate(sys.stdin):
    if line and len(line):
        sys.stdout.write(" ".join([line.rstrip('\n'), line.replace('_binary_dma_tex_', '')]))
