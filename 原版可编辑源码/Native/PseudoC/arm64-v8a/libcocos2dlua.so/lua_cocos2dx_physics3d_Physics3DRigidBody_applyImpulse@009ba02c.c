
/* lua_cocos2dx_physics3d_Physics3DRigidBody_applyImpulse(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DRigidBody_applyImpulse(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Vec3 *pVVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  Vec3 aVStack_68 [16];
  Vec3 aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pVVar3 = (Vec3 *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    cocos2d::Vec3::Vec3(aVStack_58);
    cocos2d::Vec3::Vec3(aVStack_68);
    uVar4 = luaval_to_vec3(param_1,2,aVStack_58,"cc.Physics3DRigidBody:applyImpulse");
    uVar5 = luaval_to_vec3(param_1,3,aVStack_68,"cc.Physics3DRigidBody:applyImpulse");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      cocos2d::Physics3DRigidBody::applyImpulse(pVVar3,aVStack_58);
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_009ba120;
    }
    tolua_error(param_1,&DAT_012ea700,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DRigidBody:applyImpulse",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009ba120:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

