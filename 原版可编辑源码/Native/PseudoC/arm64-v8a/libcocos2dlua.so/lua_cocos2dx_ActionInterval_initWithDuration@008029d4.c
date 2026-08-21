
/* lua_cocos2dx_ActionInterval_initWithDuration(lua_State*) */

void lua_cocos2dx_ActionInterval_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ActionInterval *this;
  ulong uVar4;
  undefined8 uVar5;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionInterval *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_number(param_1,2,&local_40,"cc.ActionInterval:initWithDuration");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::ActionInterval::initWithDuration(this,(float)local_40);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_00802a94;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_ActionInterval_initWithDuration\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionInterval:initWithDuration",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00802a94:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

