
/* toluafix_isfunction(lua_State*, int, char const*, int, tolua_Error*) */

undefined8
toluafix_isfunction(lua_State *param_1,int param_2,char *param_3,int param_4,tolua_Error *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = lua_gettop();
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if ((iVar1 < iVar2) || (iVar2 = lua_type(param_1,param_2), iVar2 != 6)) {
    uVar3 = 0;
    *(int *)param_5 = param_2;
    *(undefined4 *)(param_5 + 4) = 0;
    *(char **)(param_5 + 8) = "[not function]";
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

