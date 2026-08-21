
/* lua_cocos2dx_ActionTween_initWithDuration(lua_State*) */

bool lua_cocos2dx_ActionTween_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ActionTween *this;
  bool bVar7;
  double local_78;
  double dStack_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ActionTween *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 4) {
    local_60 = 0;
    local_58 = (void *)0x0;
    local_68 = 0;
    uVar3 = luaval_to_number(param_1,2,&local_50,"cc.ActionTween:initWithDuration");
    uVar4 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,"cc.ActionTween:initWithDuration");
    uVar5 = luaval_to_number(param_1,4,&dStack_70,"cc.ActionTween:initWithDuration");
    uVar6 = luaval_to_number(param_1,5,&local_78,"cc.ActionTween:initWithDuration");
    bVar7 = (uVar3 & uVar4 & uVar5 & uVar6 & 1) == 0;
    if (bVar7) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_ActionTween_initWithDuration\'",0);
    }
    else {
      uVar3 = cocos2d::ActionTween::initWithDuration
                        (this,(float)local_50,(basic_string *)&local_68,(float)dStack_70,
                         (float)local_78);
      tolua_pushboolean(param_1,uVar3 & 1);
    }
    bVar7 = !bVar7;
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionTween:initWithDuration",iVar2 + -1,4);
    bVar7 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

