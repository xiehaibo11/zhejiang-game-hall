
/* lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create(lua_State*) */

void lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_40 = 0;
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 2)) ||
       (uVar3 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar3 & 1) == 0)) {
      luaval_to_vec2(param_1,3,(Vec2 *)&local_40,"cc.ControlSaturationBrightnessPicker:create");
    }
    else {
      uVar4 = tolua_tousertype(param_1,2,0);
      uVar3 = luaval_to_vec2(param_1,3,(Vec2 *)&local_40,
                             "cc.ControlSaturationBrightnessPicker:create");
      if ((uVar3 & 1) != 0) {
        pvVar5 = (void *)cocos2d::extension::ControlSaturationBrightnessPicker::create
                                   ((ControlSaturationBrightnessPicker *)local_40,local_40._4_4_,
                                    uVar4);
        if (pvVar5 == (void *)0x0) {
          lua_pushnil(param_1);
          uVar4 = 1;
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar5 + 0xc),(int *)((long)pvVar5 + 0x10),pvVar5,
                     "cc.ControlSaturationBrightnessPicker");
          uVar4 = 1;
        }
        goto LAB_009a450c;
      }
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_extension_ControlSaturationBrightnessPicker_create\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.ControlSaturationBrightnessPicker:create",iVar2 + -1,2);
  }
  uVar4 = 0;
LAB_009a450c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

