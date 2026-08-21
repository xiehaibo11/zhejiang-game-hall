
/* lua_cocos2dx_physics3d_Physics3DShape_createConvexHull(lua_State*) */

void lua_cocos2dx_physics3d_Physics3DShape_createConvexHull(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  Vec3 *pVVar4;
  void *pvVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Vec3",0), (uVar3 & 1) == 0)) {
      luaval_to_int32(param_1,3,&local_3c,"cc.Physics3DShape:createConvexHull");
    }
    else {
      pVVar4 = (Vec3 *)tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_int32(param_1,3,&local_3c,"cc.Physics3DShape:createConvexHull");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::Physics3DShape::createConvexHull(pVVar4,local_3c);
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
        goto LAB_009b8840;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_physics3d_Physics3DShape_createConvexHull\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Physics3DShape:createConvexHull",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009b8840:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

