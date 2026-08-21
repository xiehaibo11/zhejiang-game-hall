
/* lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFrames(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFrames(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  bool bVar6;
  Mat4 aMStack_b8 [64];
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar5 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Mat4::Mat4(aMStack_78);
    cocos2d::Mat4::Mat4(aMStack_b8);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Physics3DConeTwistConstraint:setFrames");
    uVar4 = luaval_to_mat4(param_1,3,aMStack_b8,"cc.Physics3DConeTwistConstraint:setFrames");
    bVar6 = (uVar3 & uVar4 & 1) == 0;
    if (bVar6) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_setFrames\'"
                  ,0);
    }
    else {
      (**(code **)(*plVar5 + 0x10))(plVar5,aMStack_78,aMStack_b8);
      lua_settop(param_1,1);
    }
    bVar6 = !bVar6;
    cocos2d::Mat4::~Mat4(aMStack_b8);
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConeTwistConstraint:setFrames",iVar2 + -1,2);
    bVar6 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

