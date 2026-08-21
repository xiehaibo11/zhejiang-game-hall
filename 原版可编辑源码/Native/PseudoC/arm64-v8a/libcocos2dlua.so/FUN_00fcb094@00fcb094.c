
void FUN_00fcb094(long param_1,uint param_2,undefined1 *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = 2;
  if ((param_5 & 1) == 0) {
    uVar2 = 0;
  }
  uVar7 = (ulong)uVar2;
  if ((param_4 & 1) == 0) {
    if ((1 << uVar7 & param_2) == 0) {
      uVar3 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      pbVar4 = (byte *)(param_1 + uVar7 + (ulong)uVar2 * 2);
      uVar6 = (uint)*pbVar4;
                    /* catch() { ... } // from try @ 00fcb0a8 with catch @ 00fcb0ec */
      uVar5 = (uint)pbVar4[1];
      uVar3 = (uint)pbVar4[2];
    }
    uVar1 = uVar2 | 1;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 4;
                    /* try { // try from 00fcb290 to 010cb293 has its CatchHandler @ 00fcb2c4 */
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcb290 with catch @ 00fcb2c4
                        */
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
                    /* catch() { ... } // from try @ 00fcb34c with catch @ 00fcb2d8 */
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 8;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
                    /* try { // try from 00fcb308 to 010cb30f has its CatchHandler @ 00fcb3c0 */
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 9;
                    /* try { // try from 00fcb334 to 010cb34b has its CatchHandler @ 00fcb3c8 */
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
                    /* try { // try from 00fcb34c to 010cb3eb has its CatchHandler @ 00fcb2d8 */
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 0xc;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar2 = uVar2 | 0xd;
    if ((1 << (ulong)uVar2 & param_2) == 0) goto LAB_00fcb3c0;
    lVar8 = (ulong)uVar2 + (ulong)uVar2 * 2;
  }
  else {
    uVar2 = uVar2 << 2;
                    /* try { // try from 00fcb0a8 to 010cb0bf has its CatchHandler @ 00fcb0ec */
    if ((1 << (ulong)uVar2 & param_2) == 0) {
      uVar3 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
      pbVar4 = (byte *)(param_1 + uVar7 * 0xc);
                    /* try { // try from 00fcb0c0 to 010cb0ff has its CatchHandler @ 00fcb070 */
      uVar6 = (uint)*pbVar4;
      uVar5 = (uint)pbVar4[1];
      uVar3 = (uint)pbVar4[2];
    }
    uVar1 = uVar2 | 1;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
                    /* try { // try from 00fcb130 to 010cb133 has its CatchHandler @ 00fcb15c */
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 2;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcb130 with catch @ 00fcb15c
                        */
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 3;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 4;
                    /* try { // try from 00fcb1a4 to 010cb1a7 has its CatchHandler @ 00fcb1d0 */
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcb1a4 with catch @ 00fcb1d0
                        */
    uVar1 = uVar2 | 5;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 6;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
                    /* try { // try from 00fcb214 to 010cb217 has its CatchHandler @ 00fcb248 */
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar2 = uVar2 | 7;
    if ((1 << (ulong)uVar2 & param_2) == 0) goto LAB_00fcb3c0;
    lVar8 = (ulong)uVar2 + (ulong)uVar2 * 2;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00fcb214 with catch @ 00fcb248
                        */
  }
  pbVar4 = (byte *)(param_1 + lVar8);
  uVar6 = uVar6 + *pbVar4;
  uVar5 = uVar5 + pbVar4[1];
  uVar3 = uVar3 + pbVar4[2];
LAB_00fcb3c0:
                    /* catch() { ... } // from try @ 00fcb308 with catch @ 00fcb3c0 */
                    /* catch() { ... } // from try @ 00fcb334 with catch @ 00fcb3c8 */
  *param_3 = (char)(uVar6 + 4 >> 3);
  param_3[1] = (char)(uVar5 + 4 >> 3);
  param_3[2] = (char)(uVar3 + 4 >> 3);
  return;
}

