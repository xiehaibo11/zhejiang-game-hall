
undefined8 tolua_bnd_cast(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = lua_type(param_1,1);
  if (iVar1 == 2) {
    lVar2 = tolua_touserdata(param_1,1,0);
  }
  else {
    lVar2 = tolua_tousertype(param_1,1,0);
  }
  lVar3 = tolua_tostring(param_1,2,0);
  if ((lVar2 == 0) || (lVar3 == 0)) {
    lua_pushnil(param_1);
  }
  else {
    tolua_pushusertype(param_1,lVar2,lVar3);
  }
  return 1;
}

