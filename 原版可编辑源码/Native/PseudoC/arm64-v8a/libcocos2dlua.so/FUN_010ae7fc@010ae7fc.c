
void FUN_010ae7fc(uint *param_1,short param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  
  lVar10 = (long)(int)param_1[1];
  uVar8 = -lVar10;
  uVar6 = param_3 + -1 + lVar10 & uVar8;
  uVar7 = uVar8 & param_4;
  uVar4 = uVar6;
  if ((long)uVar6 <= (long)uVar7) {
    lVar9 = *(long *)(param_1 + 0x16);
    uVar8 = (ulong)*param_1;
    lVar10 = (long)((ulong)(uint)(int)param_2 << 0x20) >> 0x23;
                    /* try { // try from 010ae950 to 011ae95b has its CatchHandler @ 010aebc4 */
    bVar5 = (byte)(0x80 >> (ulong)((int)param_2 & 7));
    goto LAB_010ae95c;
  }
  if (uVar6 != uVar7 + lVar10) {
    return;
  }
  uVar2 = *(uint *)(param_5 + 0x18);
  uVar12 = uVar7;
  switch(uVar2 & 7) {
  case 0:
    break;
  case 1:
  case 5:
    if ((*(long *)(param_5 + 0x38) == param_6) && (*(long *)(param_5 + 0x20) < 1)) {
      if ((uVar2 >> 4 & 1) == 0) {
        return;
      }
                    /* try { // try from 010ae9b4 to 011ae9c3 has its CatchHandler @ 010aeba8 */
      if ((long)(param_4 - param_3) < (long)(int)param_1[2]) {
        return;
      }
    }
    if ((*(long *)(param_6 + 0x38) == param_5) && (*(long *)(param_5 + 0x28) == (long)param_2)) {
      if ((uVar2 >> 5 & 1) == 0) {
        return;
      }
                    /* try { // try from 010ae890 to 011ae8e7 has its CatchHandler @ 010ae890
                       catch() { ... } // from try @ 010ae890 with catch @ 010ae890
                       catch() { ... } // from try @ 010aeb2c with catch @ 010ae890
                       catch() { ... } // from try @ 010aeb6c with catch @ 010ae890 */
      if ((long)(param_4 - param_3) < (long)(int)param_1[2]) {
        return;
      }
    }
    if ((uVar2 & 7) != 1) goto switchD_010ae850_caseD_4;
    break;
  default:
    return;
  case 4:
switchD_010ae850_caseD_4:
    lVar10 = param_3 + -1 + param_4;
    if (lVar10 < 0) {
      lVar10 = lVar10 + 1;
    }
    uVar12 = (long)(int)param_1[2] + (lVar10 >> 1) & uVar8;
  }
  uVar8 = (ulong)*param_1;
  if ((-1 < (long)uVar12) &&
     (uVar4 = uVar12, (ulong)param_1[0x2c] <= (ulong)((long)uVar12 >> (uVar8 & 0x3f)))) {
    uVar4 = uVar7;
  }
  lVar9 = *(long *)(param_1 + 0x16);
  uVar2 = param_1[0x2e];
  if (uVar4 != uVar6) {
    uVar7 = uVar6;
  }
                    /* try { // try from 010ae8e8 to 011ae8f7 has its CatchHandler @ 010aebdc */
  lVar10 = (long)((ulong)(uint)(int)param_2 << 0x20) >> 0x23;
  uVar7 = (long)uVar7 >> (uVar8 & 0x3f);
                    /* try { // try from 010ae8f8 to 011ae90f has its CatchHandler @ 010aebe0 */
  uVar3 = 0x80 >> (ulong)((int)param_2 & 7);
  bVar5 = (byte)uVar3;
  pbVar11 = (byte *)((lVar9 + lVar10) - uVar7 * (long)(int)uVar2);
  if (0 < (int)uVar2) {
    pbVar11 = pbVar11 + (param_1[0x2c] - 1) * uVar2;
  }
                    /* try { // try from 010ae92c to 011ae93b has its CatchHandler @ 010aebac */
  if (((-1 < (long)uVar7) && (uVar7 < param_1[0x2c])) && ((uVar3 & *pbVar11) != 0)) {
    return;
  }
LAB_010ae95c:
  uVar4 = (long)uVar4 >> (uVar8 & 0x3f);
  if ((-1 < (long)uVar4) && (uVar4 < param_1[0x2c])) {
                    /* try { // try from 010ae974 to 011ae977 has its CatchHandler @ 010aeba4 */
    uVar2 = param_1[0x2e];
    pbVar11 = (byte *)((lVar9 + lVar10) - uVar4 * (long)(int)uVar2);
    pbVar1 = pbVar11 + uVar2 * (param_1[0x2c] - 1);
    if ((int)uVar2 < 1) {
      pbVar1 = pbVar11;
    }
    *pbVar1 = bVar5 | *pbVar1;
  }
  return;
}

