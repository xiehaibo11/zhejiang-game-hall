
/* lua_cocos2dx_physics3d_Physics3DSliderConstraint_setFrames(lua_State*) */

bool lua_cocos2dx_physics3d_Physics3DSliderConstraint_setFrames(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  Physics3DSliderConstraint *this;
  bool bVar5;
  Mat4 aMStack_b8 [64];
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DSliderConstraint *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Mat4::Mat4(aMStack_78);
    cocos2d::Mat4::Mat4(aMStack_b8);
    uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Physics3DSliderConstraint:setFrames");
    uVar4 = luaval_to_mat4(param_1,3,aMStack_b8,"cc.Physics3DSliderConstraint:setFrames");
    bVar5 = (uVar3 & uVar4 & 1) == 0;
    if (bVar5) {
      tolua_error(param_1,&DAT_012ed742,0);
    }
    else {
      cocos2d::Physics3DSliderConstraint::setFrames(this,aMStack_78,aMStack_b8);
      lua_settop(param_1,1);
    }
    bVar5 = !bVar5;
    cocos2d::Mat4::~Mat4(aMStack_b8);
    cocos2d::Mat4::~Mat4(aMStack_78);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DSliderConstraint:setFrames",iVar2 + -1,2);
    bVar5 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

