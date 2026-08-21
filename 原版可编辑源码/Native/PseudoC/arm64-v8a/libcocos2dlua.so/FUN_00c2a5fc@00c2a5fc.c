
undefined8 FUN_00c2a5fc(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00c29a84(param_1,1);
  *(long *)(param_1 + 0x28) = lVar1 + 8;
  plVar2 = (long *)FUN_00c1cd14(param_1,lVar1,0x12);
  if (*plVar2 == -1) {
    if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x28) <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x20)
       ) {
      FUN_00c19f80(param_1);
    }
    lVar1 = *(long *)(param_1 + 0x20);
    uVar3 = FUN_00c006dc(param_1,lVar1);
    uVar4 = 2;
    *(ulong *)(lVar1 + -0x10) = uVar3 | 0xfffd800000000000;
  }
  else {
    uVar4 = 0xffffffff;
    *(long *)(*(long *)(param_1 + 0x20) + -0x10) = *plVar2;
  }
  return uVar4;
}

