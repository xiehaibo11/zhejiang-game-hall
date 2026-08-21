
/* lua_cocos2dx_physics3d_Physics3DWorld_addPhysics3DConstraint(lua_State*) */

undefined4 lua_cocos2dx_physics3d_Physics3DWorld_addPhysics3DConstraint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Physics3DWorld *this;
  ulong uVar3;
  Physics3DConstraint *pPVar4;
  undefined4 uVar5;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Physics3DWorld *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Physics3DConstraint",0), (uVar3 & 1) == 0)) {
      luaval_to_boolean(param_1,3,local_3c,"cc.Physics3DWorld:addPhysics3DConstraint");
    }
    else {
      pPVar4 = (Physics3DConstraint *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_boolean(param_1,3,local_3c,"cc.Physics3DWorld:addPhysics3DConstraint");
      if ((uVar3 & 1) != 0) {
        cocos2d::Physics3DWorld::addPhysics3DConstraint(this,pPVar4,local_3c[0]);
        goto LAB_009bdaac;
      }
    }
LAB_009bdaf4:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DWorld_addPhysics3DConstraint\'"
                ,0);
  }
  else {
    if (iVar2 == 2) {
      if (((param_1 != (lua_State *)0x0) && (iVar2 = lua_gettop(param_1), 1 < iVar2)) &&
         (uVar3 = luaval_is_usertype(param_1,2,"cc.Physics3DConstraint",0), (uVar3 & 1) != 0)) {
        pPVar4 = (Physics3DConstraint *)tolua_tousertype(param_1,2,0);
        cocos2d::Physics3DWorld::addPhysics3DConstraint(this,pPVar4,true);
LAB_009bdaac:
        uVar5 = 1;
        lua_settop(param_1,1);
        goto LAB_009bdb0c;
      }
      goto LAB_009bdaf4;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Physics3DWorld:addPhysics3DConstraint",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_009bdb0c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

