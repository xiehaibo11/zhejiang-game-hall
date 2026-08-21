
void FUN_009d0260(undefined8 param_1,uint *param_2,undefined **param_3)

{
  undefined **ppuVar1;
  int iVar2;
  uint uVar3;
  
  ppuVar1 = &PTR_s_off_0140acac_0x2b_017696a8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  iVar2 = lua_type(param_1,1);
  if (iVar2 == 0) {
    uVar3 = *param_2;
  }
  else {
    iVar2 = lua_type(param_1,1);
    if (iVar2 == 1) {
      uVar3 = lua_toboolean(param_1);
    }
    else {
      uVar3 = luaL_checkoption(param_1,1,0,ppuVar1);
    }
    *param_2 = uVar3;
  }
  if (uVar3 < 2) {
    lua_pushboolean(param_1);
    return;
  }
  lua_pushstring(param_1,ppuVar1[(int)uVar3]);
  return;
}

