
/* lua_cocos2dx_Camera_createPerspective(lua_State*) */

void lua_cocos2dx_Camera_createPerspective(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 4) {
    uVar3 = luaval_to_number(param_1,2,&dStack_50,"cc.Camera:createPerspective");
    uVar4 = luaval_to_number(param_1,3,&local_58,"cc.Camera:createPerspective");
    uVar5 = luaval_to_number(param_1,4,&dStack_60,"cc.Camera:createPerspective");
    uVar6 = luaval_to_number(param_1,5,&local_68,"cc.Camera:createPerspective");
    if (((((uVar3 & 1) != 0) && ((uVar4 & 1) != 0)) && ((uVar5 & 1) != 0)) && ((uVar6 & 1) != 0)) {
      pvVar7 = (void *)cocos2d::Camera::createPerspective
                                 ((float)dStack_50,(float)local_58,(float)dStack_60,(float)local_68)
      ;
      if (pvVar7 == (void *)0x0) {
        lua_pushnil(param_1);
        uVar8 = 1;
      }
      else {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar7 + 0xc),(int *)((long)pvVar7 + 0x10),pvVar7,
                   "cc.Camera");
        uVar8 = 1;
      }
      goto LAB_008659ec;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Camera_createPerspective\'",0)
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.Camera:createPerspective",iVar2 + -1,4);
  }
  uVar8 = 0;
LAB_008659ec:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

