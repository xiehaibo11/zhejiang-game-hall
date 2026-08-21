
/* lua_cocos2dx_physics_PhysicsBody_removeShape(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsBody_removeShape(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  PhysicsBody *this;
  ulong uVar4;
  PhysicsShape *pPVar5;
  undefined4 uVar6;
  bool local_50 [4];
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (PhysicsBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.PhysicsBody:removeShape");
    if (((uVar4 & 1) == 0) ||
       (uVar4 = luaval_to_boolean(param_1,3,local_50,"cc.PhysicsBody:removeShape"), (uVar4 & 1) == 0
       )) {
      if ((param_1 != (lua_State *)0x0) &&
         ((iVar3 = lua_gettop(param_1), 1 < iVar3 &&
          (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsShape",0), (uVar4 & 1) != 0)))) {
        pPVar5 = (PhysicsShape *)tolua_tousertype(param_1,2,0);
        uVar4 = luaval_to_boolean(param_1,3,(bool *)&local_4c,"cc.PhysicsBody:removeShape");
        if ((uVar4 & 1) != 0) {
          cocos2d::PhysicsBody::removeShape(this,pPVar5,local_4c._0_1_);
          goto LAB_0088b3f8;
        }
      }
LAB_0088b4d0:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.PhysicsBody:removeShape",iVar2 + -1,1);
      uVar6 = 0;
      goto LAB_0088b4f4;
    }
    cocos2d::PhysicsBody::removeShape(this,local_4c,local_50[0]);
  }
  else {
    if (iVar2 != 2) goto LAB_0088b4d0;
    uVar4 = luaval_to_int32(param_1,2,&local_4c,"cc.PhysicsBody:removeShape");
    if ((uVar4 & 1) == 0) {
      if (((param_1 == (lua_State *)0x0) || (iVar3 = lua_gettop(param_1), iVar3 < 2)) ||
         (uVar4 = luaval_is_usertype(param_1,2,"cc.PhysicsShape",0), (uVar4 & 1) == 0))
      goto LAB_0088b4d0;
      pPVar5 = (PhysicsShape *)tolua_tousertype(param_1,2,0);
      cocos2d::PhysicsBody::removeShape(this,pPVar5,true);
    }
    else {
      cocos2d::PhysicsBody::removeShape(this,local_4c,true);
    }
  }
LAB_0088b3f8:
  uVar6 = 1;
  lua_settop(param_1,1);
LAB_0088b4f4:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

