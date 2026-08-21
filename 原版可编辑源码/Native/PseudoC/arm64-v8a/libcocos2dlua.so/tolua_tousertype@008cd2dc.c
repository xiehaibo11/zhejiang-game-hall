
undefined8 tolua_tousertype(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  iVar1 = lua_gettop();
  iVar2 = -param_2;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (iVar2 <= iVar1) {
    iVar2 = lua_isuserdata(param_1,param_2);
    if (((iVar2 == 0) && (iVar2 = push_table_instance(param_1,param_2), iVar2 == 0)) ||
       (puVar3 = (undefined8 *)lua_touserdata(param_1,param_2), puVar3 == (undefined8 *)0x0)) {
      param_3 = 0;
    }
    else {
      param_3 = *puVar3;
    }
  }
  return param_3;
}

