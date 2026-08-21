
ulong lua_lessthan(long param_1,undefined8 param_2,undefined4 param_3)

{
  double *pdVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  pdVar3 = (double *)FUN_00c03214();
  pdVar4 = (double *)FUN_00c03214(param_1,param_3);
  pdVar1 = (double *)(*(long *)(param_1 + 0x10) + 0xe8);
  if ((pdVar3 == pdVar1) || (pdVar4 == pdVar1)) {
    return 0;
  }
  uVar2 = (uint)((long)*pdVar3 >> 0x2f);
  if (uVar2 == 0xfffffff2) {
    uVar2 = (uint)((long)*pdVar4 >> 0x2f);
    if (uVar2 == 0xfffffff2) {
      return (ulong)(*(int *)pdVar3 < *(int *)pdVar4);
    }
    if (0xfffffff2 < uVar2) goto LAB_00c03c0c;
    dVar8 = (double)*(int *)pdVar3;
  }
  else {
    if ((0xfffffff2 < uVar2) || (uVar2 = (uint)((long)*pdVar4 >> 0x2f), 0xfffffff2 < uVar2)) {
LAB_00c03c0c:
      uVar5 = FUN_00c1db68(param_1,pdVar3,pdVar4,0);
      if (1 < uVar5) {
        *(ulong *)(param_1 + 0x28) = uVar5 + 0x10;
        FUN_00c175d8(param_1,uVar5,2);
        lVar6 = *(long *)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar6 + -0x18;
        uVar5 = (ulong)((uint)((long)*(undefined8 *)(lVar6 + -8) >> 0x2f) < 0xfffffffe);
      }
      return uVar5;
    }
    dVar8 = *pdVar3;
    if (uVar2 == 0xfffffff2) {
      dVar7 = (double)*(int *)pdVar4;
      goto LAB_00c03c74;
    }
  }
  dVar7 = *pdVar4;
LAB_00c03c74:
  return (ulong)(dVar8 < dVar7);
}

