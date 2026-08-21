
/* lua_cocos2dx_ActionCamera_setUp(lua_State*) */

undefined4 lua_cocos2dx_ActionCamera_setUp(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ActionCamera *this;
  ulong uVar3;
  undefined4 uVar4;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ActionCamera *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_48,"cc.ActionCamera:setUp");
    if ((uVar3 & 1) != 0) {
      cocos2d::ActionCamera::setUp(this,aVStack_48);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0081b1e8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_ActionCamera_setUp\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ActionCamera:setUp",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0081b1e8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

