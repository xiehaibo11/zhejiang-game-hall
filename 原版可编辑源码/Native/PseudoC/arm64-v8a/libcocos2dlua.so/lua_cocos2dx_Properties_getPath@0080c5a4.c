
/* lua_cocos2dx_Properties_getPath(lua_State*) */

undefined8 lua_cocos2dx_Properties_getPath(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    local_40[1] = 0;
    local_30 = (void *)0x0;
    local_40[0] = 0;
    luaval_to_std_string(param_1,2,(basic_string *)local_40,"cc.Properties:getPath");
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Properties_getPath\'",0);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Properties:getPath",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

