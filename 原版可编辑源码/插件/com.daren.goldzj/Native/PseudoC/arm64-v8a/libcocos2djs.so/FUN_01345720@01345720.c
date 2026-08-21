
undefined8 FUN_01345720(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x26;
  
  while ((int)param_2 != (int)param_1) {
    uVar1 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_2 + -1) + 7);
    uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)(param_1 + -1) + 7);
    if (((uVar1 | uVar2 << 8) & 0xf0f) == 0x808) {
      uVar3 = (ulong)*(uint *)(param_2 + 7);
      uVar4 = (ulong)*(uint *)(param_1 + 7);
      uVar5 = uVar3;
      if (uVar4 < uVar3) {
        uVar5 = uVar4;
      }
      lVar6 = 0xb;
      goto LAB_01345824;
    }
    uVar2 = uVar2 & 7;
    uVar1 = uVar1 & 7;
    if ((uVar1 == 5) ||
       ((uVar1 == 1 && (*(int *)(param_2 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 200))))) {
      param_2 = unaff_x26 + (ulong)*(uint *)(param_2 + 0xb);
      if ((uVar2 == 5) ||
         ((uVar2 == 1 && (*(int *)(param_1 + 0xf) == (int)*(undefined8 *)(unaff_x26 + 200))))) {
        param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
      }
    }
    else {
      if ((uVar2 != 5) &&
         ((uVar2 != 1 || (*(int *)(param_1 + 0xf) != (int)*(undefined8 *)(unaff_x26 + 200))))) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x25a0));
      }
      param_1 = unaff_x26 + (ulong)*(uint *)(param_1 + 0xb);
    }
  }
  goto LAB_01345868;
LAB_01345824:
  if (lVar6 == uVar5 + 0xb) goto LAB_01345848;
  if (*(byte *)(param_2 + lVar6) != *(byte *)(param_1 + lVar6)) {
    if (*(byte *)(param_1 + lVar6) <= *(byte *)(param_2 + lVar6)) goto LAB_01345858;
    goto LAB_01345860;
  }
  lVar6 = lVar6 + 1;
  goto LAB_01345824;
LAB_01345848:
  if (uVar3 != uVar4) {
    if (uVar4 <= uVar3) {
LAB_01345858:
      return *(undefined8 *)(unaff_x26 + 0xb8);
    }
LAB_01345860:
    return *(undefined8 *)(unaff_x26 + 0xc0);
  }
LAB_01345868:
  return *(undefined8 *)(unaff_x26 + 0xb8);
}

