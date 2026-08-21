
undefined8 luaL_callmeta(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = luaL_getmetafield();
  if ((int)uVar1 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x28) = puVar3 + -1;
    *puVar3 = 0xffffffffffffffff;
    puVar2 = (undefined8 *)FUN_00c03214(param_1,param_2);
    puVar3[1] = *puVar2;
    *(undefined8 **)(param_1 + 0x28) = puVar3 + 2;
    FUN_00c175d8(param_1,puVar3 + 1,2);
    uVar1 = 1;
  }
  return uVar1;
}

