
undefined8 FUN_00c2ab34(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = FUN_00c29a84(param_1,1);
  uVar3 = FUN_00c29a84(param_1,2);
  lVar4 = *(long *)(param_1 + 0x28);
  iVar1 = FUN_00bfb678(uVar2,uVar3);
  *(ulong *)(lVar4 + -8) = ~((ulong)(iVar1 + 1) << 0x2f);
  return 1;
}

