
void lua_gettable(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = FUN_00c03214();
  puVar2 = (undefined8 *)FUN_00c1cdf4(param_1,uVar1,*(long *)(param_1 + 0x28) + -8);
  lVar3 = *(long *)(param_1 + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar3 + -8) = *puVar2;
    return;
  }
  *(long *)(param_1 + 0x28) = lVar3 + 0x10;
  FUN_00c175d8(param_1,lVar3,2);
  lVar3 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar3 + -0x18;
  *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar3 + -8);
  return;
}

