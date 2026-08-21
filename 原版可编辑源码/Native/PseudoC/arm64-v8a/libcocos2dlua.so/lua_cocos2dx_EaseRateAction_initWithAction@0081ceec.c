
/* lua_cocos2dx_EaseRateAction_initWithAction(lua_State*) */

void lua_cocos2dx_EaseRateAction_initWithAction(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  EaseRateAction *this;
  ulong uVar4;
  ActionInterval *pAVar5;
  undefined8 uVar6;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (EaseRateAction *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar4 = luaval_is_usertype(param_1,2,"cc.ActionInterval",0), (uVar4 & 1) == 0)) {
      luaval_to_number(param_1,3,&local_40,"cc.EaseRateAction:initWithAction");
    }
    else {
      pAVar5 = (ActionInterval *)tolua_tousertype(param_1,2,0);
      uVar4 = luaval_to_number(param_1,3,&local_40,"cc.EaseRateAction:initWithAction");
      if ((uVar4 & 1) != 0) {
        uVar3 = cocos2d::EaseRateAction::initWithAction(this,pAVar5,(float)local_40);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar6 = 1;
        goto LAB_0081d00c;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_EaseRateAction_initWithAction\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EaseRateAction:initWithAction",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_0081d00c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

