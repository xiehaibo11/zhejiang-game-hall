
/* lua_cocos2dx_physics3d_Physics3DHingeConstraint_setAxis(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DHingeConstraint_setAxis(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Vec3 *pVVar3;
  ulong uVar4;
  undefined4 uVar5;
  Vec3 aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pVVar3 = (Vec3 *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    cocos2d::Vec3::Vec3(aVStack_48);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_48,"cc.Physics3DHingeConstraint:setAxis");
    if ((uVar4 & 1) != 0) {
      cocos2d::Physics3DHingeConstraint::setAxis(pVVar3);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_009c0540;
    }
    tolua_error(param_1,0x12ec746,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012ec722,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009c0540:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

