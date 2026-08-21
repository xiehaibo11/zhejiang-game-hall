
long FUN_00bfc474(long param_1,ulong param_2,long *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = (uint)param_2 & 0xffff;
  lVar8 = *(long *)(param_1 + 0x38);
  uVar1 = lVar8 + (ulong)uVar2 * 8;
  uVar6 = *(ulong *)(uVar1 - 8);
  if ((param_2 & 0xffff0000) == 0) {
    iVar3 = -1;
    if (*(char *)((uVar6 & 0x7fffffffffff) + 10) == '\0') {
      uVar7 = 0;
LAB_00bfc5c4:
      iVar3 = FUN_00bfc240(param_1,(uVar6 & 0x7fffffffffff) + 0x20,uVar7);
      goto LAB_00bfc548;
    }
LAB_00bfc4b8:
    uVar7 = *(long *)(param_1 + 0x28) + 8;
  }
  else {
    uVar7 = uVar1 + (param_2 >> 0x10 & 0xffff) * 8;
    iVar3 = -1;
    if (*(char *)((uVar6 & 0x7fffffffffff) + 10) == '\0') goto LAB_00bfc5c4;
LAB_00bfc548:
    if (uVar7 == 0) goto LAB_00bfc4b8;
  }
  if ((int)param_4 < 0) {
    if ((iVar3 != -1) &&
       (lVar4 = *(long *)((uVar6 & 0x7fffffffffff) + 0x20), (*(byte *)(lVar4 + -0x2b) >> 1 & 1) != 0
       )) {
      uVar5 = *(ulong *)(lVar8 + (ulong)uVar2 * 8);
      uVar6 = uVar1;
      if ((uVar5 & 7) == 3) {
        uVar6 = uVar1 - (uVar5 & 0xfffffffffffffff8);
        uVar7 = uVar1;
      }
      lVar8 = ((ulong)(*(byte *)(lVar4 + -0x5e) - param_4) + 1) * 8;
      if (uVar6 + lVar8 < uVar7) {
        *param_3 = (long)"(*vararg)";
        return uVar6 + lVar8 + -8;
      }
    }
    return 0;
  }
  if (iVar3 != -1) {
    lVar8 = FUN_00bfc354(*(undefined8 *)(*(long *)((uVar6 & 0x7fffffffffff) + 0x20) + -8),iVar3,
                         param_4 - 1);
    *param_3 = lVar8;
    if (lVar8 != 0) goto LAB_00bfc57c;
  }
  if ((param_4 != 0) && (uVar1 + ((ulong)param_4 + 1) * 8 < uVar7)) {
    *param_3 = (long)"(*temporary)";
  }
LAB_00bfc57c:
  return uVar1 + (ulong)param_4 * 8;
}

