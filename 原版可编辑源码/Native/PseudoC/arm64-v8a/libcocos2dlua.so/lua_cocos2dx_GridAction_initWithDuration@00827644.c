
/* lua_cocos2dx_GridAction_initWithDuration(lua_State*) */

void lua_cocos2dx_GridAction_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  GridAction *this;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  Size aSStack_58 [8];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (GridAction *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Size::Size(aSStack_58);
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.GridAction:initWithDuration");
    uVar5 = luaval_to_size(param_1,3,aSStack_58,"cc.GridAction:initWithDuration");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = cocos2d::GridAction::initWithDuration(this,(float)local_50,aSStack_58);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_00827734;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_GridAction_initWithDuration\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GridAction:initWithDuration",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00827734:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

