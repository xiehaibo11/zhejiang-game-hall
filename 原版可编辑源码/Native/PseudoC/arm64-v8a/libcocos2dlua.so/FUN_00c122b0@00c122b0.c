
void * FUN_00c122b0(long param_1,void *param_2,ulong param_3)

{
  size_t __n;
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (0xffffffffffffff7f < param_3) {
    return (void *)0x0;
  }
  uVar5 = *(ulong *)((long)param_2 + -8);
  lVar7 = (long)param_2 + -0x10;
  uVar6 = 0x20;
  uVar9 = uVar5 & 0xfffffffffffffffc;
  if (0x16 < param_3) {
    uVar6 = param_3 + 0xf & 0xfffffffffffffff8;
  }
  if (((uVar5 & 1) == 0) && ((*(ulong *)((long)param_2 + -0x10) & 1) != 0)) {
    if (uVar6 < 0xf9) goto LAB_00c12328;
    if ((uVar9 < uVar6 + 8) || (0x10000 < uVar9 - uVar6)) {
      uVar4 = *(ulong *)((long)param_2 + -0x10) & 0xfffffffffffffffe;
      puVar3 = (undefined4 *)__errno();
      uVar5 = uVar6 + 0x1036 & 0xfffffffffffff000;
      uVar1 = *puVar3;
      pvVar2 = mremap((void *)(lVar7 - uVar4),uVar9 + uVar4 + 0x20,uVar5,1);
      *puVar3 = uVar1;
      if (pvVar2 == (void *)0xffffffffffffffff) goto LAB_00c12328;
      lVar8 = uVar5 - uVar4;
      lVar7 = (long)pvVar2 + uVar4;
      uVar5 = lVar8 - 0x20;
      *(ulong *)(lVar7 + 8) = uVar5 | 2;
      *(undefined8 *)(lVar7 + uVar5 + 8) = 0xb;
      *(undefined8 *)(lVar7 + lVar8 + -0x10) = 0;
      goto LAB_00c12398;
    }
  }
  else if (uVar9 < uVar6) {
    if ((*(long *)(param_1 + 0x20) != lVar7 + uVar9) ||
       (uVar4 = uVar9 + *(long *)(param_1 + 0x10), uVar4 <= uVar6)) goto LAB_00c12328;
    uVar4 = uVar4 - uVar6;
    *(ulong *)((long)param_2 + -8) = uVar5 & 1 | 2 | uVar6;
    *(ulong *)(lVar7 + uVar6 + 8) = uVar4 | 1;
    *(ulong *)(param_1 + 0x20) = lVar7 + uVar6;
    *(ulong *)(param_1 + 0x10) = uVar4;
  }
  else {
    uVar4 = uVar9 - uVar6;
    if (0x1f < uVar4) {
      lVar8 = lVar7 + uVar6;
      *(ulong *)((long)param_2 + -8) = uVar5 & 1 | 2 | uVar6;
      *(ulong *)(lVar8 + 8) = uVar4 | 3;
      *(ulong *)(lVar8 + uVar4 + 8) = *(ulong *)(lVar8 + uVar4 + 8) | 1;
      FUN_00c11bd0(param_1,lVar8 + 0x10);
    }
  }
  if (lVar7 != 0) {
LAB_00c12398:
    return (void *)(lVar7 + 0x10);
  }
LAB_00c12328:
  pvVar2 = (void *)FUN_00c10ad0(param_1,param_3);
  if (pvVar2 != (void *)0x0) {
    lVar7 = 8;
    if (((*(ulong *)((long)param_2 + -8) & 1) == 0) &&
       (lVar7 = 8, (*(ulong *)((long)param_2 + -0x10) & 1) != 0)) {
      lVar7 = 0x10;
    }
    __n = uVar9 - lVar7;
    if (param_3 < uVar9 - lVar7) {
      __n = param_3;
    }
    memcpy(pvVar2,param_2,__n);
    FUN_00c11bd0(param_1,param_2);
    return pvVar2;
  }
  return (void *)0x0;
}

