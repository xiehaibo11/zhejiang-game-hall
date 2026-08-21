
bool tolua_isnoobj(undefined8 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = lua_gettop();
  iVar1 = -param_2;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (iVar1 <= iVar2) {
    *param_3 = param_2;
    param_3[1] = 0;
    *(char **)(param_3 + 2) = "[no object]";
  }
  return iVar1 > iVar2;
}

