
undefined8 FUN_00c3227c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00c29cf0(param_1,2);
  FUN_00c29dd4(param_1,1);
  lVar2 = lua_getupvalue(param_1,1,uVar1);
  if (lVar2 != 0) {
    lua_pushstring(param_1,lVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *puVar3 = puVar3[-2];
    *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
    return 2;
  }
  return 0;
}

