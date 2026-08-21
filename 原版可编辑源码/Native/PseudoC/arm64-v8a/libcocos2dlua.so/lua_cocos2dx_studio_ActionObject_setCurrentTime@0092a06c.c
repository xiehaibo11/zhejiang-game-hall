
/* lua_cocos2dx_studio_ActionObject_setCurrentTime(lua_State*) */

undefined4 lua_cocos2dx_studio_ActionObject_setCurrentTime(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionObject *this;
  ulong uVar3;
  undefined4 uVar4;
  double local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00929fe8 with catch @ 0092a06c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionObject *)tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 00929f9c with catch @ 0092a09c */
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_number(param_1,2,&local_40,"ccs.ActionObject:setCurrentTime");
    if ((uVar3 & 1) != 0) {
      cocostudio::ActionObject::setCurrentTime(this,(float)local_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0092a12c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_studio_ActionObject_setCurrentTime\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ActionObject:setCurrentTime",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0092a12c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

