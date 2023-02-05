import sys

size = ''
start = ''
end = ''
for i, line in enumerate(sys.stdin):
    line = line.replace('\n', '')
    if 'size' in line:
        size = line
        continue
    if 'end' in line:
        end = line
    if 'start' in line:
        start = line
    print(f"extern u8 {line}[];")
print(f"#define {size} ((u32){end} - (u32){start})")
