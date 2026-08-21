
/* lua_cocos2dx_CameraBackgroundSkyBoxBrush_create(lua_State*) */

void lua_cocos2dx_CameraBackgroundSkyBoxBrush_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 7) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.CameraBackgroundSkyBoxBrush:create");
    if ((uVar4 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar4 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"cc.CameraBackgroundSkyBoxBrush:create"
                        );
      if ((uVar4 & 1) == 0) {
        iVar6 = 4;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar4 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_80,
                           "cc.CameraBackgroundSkyBoxBrush:create");
        if ((uVar4 & 1) == 0) {
          iVar6 = 4;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar4 = luaval_to_std_string
                            (param_1,5,(basic_string *)&local_98,
                             "cc.CameraBackgroundSkyBoxBrush:create");
          if ((uVar4 & 1) == 0) {
            iVar6 = 4;
          }
          else {
            local_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = 0;
            uVar4 = luaval_to_std_string
                              (param_1,6,(basic_string *)&local_b0,
                               "cc.CameraBackgroundSkyBoxBrush:create");
            if ((uVar4 & 1) == 0) {
              iVar6 = 4;
            }
            else {
              local_c0 = 0;
              local_b8 = (void *)0x0;
              local_c8 = 0;
              uVar4 = luaval_to_std_string
                                (param_1,7,(basic_string *)&local_c8,
                                 "cc.CameraBackgroundSkyBoxBrush:create");
              if ((uVar4 & 1) == 0) {
                iVar6 = 4;
              }
              else {
                pvVar3 = (void *)cocos2d::CameraBackgroundSkyBoxBrush::create
                                           ((basic_string *)&local_50,(basic_string *)&local_68,
                                            (basic_string *)&local_80,(basic_string *)&local_98,
                                            (basic_string *)&local_b0,(basic_string *)&local_c8);
                if (pvVar3 == (void *)0x0) {
                  lua_pushnil(param_1);
                }
                else {
                  toluafix_pushusertype_ccobject
                            (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),
                             pvVar3,"cc.CameraBackgroundSkyBoxBrush");
                }
                iVar6 = 1;
              }
              if ((local_c8 & 1) != 0) {
                operator_delete(local_b8);
              }
            }
            if ((local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
          }
          if ((local_98 & 1) != 0) {
            operator_delete(local_88);
          }
        }
        if ((local_80 & 1) != 0) {
          operator_delete(local_70);
        }
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 == 4) goto LAB_00867b38;
  }
  else {
    if (iVar2 != 1) {
LAB_00867b38:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
                 "cc.CameraBackgroundSkyBoxBrush:create",iVar2 + -1,6);
      uVar5 = 0;
      goto LAB_00867b64;
    }
    pvVar3 = (void *)cocos2d::CameraBackgroundSkyBoxBrush::create();
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.CameraBackgroundSkyBoxBrush");
    }
  }
  uVar5 = 1;
LAB_00867b64:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

