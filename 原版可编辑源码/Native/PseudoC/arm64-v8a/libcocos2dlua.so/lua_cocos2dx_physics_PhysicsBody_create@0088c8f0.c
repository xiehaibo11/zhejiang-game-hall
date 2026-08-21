
/* lua_cocos2dx_physics_PhysicsBody_create(lua_State*) */

void lua_cocos2dx_physics_PhysicsBody_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  double local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    pvVar4 = (void *)cocos2d::PhysicsBody::create();
    if (pvVar4 != (void *)0x0) goto LAB_0088c9e8;
LAB_0088c95c:
    lua_pushnil(param_1);
  }
  else {
    if (iVar2 == 3) {
      uVar3 = luaval_to_number(param_1,2,&local_40,"cc.PhysicsBody:create");
      if (((uVar3 & 1) == 0) ||
         (uVar3 = luaval_to_number(param_1,3,&local_48,"cc.PhysicsBody:create"), (uVar3 & 1) == 0))
      goto LAB_0088c9b8;
      pvVar4 = (void *)cocos2d::PhysicsBody::create((float)local_40,(float)local_48);
    }
    else {
      if ((iVar2 != 2) ||
         (uVar3 = luaval_to_number(param_1,2,&local_40,"cc.PhysicsBody:create"), (uVar3 & 1) == 0))
      {
LAB_0088c9b8:
        luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                   "cc.PhysicsBody:create",iVar2 + -1,2);
        uVar5 = 0;
        goto LAB_0088ca08;
      }
      pvVar4 = (void *)cocos2d::PhysicsBody::create((float)local_40);
    }
    if (pvVar4 == (void *)0x0) goto LAB_0088c95c;
LAB_0088c9e8:
    toluafix_pushusertype_ccobject
              (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
               "cc.PhysicsBody");
  }
  uVar5 = 1;
LAB_0088ca08:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

