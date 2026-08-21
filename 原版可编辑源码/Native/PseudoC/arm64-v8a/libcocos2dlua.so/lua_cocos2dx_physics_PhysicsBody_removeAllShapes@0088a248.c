
/* lua_cocos2dx_physics_PhysicsBody_removeAllShapes(lua_State*) */

undefined4 lua_cocos2dx_physics_PhysicsBody_removeAllShapes(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PhysicsBody *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PhysicsBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"cc.PhysicsBody:removeAllShapes");
    if ((uVar3 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_physics_PhysicsBody_removeAllShapes\'"
                  ,0);
      goto LAB_0088a31c;
    }
    cocos2d::PhysicsBody::removeAllShapes(this,local_3c[0]);
  }
  else {
    if (iVar2 + -1 != 0) {
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "cc.PhysicsBody:removeAllShapes",iVar2 + -1,0);
LAB_0088a31c:
      uVar4 = 0;
      goto LAB_0088a320;
    }
    cocos2d::PhysicsBody::removeAllShapes(this,true);
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_0088a320:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

