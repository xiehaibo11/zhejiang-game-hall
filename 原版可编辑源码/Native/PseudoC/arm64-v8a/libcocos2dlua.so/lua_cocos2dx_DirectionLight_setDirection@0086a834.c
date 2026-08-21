
/* lua_cocos2dx_DirectionLight_setDirection(lua_State*) */

undefined4 lua_cocos2dx_DirectionLight_setDirection(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  DirectionLight *this;
  ulong uVar3;
  undefined4 uVar4;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (DirectionLight *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar3 = luaval_to_vec3(param_1,2,aVStack_48,"cc.DirectionLight:setDirection");
    if ((uVar3 & 1) != 0) {
      cocos2d::DirectionLight::setDirection(this,aVStack_48);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0086a8f8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_DirectionLight_setDirection\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.DirectionLight:setDirection",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0086a8f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

