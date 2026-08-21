
/* lua_cocos2dx_MotionStreak3D_setSweepAxis(lua_State*) */

undefined4 lua_cocos2dx_MotionStreak3D_setSweepAxis(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 in_s1;
  undefined4 in_s2;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_48,"cc.MotionStreak3D:setSweepAxis");
    if ((uVar4 & 1) != 0) {
      uVar5 = cocos2d::Vec3::getNormalized(aVStack_48);
      *(undefined4 *)(lVar3 + 0x32c) = uVar5;
      *(undefined4 *)(lVar3 + 0x330) = in_s1;
      *(undefined4 *)(lVar3 + 0x334) = in_s2;
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00880a90;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_MotionStreak3D_setSweepAxis\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MotionStreak3D:setSweepAxis",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00880a90:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

