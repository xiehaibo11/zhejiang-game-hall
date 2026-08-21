
/* lua_cocos2dx_MotionStreak3D_tintWithColor(lua_State*) */

undefined4 lua_cocos2dx_MotionStreak3D_tintWithColor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  MotionStreak3D *this;
  ulong uVar3;
  undefined4 uVar4;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (MotionStreak3D *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Color3B::Color3B(aCStack_40);
    uVar3 = luaval_to_color3b(param_1,2,aCStack_40,"cc.MotionStreak3D:tintWithColor");
    if ((uVar3 & 1) != 0) {
      cocos2d::MotionStreak3D::tintWithColor(this,aCStack_40);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_00880308;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_MotionStreak3D_tintWithColor\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MotionStreak3D:tintWithColor",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_00880308:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

