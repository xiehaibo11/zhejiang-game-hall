
void lua_settable(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = FUN_00c03214();
  puVar2 = (undefined8 *)FUN_00c1cf6c(param_1,uVar1,*(long *)(param_1 + 0x28) + -0x10);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3 + -0x10;
    *puVar2 = *(undefined8 *)(lVar3 + -8);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + -0x28);
  *(long *)(param_1 + 0x28) = lVar3 + 0x18;
  FUN_00c175d8(param_1,lVar3,1);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -0x20;
  return;
}

