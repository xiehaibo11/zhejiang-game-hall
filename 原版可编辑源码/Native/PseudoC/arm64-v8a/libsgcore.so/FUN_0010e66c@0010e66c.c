
undefined8 FUN_0010e66c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 != (long *)0x0) {
    iVar3 = 0;
    do {
      iVar1 = FUN_0010e398(plVar4[7],param_2);
      if (iVar1 == 0) {
        uVar2 = FUN_0010e5e8(param_1,iVar3);
        return uVar2;
      }
      plVar4 = (long *)*plVar4;
      iVar3 = iVar3 + 1;
    } while (plVar4 != (long *)0x0);
  }
  return 0;
}

