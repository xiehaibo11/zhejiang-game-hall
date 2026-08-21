
undefined8 FUN_00c2c5f8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar2 = FUN_00c29ac0(param_1,1);
  iVar1 = FUN_00c29cf0(param_1,2);
  lVar3 = FUN_00c29b44(param_1,3);
  lVar7 = *(long *)(param_1 + 0x10);
  *(long *)(lVar7 + 0xa0) = param_1;
  *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(lVar7 + 0x98);
  uVar6 = uVar2;
  if ((1 < iVar1) && (lVar3 != 0)) {
    iVar1 = iVar1 + -1;
    uVar6 = FUN_00c1b4c4(param_1,lVar3,uVar2);
    *(undefined8 *)(lVar7 + 0x88) = *(undefined8 *)(lVar7 + 0x98);
    FUN_00c1a6b4(lVar7 + 0x88,uVar2);
  }
  puVar4 = (undefined8 *)FUN_00c1b0c8(lVar7 + 0x88,uVar6,iVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  uVar5 = FUN_00bfba1c(param_1,puVar4[2],(int)*puVar4 - (int)puVar4[2]);
  *(ulong *)(lVar3 + -8) = uVar5 | 0xfffd800000000000;
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) < *(ulong *)(*(long *)(param_1 + 0x10) + 0x28)) {
    return 1;
  }
  FUN_00c19f80(param_1);
  return 1;
}

