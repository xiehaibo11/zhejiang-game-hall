
void FUN_0101ffb4(long param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_68;
  
  lVar24 = tpidr_el0;
  local_68 = *(long *)(lVar24 + 0x28);
  uVar14 = *(uint *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_1 + 0x10);
  uVar15 = *(uint *)(param_1 + 0x14);
  if (((ulong)param_2 & 3) != 0) {
    uStack_88 = *(undefined8 *)(param_2 + 10);
    local_90 = *(undefined8 *)(param_2 + 8);
    local_78 = *(undefined8 *)(param_2 + 0xe);
    local_80 = *(undefined8 *)(param_2 + 0xc);
    uStack_a8 = *(undefined8 *)(param_2 + 2);
    local_b0 = *(undefined8 *)param_2;
    local_98 = *(undefined8 *)(param_2 + 6);
    local_a0 = *(undefined8 *)(param_2 + 4);
    param_2 = (int *)&local_b0;
  }
                    /* try { // try from 01020004 to 0112000b has its CatchHandler @ 01020090 */
  iVar6 = *param_2;
  iVar16 = param_2[1];
  uVar1 = *(int *)(param_1 + 8) + (uVar15 & (uVar14 ^ 0xffffffff) | uVar5 & uVar14) + iVar6 +
          0xd76aa478;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar14;
                    /* try { // try from 01020030 to 0112004f has its CatchHandler @ 010200b0 */
  iVar7 = param_2[2];
  iVar17 = param_2[3];
                    /* try { // try from 01020050 to 011200cb has its CatchHandler @ 0101ffac */
  uVar2 = uVar15 + iVar16 + (uVar1 & uVar14 | uVar5 & (uVar1 ^ 0xffffffff)) + 0xe8c7b756;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = uVar5 + iVar7 + (uVar2 & uVar1 | uVar14 & (uVar2 ^ 0xffffffff)) + 0x242070db;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
                    /* catch() { ... } // from try @ 01020004 with catch @ 01020090 */
  iVar8 = param_2[4];
  iVar18 = param_2[5];
  uVar4 = uVar14 + iVar17 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0xc1bdceee;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
                    /* catch() { ... } // from try @ 01020030 with catch @ 010200b0 */
                    /* catch() { ... } // from try @ 01020184 with catch @ 010200cc */
  uVar1 = uVar1 + iVar8 + (uVar4 & uVar3 | uVar2 & (uVar4 ^ 0xffffffff)) + 0xf57c0faf;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  iVar9 = param_2[6];
  iVar19 = param_2[7];
  uVar2 = iVar18 + uVar2 + (uVar1 & uVar4 | uVar3 & (uVar1 ^ 0xffffffff)) + 0x4787c62a;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = iVar9 + uVar3 + (uVar2 & uVar1 | uVar4 & (uVar2 ^ 0xffffffff)) + 0xa8304613;
                    /* try { // try from 01020124 to 0112012b has its CatchHandler @ 01020220 */
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  iVar10 = param_2[8];
  iVar20 = param_2[9];
  uVar4 = iVar19 + uVar4 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0xfd469501;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
                    /* try { // try from 0102016c to 01120183 has its CatchHandler @ 010201e8 */
  uVar1 = iVar10 + uVar1 + (uVar4 & uVar3 | uVar2 & (uVar4 ^ 0xffffffff)) + 0x698098d8;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
                    /* try { // try from 01020184 to 0112023b has its CatchHandler @ 010200cc */
  iVar11 = param_2[10];
  iVar21 = param_2[0xb];
  uVar2 = iVar20 + uVar2 + (uVar1 & uVar4 | uVar3 & (uVar1 ^ 0xffffffff)) + 0x8b44f7af;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  uVar3 = (iVar11 + uVar3 + (uVar2 & uVar1 | uVar4 & (uVar2 ^ 0xffffffff))) - 0xa44f;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
                    /* catch() { ... } // from try @ 0102016c with catch @ 010201e8 */
  iVar12 = param_2[0xc];
  iVar22 = param_2[0xd];
  uVar4 = iVar21 + uVar4 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0x895cd7be;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  uVar1 = iVar12 + uVar1 + (uVar4 & uVar3 | uVar2 & (uVar4 ^ 0xffffffff)) + 0x6b901122;
                    /* catch() { ... } // from try @ 01020124 with catch @ 01020220 */
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
                    /* catch() { ... } // from try @ 010202d0 with catch @ 0102023c */
  uVar2 = iVar22 + uVar2 + (uVar1 & uVar4 | uVar3 & (uVar1 ^ 0xffffffff)) + 0xfd987193;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar13 = param_2[0xe];
  iVar23 = param_2[0xf];
  uVar3 = iVar13 + uVar3 + (uVar2 & uVar1 | uVar4 & (uVar2 ^ 0xffffffff)) + 0xa679438e;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
                    /* try { // try from 01020284 to 0112028b has its CatchHandler @ 01020368 */
  uVar4 = iVar23 + uVar4 + (uVar3 & uVar2 | uVar1 & (uVar3 ^ 0xffffffff)) + 0x49b40821;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
                    /* try { // try from 010202b4 to 011202cf has its CatchHandler @ 01020330 */
  uVar1 = iVar16 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xf61e2562;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
                    /* try { // try from 010202d0 to 01120383 has its CatchHandler @ 0102023c */
  uVar2 = iVar9 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xc040b340;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0x265e5a51;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
                    /* catch() { ... } // from try @ 010202b4 with catch @ 01020330 */
  uVar4 = iVar6 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0xe9b6c7aa;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar18 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xd62f105d;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
                    /* catch() { ... } // from try @ 01020284 with catch @ 01020368 */
                    /* catch() { ... } // from try @ 010203c4 with catch @ 01020384 */
  uVar2 = iVar11 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0x2441453;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0xd8a1e681;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
                    /* try { // try from 010203bc to 011203c3 has its CatchHandler @ 01020414 */
                    /* try { // try from 010203c4 to 0112044b has its CatchHandler @ 01020384 */
  uVar4 = iVar8 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0xe7d3fbc8;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0x21e1cde6;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
                    /* catch() { ... } // from try @ 010203bc with catch @ 01020414 */
  uVar2 = iVar13 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xc33707d6;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0xf4d50d87;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar10 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0x455a14ed;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xa9e3e905;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar7 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xfcefa3f8;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0x676f02d9;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar12 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0x8d2a4c8a;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
  uVar1 = (iVar18 + uVar1 + (uVar4 ^ uVar3 ^ uVar2)) - 0x5c6be;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar10 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x8771f681;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar21 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x6d9d6122;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar13 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xfde5380c;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar16 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xa4beea44;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar8 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x4bdecfa9;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar19 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xf6bb4b60;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar11 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xbebfbc70;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar22 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0x289b7ec6;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar6 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xeaa127fa;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar17 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xd4ef3085;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
                    /* catch() { ... } // from try @ 010207bc with catch @ 010206c0 */
  uVar4 = iVar9 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0x4881d05;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iVar20 + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xd9d4d039;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar12 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xe6db99e5;
                    /* try { // try from 0102070c to 01120713 has its CatchHandler @ 010208d4 */
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iVar23 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x1fa27cf8;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar7 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xc4ac5665;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
                    /* try { // try from 01020768 to 011207bb has its CatchHandler @ 010208f0 */
  uVar1 = iVar6 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf4292244;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar19 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x432aff97;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
                    /* try { // try from 010207bc to 01120927 has its CatchHandler @ 010206c0 */
  uVar3 = iVar13 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xab9423a7;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar18 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xfc93a039;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar12 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x655b59c3;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar17 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x8f0ccc92;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = (iVar11 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1)) - 0x100b83;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iVar16 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x85845dd1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar10 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x6fa87e4f;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar23 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xfe2ce6e0;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
                    /* catch() { ... } // from try @ 0102070c with catch @ 010208d4 */
  uVar3 = iVar9 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xa3014314;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
                    /* catch() { ... } // from try @ 01020768 with catch @ 010208f0 */
  uVar4 = iVar22 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x4e0811a1;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar8 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf7537e82;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iVar21 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xbd3af235;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar7 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0x2ad7d2bb;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  *(uint *)(param_1 + 0x10) = uVar3 + uVar5;
  *(uint *)(param_1 + 0x14) = uVar2 + uVar15;
  uVar5 = iVar20 + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xeb86d391;
  *(uint *)(param_1 + 8) = uVar1 + *(int *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar3 + uVar14 + (uVar5 >> 0xb | uVar5 * 0x200000);
  if (*(long *)(lVar24 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

