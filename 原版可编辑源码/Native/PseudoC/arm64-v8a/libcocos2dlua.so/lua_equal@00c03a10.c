
ulong lua_equal(long param_1,undefined8 param_2,undefined4 param_3)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  uint uVar8;
  double dVar9;
  
  pdVar3 = (double *)FUN_00c03214();
  pdVar4 = (double *)FUN_00c03214(param_1,param_3);
  uVar2 = (uint)((long)*pdVar3 >> 0x2f);
  if (uVar2 == 0xfffffff2) {
    uVar2 = (uint)((long)*pdVar4 >> 0x2f);
    if (uVar2 == 0xfffffff2) {
      return (ulong)(*(int *)pdVar3 == *(int *)pdVar4);
    }
    if (0xfffffff2 < uVar2) {
      return 0;
    }
    dVar7 = (double)*(int *)pdVar3;
  }
  else {
    dVar7 = *pdVar4;
    uVar8 = (uint)((long)dVar7 >> 0x2f);
    if ((0xfffffff2 < uVar2) || (0xfffffff2 < uVar8)) {
      uVar5 = 0;
      if (uVar2 == uVar8) {
        if (0xfffffffc < uVar2) {
          pdVar1 = (double *)(*(long *)(param_1 + 0x10) + 0xe8);
          return (ulong)(pdVar3 != pdVar1 && pdVar4 != pdVar1);
        }
        if (*pdVar3 == dVar7) {
          uVar5 = 1;
        }
        else if ((uVar2 < 0xfffffff5) &&
                (uVar5 = FUN_00c1d830(param_1,(ulong)*pdVar3 & 0x7fffffffffff,
                                      (ulong)dVar7 & 0x7fffffffffff,0), 1 < uVar5)) {
          *(ulong *)(param_1 + 0x28) = uVar5 + 0x10;
          FUN_00c175d8(param_1,uVar5,2);
          lVar6 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar6 + -0x18;
          uVar5 = (ulong)((uint)((long)*(undefined8 *)(lVar6 + -8) >> 0x2f) < 0xfffffffe);
        }
      }
      return uVar5;
    }
    dVar7 = *pdVar3;
    if (uVar8 == 0xfffffff2) {
      dVar9 = (double)*(int *)pdVar4;
      goto LAB_00c03b00;
    }
  }
  dVar9 = *pdVar4;
LAB_00c03b00:
  return (ulong)(dVar7 == dVar9);
}

