
/* lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_getBFrame(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_getBFrame(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DConeTwistConstraint *this;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DConeTwistConstraint *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    cocos2d::Physics3DConeTwistConstraint::getBFrame(this);
    mat4_to_luaval(param_1,aMStack_78);
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DConeTwistConstraint:getBFrame",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

