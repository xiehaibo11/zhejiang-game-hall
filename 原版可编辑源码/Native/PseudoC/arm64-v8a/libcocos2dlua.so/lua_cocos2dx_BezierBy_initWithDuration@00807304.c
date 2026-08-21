
/* lua_cocos2dx_BezierBy_initWithDuration(lua_State*) */

undefined8 lua_cocos2dx_BezierBy_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  double dStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    luaval_to_number(param_1,2,&dStack_30,"cc.BezierBy:initWithDuration");
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_BezierBy_initWithDuration\'",0
               );
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.BezierBy:initWithDuration",iVar2 + -1,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

