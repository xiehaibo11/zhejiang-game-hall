
void FUN_00a012b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  lua_getfield(uVar2,0xffffffff,*param_2);
  iVar1 = lua_type(uVar2,0xffffffff);
  if (iVar1 != 0) {
    return;
  }
  lua_settop(uVar2,0xfffffffe);
  lua_createtable(uVar2,0,0);
  lua_pushvalue(uVar2,0xffffffff);
  lua_setfield(uVar2,0xfffffffd,*param_2);
  return;
}

