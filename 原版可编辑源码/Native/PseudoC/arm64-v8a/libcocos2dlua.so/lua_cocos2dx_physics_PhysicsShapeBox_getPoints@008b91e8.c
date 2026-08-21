
/* lua_cocos2dx_physics_PhysicsShapeBox_getPoints(lua_State*) */

void lua_cocos2dx_physics_PhysicsShapeBox_getPoints(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  Vec2 *pVVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pVVar3 = (Vec2 *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  iVar2 = iVar2 + -1;
  if (iVar2 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    cocos2d::PhysicsShapePolygon::getPoints(pVVar3);
    vec2_array_to_luaval(param_1,(Vec2 *)&local_60,4);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","getPoints",iVar2
               ,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 0);
}

