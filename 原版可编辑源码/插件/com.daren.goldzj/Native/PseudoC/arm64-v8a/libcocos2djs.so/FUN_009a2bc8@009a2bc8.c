
void FUN_009a2bc8(long param_1,uint param_2,undefined1 *param_3,uint param_4,uint param_5)

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
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 5;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 8;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 9;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 0xc;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
                    /* catch() { ... } // from try @ 009a2bd8 with catch @ 009a2ea4 */
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
                    /* try { // try from 009a2ec0 to 00aa2f13 has its CatchHandler @ 009a2ec0
                       catch() { ... } // from try @ 009a2ec0 with catch @ 009a2ec0
                       catch() { ... } // from try @ 009a30a0 with catch @ 009a2ec0 */
    uVar2 = uVar2 | 0xd;
    if ((1 << (ulong)uVar2 & param_2) == 0) goto LAB_009a2ef4;
    lVar8 = (ulong)uVar2 + (ulong)uVar2 * 2;
  }
  else {
                    /* try { // try from 009a2bd8 to 00aa2bef has its CatchHandler @ 009a2ea4 */
    uVar2 = uVar2 << 2;
    if ((1 << (ulong)uVar2 & param_2) == 0) {
      uVar3 = 0;
      uVar5 = 0;
      uVar6 = 0;
    }
    else {
                    /* try { // try from 009a2bf0 to 00aa2ebf has its CatchHandler @ 009a2b84 */
      pbVar4 = (byte *)(param_1 + uVar7 * 0xc);
      uVar6 = (uint)*pbVar4;
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
    uVar1 = uVar2 | 2;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
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
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 5;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar1 = uVar2 | 6;
    if ((1 << (ulong)uVar1 & param_2) != 0) {
      pbVar4 = (byte *)(param_1 + (ulong)uVar1 + (ulong)uVar1 * 2);
      uVar6 = uVar6 + *pbVar4;
      uVar5 = uVar5 + pbVar4[1];
      uVar3 = uVar3 + pbVar4[2];
    }
    uVar2 = uVar2 | 7;
    if ((1 << (ulong)uVar2 & param_2) == 0) goto LAB_009a2ef4;
    lVar8 = (ulong)uVar2 + (ulong)uVar2 * 2;
  }
  pbVar4 = (byte *)(param_1 + lVar8);
  uVar6 = uVar6 + *pbVar4;
  uVar5 = uVar5 + pbVar4[1];
  uVar3 = uVar3 + pbVar4[2];
LAB_009a2ef4:
  *param_3 = (char)(uVar6 + 4 >> 3);
  param_3[1] = (char)(uVar5 + 4 >> 3);
                    /* try { // try from 009a2f14 to 00aa2f2b has its CatchHandler @ 009a311c */
  param_3[2] = (char)(uVar3 + 4 >> 3);
  return;
}

