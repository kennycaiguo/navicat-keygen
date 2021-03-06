#include "PatchSolutions.hpp"
#include <vector>
#include <algorithm>

#undef NKG_CURRENT_SOURCE_FILE
#undef NKG_CURRENT_SOURCE_LINE
#define NKG_CURRENT_SOURCE_FILE() TEXT(".\\navicat-patcher\\PatchSolution2-i386.cpp")
#define NKG_CURRENT_SOURCE_LINE() __LINE__

namespace nkg {

    /*
    Keyword[0x188][5] is generated by the following python script:

-----Begin Python3 Script-----
meta = \
    "MIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAw1dqF3SkCaAAmMzs889I" \
    "qdW9M2dIdh3jG9yPcmLnmJiGpBF4E9VHSMGe8oPAy2kJDmdNt4BcEygvssEfginv" \
    "a5t5jm352UAoDosUJkTXGQhpAWMF4fBmBpO3EedG62rOsqMBgmSdAyxCSPBRJIOF" \
    "R0QgZFbRnU0frj34fiVmgYiLuZSAmIbs8ZxiHPdp1oD4tUpvsFci4QJtYNjNnGU2" \
    "WPH6rvChGl1IRKrxMtqLielsvajUjyrgOC6NmymYMvZNER3htFEtL1eQbCyTfDmt" \
    "YyQ1Wt4Ot12lxf0wVIR5mcGN7XCXJRHOFHSf1gzXWabRSvmt1nrl7sW6cjxljuuQ" \
    "awIDAQAB"

print('const uint8_t PatchSolution2::Keywords[0x188][5] = {')
for i in range(0, len(meta)):
    if i % 3 == 0:
        i1 = '0x83, 0xf2, 0x%.2x' % ord(meta[i])    # asm('xor edx, meta[i]')
        i2 = '0x88, 0x15'                           # asm_prefix('mov byte ptr ds:xxxxxxxx, dl')
    elif i % 3 == 1:
        i1 = '0x83, 0xf0, 0x%.2x' % ord(meta[i])    # asm('xor eax, meta[i]')
        i2 = '0xa2'                                 # asm_prefix('mov byte ptr ds:xxxxxxxx, al')
    else:
        i1 = '0x83, 0xf1, 0x%.2x' % ord(meta[i])    # asm('xor ecx, meta[i]')
        i2 = '0x88, 0x0d'                           # asm_prefix('mov byte ptr ds:xxxxxxxx, cl')
    print('    { %s, %s }' % (i1, i2), end=',\n' if i != len(meta) - 1 else '\n')
print('};')
-----End Python3 Script-----

    */
    const uint8_t PatchSolution2::Keyword[0x188][5] = {
        { 0x83, 0xf2, 0x4d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x49, 0xa2 },
        { 0x83, 0xf1, 0x49, 0x88, 0x0d },
        { 0x83, 0xf2, 0x42, 0x88, 0x15 },
        { 0x83, 0xf0, 0x49, 0xa2 },
        { 0x83, 0xf1, 0x6a, 0x88, 0x0d },
        { 0x83, 0xf2, 0x41, 0x88, 0x15 },
        { 0x83, 0xf0, 0x4e, 0xa2 },
        { 0x83, 0xf1, 0x42, 0x88, 0x0d },
        { 0x83, 0xf2, 0x67, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6b, 0xa2 },
        { 0x83, 0xf1, 0x71, 0x88, 0x0d },
        { 0x83, 0xf2, 0x68, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6b, 0xa2 },
        { 0x83, 0xf1, 0x69, 0x88, 0x0d },
        { 0x83, 0xf2, 0x47, 0x88, 0x15 },
        { 0x83, 0xf0, 0x39, 0xa2 },
        { 0x83, 0xf1, 0x77, 0x88, 0x0d },
        { 0x83, 0xf2, 0x30, 0x88, 0x15 },
        { 0x83, 0xf0, 0x42, 0xa2 },
        { 0x83, 0xf1, 0x41, 0x88, 0x0d },
        { 0x83, 0xf2, 0x51, 0x88, 0x15 },
        { 0x83, 0xf0, 0x45, 0xa2 },
        { 0x83, 0xf1, 0x46, 0x88, 0x0d },
        { 0x83, 0xf2, 0x41, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x4f, 0x88, 0x0d },
        { 0x83, 0xf2, 0x43, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x38, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x4d, 0x88, 0x0d },
        { 0x83, 0xf2, 0x49, 0x88, 0x15 },
        { 0x83, 0xf0, 0x49, 0xa2 },
        { 0x83, 0xf1, 0x42, 0x88, 0x0d },
        { 0x83, 0xf2, 0x43, 0x88, 0x15 },
        { 0x83, 0xf0, 0x67, 0xa2 },
        { 0x83, 0xf1, 0x4b, 0x88, 0x0d },
        { 0x83, 0xf2, 0x43, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x45, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x77, 0x88, 0x0d },
        { 0x83, 0xf2, 0x31, 0x88, 0x15 },
        { 0x83, 0xf0, 0x64, 0xa2 },
        { 0x83, 0xf1, 0x71, 0x88, 0x0d },
        { 0x83, 0xf2, 0x46, 0x88, 0x15 },
        { 0x83, 0xf0, 0x33, 0xa2 },
        { 0x83, 0xf1, 0x53, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6b, 0x88, 0x15 },
        { 0x83, 0xf0, 0x43, 0xa2 },
        { 0x83, 0xf1, 0x61, 0x88, 0x0d },
        { 0x83, 0xf2, 0x41, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x6d, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x7a, 0xa2 },
        { 0x83, 0xf1, 0x73, 0x88, 0x0d },
        { 0x83, 0xf2, 0x38, 0x88, 0x15 },
        { 0x83, 0xf0, 0x38, 0xa2 },
        { 0x83, 0xf1, 0x39, 0x88, 0x0d },
        { 0x83, 0xf2, 0x49, 0x88, 0x15 },
        { 0x83, 0xf0, 0x71, 0xa2 },
        { 0x83, 0xf1, 0x64, 0x88, 0x0d },
        { 0x83, 0xf2, 0x57, 0x88, 0x15 },
        { 0x83, 0xf0, 0x39, 0xa2 },
        { 0x83, 0xf1, 0x4d, 0x88, 0x0d },
        { 0x83, 0xf2, 0x32, 0x88, 0x15 },
        { 0x83, 0xf0, 0x64, 0xa2 },
        { 0x83, 0xf1, 0x49, 0x88, 0x0d },
        { 0x83, 0xf2, 0x64, 0x88, 0x15 },
        { 0x83, 0xf0, 0x68, 0xa2 },
        { 0x83, 0xf1, 0x33, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6a, 0x88, 0x15 },
        { 0x83, 0xf0, 0x47, 0xa2 },
        { 0x83, 0xf1, 0x39, 0x88, 0x0d },
        { 0x83, 0xf2, 0x79, 0x88, 0x15 },
        { 0x83, 0xf0, 0x50, 0xa2 },
        { 0x83, 0xf1, 0x63, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x4c, 0xa2 },
        { 0x83, 0xf1, 0x6e, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x4a, 0xa2 },
        { 0x83, 0xf1, 0x69, 0x88, 0x0d },
        { 0x83, 0xf2, 0x47, 0x88, 0x15 },
        { 0x83, 0xf0, 0x70, 0xa2 },
        { 0x83, 0xf1, 0x42, 0x88, 0x0d },
        { 0x83, 0xf2, 0x46, 0x88, 0x15 },
        { 0x83, 0xf0, 0x34, 0xa2 },
        { 0x83, 0xf1, 0x45, 0x88, 0x0d },
        { 0x83, 0xf2, 0x39, 0x88, 0x15 },
        { 0x83, 0xf0, 0x56, 0xa2 },
        { 0x83, 0xf1, 0x48, 0x88, 0x0d },
        { 0x83, 0xf2, 0x53, 0x88, 0x15 },
        { 0x83, 0xf0, 0x4d, 0xa2 },
        { 0x83, 0xf1, 0x47, 0x88, 0x0d },
        { 0x83, 0xf2, 0x65, 0x88, 0x15 },
        { 0x83, 0xf0, 0x38, 0xa2 },
        { 0x83, 0xf1, 0x6f, 0x88, 0x0d },
        { 0x83, 0xf2, 0x50, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x79, 0x88, 0x0d },
        { 0x83, 0xf2, 0x32, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6b, 0xa2 },
        { 0x83, 0xf1, 0x4a, 0x88, 0x0d },
        { 0x83, 0xf2, 0x44, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6d, 0xa2 },
        { 0x83, 0xf1, 0x64, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4e, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x34, 0x88, 0x0d },
        { 0x83, 0xf2, 0x42, 0x88, 0x15 },
        { 0x83, 0xf0, 0x63, 0xa2 },
        { 0x83, 0xf1, 0x45, 0x88, 0x0d },
        { 0x83, 0xf2, 0x79, 0x88, 0x15 },
        { 0x83, 0xf0, 0x67, 0xa2 },
        { 0x83, 0xf1, 0x76, 0x88, 0x0d },
        { 0x83, 0xf2, 0x73, 0x88, 0x15 },
        { 0x83, 0xf0, 0x73, 0xa2 },
        { 0x83, 0xf1, 0x45, 0x88, 0x0d },
        { 0x83, 0xf2, 0x66, 0x88, 0x15 },
        { 0x83, 0xf0, 0x67, 0xa2 },
        { 0x83, 0xf1, 0x69, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6e, 0x88, 0x15 },
        { 0x83, 0xf0, 0x76, 0xa2 },
        { 0x83, 0xf1, 0x61, 0x88, 0x0d },
        { 0x83, 0xf2, 0x35, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x35, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6a, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6d, 0xa2 },
        { 0x83, 0xf1, 0x33, 0x88, 0x0d },
        { 0x83, 0xf2, 0x35, 0x88, 0x15 },
        { 0x83, 0xf0, 0x32, 0xa2 },
        { 0x83, 0xf1, 0x55, 0x88, 0x0d },
        { 0x83, 0xf2, 0x41, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6f, 0xa2 },
        { 0x83, 0xf1, 0x44, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6f, 0x88, 0x15 },
        { 0x83, 0xf0, 0x73, 0xa2 },
        { 0x83, 0xf1, 0x55, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4a, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6b, 0xa2 },
        { 0x83, 0xf1, 0x54, 0x88, 0x0d },
        { 0x83, 0xf2, 0x58, 0x88, 0x15 },
        { 0x83, 0xf0, 0x47, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x68, 0x88, 0x15 },
        { 0x83, 0xf0, 0x70, 0xa2 },
        { 0x83, 0xf1, 0x41, 0x88, 0x0d },
        { 0x83, 0xf2, 0x57, 0x88, 0x15 },
        { 0x83, 0xf0, 0x4d, 0xa2 },
        { 0x83, 0xf1, 0x46, 0x88, 0x0d },
        { 0x83, 0xf2, 0x34, 0x88, 0x15 },
        { 0x83, 0xf0, 0x66, 0xa2 },
        { 0x83, 0xf1, 0x42, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x42, 0xa2 },
        { 0x83, 0xf1, 0x70, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4f, 0x88, 0x15 },
        { 0x83, 0xf0, 0x33, 0xa2 },
        { 0x83, 0xf1, 0x45, 0x88, 0x0d },
        { 0x83, 0xf2, 0x65, 0x88, 0x15 },
        { 0x83, 0xf0, 0x64, 0xa2 },
        { 0x83, 0xf1, 0x47, 0x88, 0x0d },
        { 0x83, 0xf2, 0x36, 0x88, 0x15 },
        { 0x83, 0xf0, 0x32, 0xa2 },
        { 0x83, 0xf1, 0x72, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4f, 0x88, 0x15 },
        { 0x83, 0xf0, 0x73, 0xa2 },
        { 0x83, 0xf1, 0x71, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x42, 0xa2 },
        { 0x83, 0xf1, 0x67, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x53, 0xa2 },
        { 0x83, 0xf1, 0x64, 0x88, 0x0d },
        { 0x83, 0xf2, 0x41, 0x88, 0x15 },
        { 0x83, 0xf0, 0x79, 0xa2 },
        { 0x83, 0xf1, 0x78, 0x88, 0x0d },
        { 0x83, 0xf2, 0x43, 0x88, 0x15 },
        { 0x83, 0xf0, 0x53, 0xa2 },
        { 0x83, 0xf1, 0x50, 0x88, 0x0d },
        { 0x83, 0xf2, 0x42, 0x88, 0x15 },
        { 0x83, 0xf0, 0x52, 0xa2 },
        { 0x83, 0xf1, 0x4a, 0x88, 0x0d },
        { 0x83, 0xf2, 0x49, 0x88, 0x15 },
        { 0x83, 0xf0, 0x4f, 0xa2 },
        { 0x83, 0xf1, 0x46, 0x88, 0x0d },
        { 0x83, 0xf2, 0x52, 0x88, 0x15 },
        { 0x83, 0xf0, 0x30, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x67, 0x88, 0x15 },
        { 0x83, 0xf0, 0x5a, 0xa2 },
        { 0x83, 0xf1, 0x46, 0x88, 0x0d },
        { 0x83, 0xf2, 0x62, 0x88, 0x15 },
        { 0x83, 0xf0, 0x52, 0xa2 },
        { 0x83, 0xf1, 0x6e, 0x88, 0x0d },
        { 0x83, 0xf2, 0x55, 0x88, 0x15 },
        { 0x83, 0xf0, 0x30, 0xa2 },
        { 0x83, 0xf1, 0x66, 0x88, 0x0d },
        { 0x83, 0xf2, 0x72, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6a, 0xa2 },
        { 0x83, 0xf1, 0x33, 0x88, 0x0d },
        { 0x83, 0xf2, 0x34, 0x88, 0x15 },
        { 0x83, 0xf0, 0x66, 0xa2 },
        { 0x83, 0xf1, 0x69, 0x88, 0x0d },
        { 0x83, 0xf2, 0x56, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6d, 0xa2 },
        { 0x83, 0xf1, 0x67, 0x88, 0x0d },
        { 0x83, 0xf2, 0x59, 0x88, 0x15 },
        { 0x83, 0xf0, 0x69, 0xa2 },
        { 0x83, 0xf1, 0x4c, 0x88, 0x0d },
        { 0x83, 0xf2, 0x75, 0x88, 0x15 },
        { 0x83, 0xf0, 0x5a, 0xa2 },
        { 0x83, 0xf1, 0x53, 0x88, 0x0d },
        { 0x83, 0xf2, 0x41, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6d, 0xa2 },
        { 0x83, 0xf1, 0x49, 0x88, 0x0d },
        { 0x83, 0xf2, 0x62, 0x88, 0x15 },
        { 0x83, 0xf0, 0x73, 0xa2 },
        { 0x83, 0xf1, 0x38, 0x88, 0x0d },
        { 0x83, 0xf2, 0x5a, 0x88, 0x15 },
        { 0x83, 0xf0, 0x78, 0xa2 },
        { 0x83, 0xf1, 0x69, 0x88, 0x0d },
        { 0x83, 0xf2, 0x48, 0x88, 0x15 },
        { 0x83, 0xf0, 0x50, 0xa2 },
        { 0x83, 0xf1, 0x64, 0x88, 0x0d },
        { 0x83, 0xf2, 0x70, 0x88, 0x15 },
        { 0x83, 0xf0, 0x31, 0xa2 },
        { 0x83, 0xf1, 0x6f, 0x88, 0x0d },
        { 0x83, 0xf2, 0x44, 0x88, 0x15 },
        { 0x83, 0xf0, 0x34, 0xa2 },
        { 0x83, 0xf1, 0x74, 0x88, 0x0d },
        { 0x83, 0xf2, 0x55, 0x88, 0x15 },
        { 0x83, 0xf0, 0x70, 0xa2 },
        { 0x83, 0xf1, 0x76, 0x88, 0x0d },
        { 0x83, 0xf2, 0x73, 0x88, 0x15 },
        { 0x83, 0xf0, 0x46, 0xa2 },
        { 0x83, 0xf1, 0x63, 0x88, 0x0d },
        { 0x83, 0xf2, 0x69, 0x88, 0x15 },
        { 0x83, 0xf0, 0x34, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4a, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x59, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4e, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6a, 0xa2 },
        { 0x83, 0xf1, 0x4e, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6e, 0x88, 0x15 },
        { 0x83, 0xf0, 0x47, 0xa2 },
        { 0x83, 0xf1, 0x55, 0x88, 0x0d },
        { 0x83, 0xf2, 0x32, 0x88, 0x15 },
        { 0x83, 0xf0, 0x57, 0xa2 },
        { 0x83, 0xf1, 0x50, 0x88, 0x0d },
        { 0x83, 0xf2, 0x48, 0x88, 0x15 },
        { 0x83, 0xf0, 0x36, 0xa2 },
        { 0x83, 0xf1, 0x72, 0x88, 0x0d },
        { 0x83, 0xf2, 0x76, 0x88, 0x15 },
        { 0x83, 0xf0, 0x43, 0xa2 },
        { 0x83, 0xf1, 0x68, 0x88, 0x0d },
        { 0x83, 0xf2, 0x47, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6c, 0xa2 },
        { 0x83, 0xf1, 0x31, 0x88, 0x0d },
        { 0x83, 0xf2, 0x49, 0x88, 0x15 },
        { 0x83, 0xf0, 0x52, 0xa2 },
        { 0x83, 0xf1, 0x4b, 0x88, 0x0d },
        { 0x83, 0xf2, 0x72, 0x88, 0x15 },
        { 0x83, 0xf0, 0x78, 0xa2 },
        { 0x83, 0xf1, 0x4d, 0x88, 0x0d },
        { 0x83, 0xf2, 0x74, 0x88, 0x15 },
        { 0x83, 0xf0, 0x71, 0xa2 },
        { 0x83, 0xf1, 0x4c, 0x88, 0x0d },
        { 0x83, 0xf2, 0x69, 0x88, 0x15 },
        { 0x83, 0xf0, 0x65, 0xa2 },
        { 0x83, 0xf1, 0x6c, 0x88, 0x0d },
        { 0x83, 0xf2, 0x73, 0x88, 0x15 },
        { 0x83, 0xf0, 0x76, 0xa2 },
        { 0x83, 0xf1, 0x61, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6a, 0x88, 0x15 },
        { 0x83, 0xf0, 0x55, 0xa2 },
        { 0x83, 0xf1, 0x6a, 0x88, 0x0d },
        { 0x83, 0xf2, 0x79, 0x88, 0x15 },
        { 0x83, 0xf0, 0x72, 0xa2 },
        { 0x83, 0xf1, 0x67, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4f, 0x88, 0x15 },
        { 0x83, 0xf0, 0x43, 0xa2 },
        { 0x83, 0xf1, 0x36, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4e, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6d, 0xa2 },
        { 0x83, 0xf1, 0x79, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x59, 0xa2 },
        { 0x83, 0xf1, 0x4d, 0x88, 0x0d },
        { 0x83, 0xf2, 0x76, 0x88, 0x15 },
        { 0x83, 0xf0, 0x5a, 0xa2 },
        { 0x83, 0xf1, 0x4e, 0x88, 0x0d },
        { 0x83, 0xf2, 0x45, 0x88, 0x15 },
        { 0x83, 0xf0, 0x52, 0xa2 },
        { 0x83, 0xf1, 0x33, 0x88, 0x0d },
        { 0x83, 0xf2, 0x68, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x46, 0x88, 0x0d },
        { 0x83, 0xf2, 0x45, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x4c, 0x88, 0x0d },
        { 0x83, 0xf2, 0x31, 0x88, 0x15 },
        { 0x83, 0xf0, 0x65, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x62, 0x88, 0x15 },
        { 0x83, 0xf0, 0x43, 0xa2 },
        { 0x83, 0xf1, 0x79, 0x88, 0x0d },
        { 0x83, 0xf2, 0x54, 0x88, 0x15 },
        { 0x83, 0xf0, 0x66, 0xa2 },
        { 0x83, 0xf1, 0x44, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x59, 0x88, 0x0d },
        { 0x83, 0xf2, 0x79, 0x88, 0x15 },
        { 0x83, 0xf0, 0x51, 0xa2 },
        { 0x83, 0xf1, 0x31, 0x88, 0x0d },
        { 0x83, 0xf2, 0x57, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x34, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4f, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x31, 0x88, 0x0d },
        { 0x83, 0xf2, 0x32, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6c, 0xa2 },
        { 0x83, 0xf1, 0x78, 0x88, 0x0d },
        { 0x83, 0xf2, 0x66, 0x88, 0x15 },
        { 0x83, 0xf0, 0x30, 0xa2 },
        { 0x83, 0xf1, 0x77, 0x88, 0x0d },
        { 0x83, 0xf2, 0x56, 0x88, 0x15 },
        { 0x83, 0xf0, 0x49, 0xa2 },
        { 0x83, 0xf1, 0x52, 0x88, 0x0d },
        { 0x83, 0xf2, 0x35, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6d, 0xa2 },
        { 0x83, 0xf1, 0x63, 0x88, 0x0d },
        { 0x83, 0xf2, 0x47, 0x88, 0x15 },
        { 0x83, 0xf0, 0x4e, 0xa2 },
        { 0x83, 0xf1, 0x37, 0x88, 0x0d },
        { 0x83, 0xf2, 0x58, 0x88, 0x15 },
        { 0x83, 0xf0, 0x43, 0xa2 },
        { 0x83, 0xf1, 0x58, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4a, 0x88, 0x15 },
        { 0x83, 0xf0, 0x52, 0xa2 },
        { 0x83, 0xf1, 0x48, 0x88, 0x0d },
        { 0x83, 0xf2, 0x4f, 0x88, 0x15 },
        { 0x83, 0xf0, 0x46, 0xa2 },
        { 0x83, 0xf1, 0x48, 0x88, 0x0d },
        { 0x83, 0xf2, 0x53, 0x88, 0x15 },
        { 0x83, 0xf0, 0x66, 0xa2 },
        { 0x83, 0xf1, 0x31, 0x88, 0x0d },
        { 0x83, 0xf2, 0x67, 0x88, 0x15 },
        { 0x83, 0xf0, 0x7a, 0xa2 },
        { 0x83, 0xf1, 0x58, 0x88, 0x0d },
        { 0x83, 0xf2, 0x57, 0x88, 0x15 },
        { 0x83, 0xf0, 0x61, 0xa2 },
        { 0x83, 0xf1, 0x62, 0x88, 0x0d },
        { 0x83, 0xf2, 0x52, 0x88, 0x15 },
        { 0x83, 0xf0, 0x53, 0xa2 },
        { 0x83, 0xf1, 0x76, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6d, 0x88, 0x15 },
        { 0x83, 0xf0, 0x74, 0xa2 },
        { 0x83, 0xf1, 0x31, 0x88, 0x0d },
        { 0x83, 0xf2, 0x6e, 0x88, 0x15 },
        { 0x83, 0xf0, 0x72, 0xa2 },
        { 0x83, 0xf1, 0x6c, 0x88, 0x0d },
        { 0x83, 0xf2, 0x37, 0x88, 0x15 },
        { 0x83, 0xf0, 0x73, 0xa2 },
        { 0x83, 0xf1, 0x57, 0x88, 0x0d },
        { 0x83, 0xf2, 0x36, 0x88, 0x15 },
        { 0x83, 0xf0, 0x63, 0xa2 },
        { 0x83, 0xf1, 0x6a, 0x88, 0x0d },
        { 0x83, 0xf2, 0x78, 0x88, 0x15 },
        { 0x83, 0xf0, 0x6c, 0xa2 },
        { 0x83, 0xf1, 0x6a, 0x88, 0x0d },
        { 0x83, 0xf2, 0x75, 0x88, 0x15 },
        { 0x83, 0xf0, 0x75, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x61, 0x88, 0x15 },
        { 0x83, 0xf0, 0x77, 0xa2 },
        { 0x83, 0xf1, 0x49, 0x88, 0x0d },
        { 0x83, 0xf2, 0x44, 0x88, 0x15 },
        { 0x83, 0xf0, 0x41, 0xa2 },
        { 0x83, 0xf1, 0x51, 0x88, 0x0d },
        { 0x83, 0xf2, 0x41, 0x88, 0x15 },
        { 0x83, 0xf0, 0x42, 0xa2 }
    };

    [[nodiscard]]
    bool PatchSolution2::FindPatchOffset() noexcept {

        try {
            auto SectionHeader_text = _Image.ImageSectionHeader(".text");
            auto SectionView_text = _Image.ImageSectionView<const uint8_t*>(SectionHeader_text);
            const uint8_t* lpPatch[_countof(_PatchOffset)] = {};

            std::vector<size_t> Hints;
            DWORD PossibleRangeStart = 0xffffffff;
            DWORD PossibleRangeEnd;

            for (DWORD i = 0; i < SectionHeader_text->SizeOfRawData; ++i) {
                if (memcmp(SectionView_text + i, Keyword[0], sizeof(Keyword[0])) == 0) {
                    Hints.emplace_back(
                        *reinterpret_cast<const uint32_t*>(SectionView_text + i + sizeof(Keyword[0]))
                    );

                    if (i < PossibleRangeStart) {
                        PossibleRangeStart = i;
                    }
                }
            }

            PossibleRangeStart -= 0x1000;
            PossibleRangeEnd = PossibleRangeStart + 0x100000;

            // Keywords[0] should occur 3 times. 
            if (Hints.size() != 3) {
                throw Exception(NKG_CURRENT_SOURCE_FILE(), NKG_CURRENT_SOURCE_LINE(), TEXT("Hints.size() != 3"));
            }

            std::sort(Hints.begin(), Hints.end());

            if (Hints.back() - Hints.front() != 0x127382BE - 0x12738210) {
                throw Exception(NKG_CURRENT_SOURCE_FILE(), NKG_CURRENT_SOURCE_LINE(), TEXT("Hints.back() - Hints.front() != 0x127382BE - 0x12738210"));
            }

            for (size_t i = 0; i < _countof(_PatchOffset); ++i) {
                uint8_t CurrentKeyword[9];
                size_t CurrentKeywordSize = i % 3 == 1 ? 4 : 5;

                memcpy(CurrentKeyword, Keyword[i], CurrentKeywordSize);
                *reinterpret_cast<uint32_t*>(CurrentKeyword + CurrentKeywordSize) = Hints[0] + i;
                CurrentKeywordSize += sizeof(uint32_t);

                for (DWORD j = PossibleRangeStart; j < PossibleRangeEnd; ++j) {
                    if (memcmp(SectionView_text + j, CurrentKeyword, CurrentKeywordSize) == 0) {
                        lpPatch[i] = SectionView_text + j;
                        break;
                    }
                }

                // if not found, refuse to patch
                if (lpPatch[i] == nullptr) {
                    throw Exception(NKG_CURRENT_SOURCE_FILE(), NKG_CURRENT_SOURCE_LINE(), TEXT("A patch point is missing."));
                }
            }

            for (size_t i = 0; i < _countof(_PatchOffset); ++i) {
                _PatchOffset[i] = _Image.PointerToFileOffset(lpPatch[i]);
            }

            LOG_SUCCESS(0, "PatchSolution2 ...... Ready to apply");
            for (size_t i = 0; i < _countof(_PatchOffset); i += 4) {
                static_assert(sizeof(_countof(_PatchOffset)) % 4 == 0);
                LOG_HINT(4, "Patch offset[%zu ... %zu] = 0x%.8zx, 0x%.8zx, 0x%.8zx, 0x%.8zx", i, i + 3, _PatchOffset[i], _PatchOffset[i + 1], _PatchOffset[i + 2], _PatchOffset[i + 3]);
            }

            return true;
        } catch (nkg::Exception&) {
            for (size_t i = 0; i < _countof(_PatchOffset); ++i) {
                _PatchOffset[i] = InvalidOffset;
            }

            LOG_FAILURE(0, "PatchSolution2 ...... Omitted");

            return false;
        }
    }
}

