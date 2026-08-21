
int tolua_tovalue(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = lua_gettop();
  iVar1 = -param_2;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (iVar1 <= iVar2) {
    param_3 = param_2;
  }
  return param_3;
}

