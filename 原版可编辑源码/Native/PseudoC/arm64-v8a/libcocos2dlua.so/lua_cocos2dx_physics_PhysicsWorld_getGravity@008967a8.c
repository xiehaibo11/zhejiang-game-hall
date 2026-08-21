
/* lua_cocos2dx_physics_PhysicsWorld_getGravity(lua_State*) */

void lua_cocos2dx_physics_PhysicsWorld_getGravity(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    local_40 = *(undefined8 *)(lVar3 + 8);
    vec2_to_luaval(param_1,(Vec2 *)&local_40);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsWorld:getGravity",iVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

