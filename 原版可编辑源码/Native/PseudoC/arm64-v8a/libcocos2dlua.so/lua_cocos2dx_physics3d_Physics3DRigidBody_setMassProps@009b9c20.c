
/* lua_cocos2dx_physics3d_Physics3DRigidBody_setMassProps(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_setMassProps(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Vec3 *pVVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  Vec3 aVStack_60 [16];
  double local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pVVar3 = (Vec3 *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Vec3::Vec3(aVStack_60);
    uVar4 = luaval_to_number(param_1,2,&local_50,"cc.Physics3DRigidBody:setMassProps");
    uVar5 = luaval_to_vec3(param_1,3,aVStack_60,"cc.Physics3DRigidBody:setMassProps");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      cocos2d::Physics3DRigidBody::setMassProps((float)local_50,pVVar3);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009b9d10;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DRigidBody_setMassProps\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:setMassProps",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009b9d10:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

