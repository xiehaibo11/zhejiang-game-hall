
/* lua_cocos2dx_physics3d_Physics3DShape_createCapsule(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_createCapsule(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  double local_48;
  double dStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    uVar3 = luaval_to_number(param_1,2,&dStack_40,"cc.Physics3DShape:createCapsule");
    uVar4 = luaval_to_number(param_1,3,&local_48,"cc.Physics3DShape:createCapsule");
    if (((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) {
      pvVar5 = (void *)cocos2d::Physics3DShape::createCapsule((float)dStack_40,(float)local_48);
      if (pvVar5 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar6 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                   "cc.Physics3DShape");
        uVar6 = 1;
      }
      goto LAB_009b8958;
    }
    tolua_error(param_1,&DAT_012e9f7b,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Physics3DShape:createCapsule",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009b8958:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

