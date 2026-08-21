
/* lua_cocos2dx_physics_PhysicsBody_getShape(lua_State*) */

void lua_cocos2dx_physics_PhysicsBody_getShape(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  PhysicsBody *this;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (PhysicsBody *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_3c,"cc.PhysicsBody:getShape");
    if ((uVar3 & 1) != 0) {
      pvVar4 = (void *)cocos2d::PhysicsBody::getShape(this,local_3c);
      if (pvVar4 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar5 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "cc.PhysicsShape");
        uVar5 = 1;
      }
      goto LAB_0088c020;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics_PhysicsBody_getShape\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.PhysicsBody:getShape",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_0088c020:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

