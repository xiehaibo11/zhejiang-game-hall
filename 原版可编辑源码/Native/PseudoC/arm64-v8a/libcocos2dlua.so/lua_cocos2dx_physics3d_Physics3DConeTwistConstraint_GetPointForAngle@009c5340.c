
/* lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_GetPointForAngle(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DConeTwistConstraint_GetPointForAngle(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_68;
  float fStack_64;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.Physics3DConeTwistConstraint:GetPointForAngle"
                            );
    uVar4 = luaval_to_number(param_1,3,&local_58,"cc.Physics3DConeTwistConstraint:GetPointForAngle")
    ;
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      fVar6 = (float)local_58;
      local_68 = cocos2d::Physics3DConeTwistConstraint::GetPointForAngle((float)dStack_50,fVar6);
      fStack_64 = fVar6;
      vec3_to_luaval(param_1,(Vec3 *)&local_68);
      uVar5 = 1;
      goto LAB_009c5430;
    }
    tolua_error(param_1,0x12ee3ef,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012ee3be,
               iVar2 + -1,2);
  }
  uVar5 = 0;
LAB_009c5430:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

