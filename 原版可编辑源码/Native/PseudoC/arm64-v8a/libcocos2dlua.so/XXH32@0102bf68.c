
uint XXH32(byte *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
                    /* try { // try from 0102bf84 to 0112bf8b has its CatchHandler @ 0102bff8 */
  pbVar1 = param_1 + param_2;
  if (param_2 < 0x10) {
    iVar11 = param_3 + 0x165667b1;
  }
  else {
                    /* try { // try from 0102bf90 to 0112bf97 has its CatchHandler @ 0102bfe8 */
                    /* try { // try from 0102bf9c to 0112bfa3 has its CatchHandler @ 0102bfd8 */
    uVar9 = param_3 + 0x85ebca77;
    uVar12 = param_3 + 0x24234428;
                    /* try { // try from 0102bfa8 to 0112bfb3 has its CatchHandler @ 0102bfc4 */
    uVar10 = param_3 + 0x61c8864f;
    do {
      iVar11 = *(int *)param_1;
      pbVar2 = param_1 + 4;
      pbVar8 = param_1 + 8;
      pbVar3 = param_1 + 0xc;
                    /* try { // try from 0102bfb4 to 0112c00b has its CatchHandler @ 0102bf4c */
      param_1 = param_1 + 0x10;
      uVar12 = uVar12 + iVar11 * -0x7a143589;
      uVar9 = uVar9 + *(int *)pbVar2 * -0x7a143589;
                    /* catch() { ... } // from try @ 0102bfa8 with catch @ 0102bfc4 */
      param_3 = param_3 + *(int *)pbVar8 * -0x7a143589;
      uVar10 = uVar10 + *(int *)pbVar3 * -0x7a143589;
      uVar4 = uVar12 >> 0x13 | uVar12 * 0x2000;
      uVar5 = uVar9 >> 0x13 | uVar9 * 0x2000;
      uVar6 = param_3 >> 0x13 | param_3 * 0x2000;
                    /* catch() { ... } // from try @ 0102bf9c with catch @ 0102bfd8 */
      uVar7 = uVar10 >> 0x13 | uVar10 * 0x2000;
      uVar12 = uVar4 * -0x61c8864f;
      uVar9 = uVar5 * -0x61c8864f;
      param_3 = uVar6 * -0x61c8864f;
                    /* catch() { ... } // from try @ 0102bf90 with catch @ 0102bfe8 */
      uVar10 = uVar7 * -0x61c8864f;
    } while (param_1 <= pbVar1 + -0x10);
                    /* catch() { ... } // from try @ 0102bf84 with catch @ 0102bff8 */
    iVar11 = (uVar5 * 0x1bbcd880 | uVar9 >> 0x19) + (uVar4 * 0x3c6ef362 | uVar12 >> 0x1f) +
             (uVar6 * 0x779b1000 | param_3 >> 0x14) + (uVar7 * -0x193c0000 | uVar10 >> 0xe);
  }
  uVar9 = iVar11 + param_2;
  for (; param_1 <= pbVar1 + -4; param_1 = param_1 + 4) {
    uVar9 = uVar9 + *(int *)param_1 * -0x3d4d51c3;
                    /* try { // try from 0102c070 to 0112c07f has its CatchHandler @ 0102c0a8 */
    uVar9 = (uVar9 >> 0xf | uVar9 * 0x20000) * 0x27d4eb2f;
  }
  if (param_1 < pbVar1) {
    do {
      pbVar8 = param_1 + 1;
      uVar9 = uVar9 + (uint)*param_1 * 0x165667b1;
      uVar9 = (uVar9 >> 0x15 | uVar9 * 0x800) * -0x61c8864f;
      param_1 = pbVar8;
    } while (pbVar1 != pbVar8);
  }
  uVar9 = (uVar9 ^ uVar9 >> 0xf) * -0x7a143589;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51c3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0102c070 with catch @ 0102c0a8
                        */
  return uVar9 ^ uVar9 >> 0x10;
}

