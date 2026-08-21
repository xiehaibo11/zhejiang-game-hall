
/* lua_cocos2dx_physics3d_Physics3DHingeConstraint_getHingeAngle(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DHingeConstraint_getHingeAngle(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DHingeConstraint *this;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  Mat4 aMStack_b8 [64];
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DHingeConstraint *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 0) {
    fVar6 = (float)cocos2d::Physics3DHingeConstraint::getHingeAngle(this);
    tolua_pushnumber((double)fVar6,param_1);
LAB_009bf534:
    uVar4 = 1;
  }
  else {
    if (iVar2 == 3) {
      cocos2d::Mat4::Mat4(aMStack_78);
      uVar3 = luaval_to_mat4(param_1,2,aMStack_78,"cc.Physics3DHingeConstraint:getHingeAngle");
      if ((uVar3 & 1) == 0) {
        iVar5 = 2;
      }
      else {
        cocos2d::Mat4::Mat4(aMStack_b8);
        uVar3 = luaval_to_mat4(param_1,3,aMStack_b8,"cc.Physics3DHingeConstraint:getHingeAngle");
        if ((uVar3 & 1) == 0) {
          iVar5 = 2;
        }
        else {
          fVar6 = (float)cocos2d::Physics3DHingeConstraint::getHingeAngle
                                   (this,aMStack_78,aMStack_b8);
          tolua_pushnumber((double)fVar6,param_1);
          iVar5 = 1;
        }
        cocos2d::Mat4::~Mat4(aMStack_b8);
      }
      cocos2d::Mat4::~Mat4(aMStack_78);
      if (iVar5 != 2) goto LAB_009bf534;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DHingeConstraint:getHingeAngle",iVar2 + -1,0);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

