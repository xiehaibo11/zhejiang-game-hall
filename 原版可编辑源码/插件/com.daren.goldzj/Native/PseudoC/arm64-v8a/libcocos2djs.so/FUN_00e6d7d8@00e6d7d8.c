
void FUN_00e6d7d8(uint *param_1,ushort param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = (long)(int)param_1[1];
  uVar5 = -lVar6;
  uVar3 = param_3 + -1 + lVar6 & uVar5;
  uVar4 = uVar5 & param_4;
  uVar2 = uVar3;
  if ((long)uVar3 <= (long)uVar4) {
    uVar5 = (ulong)*param_1;
    goto LAB_00e6d908;
  }
  if (uVar3 != uVar4 + lVar6) {
    return;
  }
  uVar1 = *(ushort *)(param_5 + 0x18);
  uVar7 = uVar4;
  switch(uVar1 & 7) {
  case 0:
    break;
  case 1:
  case 5:
    if ((*(long *)(param_5 + 0x38) == param_6) && (*(long *)(param_5 + 0x20) < 1)) {
      if ((uVar1 >> 4 & 1) == 0) {
        return;
      }
      if ((long)(param_4 - param_3) < (long)(int)param_1[2]) {
        return;
      }
    }
    if ((*(long *)(param_6 + 0x38) == param_5) &&
       (*(long *)(param_5 + 0x28) == (long)(short)param_2)) {
      if ((uVar1 >> 5 & 1) == 0) {
        return;
      }
      if ((long)(param_4 - param_3) < (long)(int)param_1[2]) {
        return;
      }
    }
    if ((uVar1 & 7) != 1) goto switchD_00e6d830_caseD_4;
    break;
  default:
    return;
  case 4:
switchD_00e6d830_caseD_4:
    lVar6 = param_3 + -1 + param_4;
    if (lVar6 < 0) {
      lVar6 = lVar6 + 1;
    }
    uVar7 = (long)(int)param_1[2] + (lVar6 >> 1) & uVar5;
  }
  uVar5 = (ulong)*param_1;
  if ((-1 < (long)uVar7) && (uVar2 = uVar7, (ulong)param_1[0x28] <= uVar7 >> (uVar5 & 0x3f))) {
    uVar2 = uVar4;
  }
  if (uVar2 != uVar3) {
    uVar4 = uVar3;
  }
  uVar4 = (long)uVar4 >> (uVar5 & 0x3f);
  if (((-1 < (long)uVar4) && (uVar4 < param_1[0x28])) &&
     ((0x80U >> (ulong)((int)(short)param_2 & 7) &
      (uint)*(byte *)((*(long *)(param_1 + 0x14) + (long)((int)((uint)param_2 << 0x10) >> 0x13)) -
                     uVar4 * (long)(int)param_1[0x2a])) != 0)) {
    return;
  }
LAB_00e6d908:
  uVar2 = (long)uVar2 >> (uVar5 & 0x3f);
  if ((-1 < (long)uVar2) && (uVar2 < param_1[0x28])) {
    lVar6 = *(long *)(param_1 + 0x14) + (long)((int)((uint)param_2 << 0x10) >> 0x13);
    *(byte *)(lVar6 + -(uVar2 * (long)(int)param_1[0x2a])) =
         *(byte *)(lVar6 + -(uVar2 * (long)(int)param_1[0x2a])) |
         (byte)(0x80 >> (ulong)((int)(short)param_2 & 7));
  }
  return;
}

