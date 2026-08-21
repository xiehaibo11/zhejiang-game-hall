
/* lua_cocos2dx_TransitionSceneOriented_initWithDuration(lua_State*) */

void lua_cocos2dx_TransitionSceneOriented_initWithDuration(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int local_54;
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar5 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 3) {
    uVar3 = luaval_to_number(param_1,2,&local_50,"cc.TransitionSceneOriented:initWithDuration");
    if (param_1 == (lua_State *)0x0) {
LAB_0085ab20:
      luaval_to_int32(param_1,4,&local_54,"cc.TransitionSceneOriented:initWithDuration");
    }
    else {
      iVar2 = lua_gettop(param_1);
      if ((iVar2 < 3) || (uVar6 = luaval_is_usertype(param_1,3,"cc.Scene",0), (uVar6 & 1) == 0))
      goto LAB_0085ab20;
      uVar7 = tolua_tousertype(param_1,3,0);
      uVar4 = luaval_to_int32(param_1,4,&local_54,"cc.TransitionSceneOriented:initWithDuration");
      if ((uVar3 & uVar4 & 1) != 0) {
        uVar3 = cocos2d::TransitionSceneOriented::initWithDuration
                          ((TransitionSceneOriented *)(float)local_50,uVar5,uVar7,local_54);
        tolua_pushboolean(param_1,uVar3 & 1);
        uVar5 = 1;
        goto LAB_0085ab50;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_TransitionSceneOriented_initWithDuration\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.TransitionSceneOriented:initWithDuration",iVar2 + -1,3);
  }
  uVar5 = 0;
LAB_0085ab50:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

