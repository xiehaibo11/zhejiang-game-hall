
/* lua_cocos2dx_FileUtils_renameFile(lua_State*) */

void lua_cocos2dx_FileUtils_renameFile(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  ulong local_128;
  undefined8 local_120;
  void *local_118;
  ulong local_110;
  undefined8 local_108;
  void *local_100;
  ulong local_f8;
  undefined8 local_f0;
  void *local_e8;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong *local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"cc.FileUtils:renameFile");
    if ((uVar5 & 1) == 0) {
      iVar8 = 8;
    }
    else {
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_f8 = 0;
      uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_f8,"cc.FileUtils:renameFile");
      if ((uVar5 & 1) == 0) {
        iVar8 = 8;
      }
      else {
        uVar3 = (**(code **)(*plVar4 + 0x198))(plVar4,&local_80,&local_f8);
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar8 = 1;
      }
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
    }
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
    if (iVar8 == 8) goto LAB_008112b0;
LAB_00811304:
    uVar6 = 1;
  }
  else {
    if (iVar2 == 4) {
      local_78 = 0;
      local_70 = (void *)0x0;
      local_80 = 0;
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"cc.FileUtils:renameFile");
      if ((uVar5 & 1) == 0) {
        iVar8 = 6;
      }
      else {
        local_f0 = 0;
        local_e8 = (void *)0x0;
        local_f8 = 0;
        uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_f8,"cc.FileUtils:renameFile");
        if ((uVar5 & 1) == 0) {
          iVar8 = 6;
        }
        else {
          local_108 = 0;
          local_100 = (void *)0x0;
          local_110 = 0;
          uVar5 = luaval_to_std_string
                            (param_1,4,(basic_string *)&local_110,"cc.FileUtils:renameFile");
          if ((uVar5 & 1) == 0) {
            iVar8 = 6;
          }
          else {
            uVar3 = (**(code **)(*plVar4 + 0x188))(plVar4,&local_80,&local_f8,&local_110);
            tolua_pushboolean(param_1,uVar3 & 1);
            iVar8 = 1;
          }
          if ((local_110 & 1) != 0) {
            operator_delete(local_100);
          }
        }
        if ((local_f8 & 1) != 0) {
          operator_delete(local_e8);
        }
      }
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      if (iVar8 != 6) goto LAB_00811304;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_f8 = 0;
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_f8,"cc.FileUtils:renameFile");
      if ((uVar5 & 1) == 0) {
        iVar8 = 10;
      }
      else {
        local_108 = 0;
        local_100 = (void *)0x0;
        local_110 = 0;
        uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_110,"cc.FileUtils:renameFile")
        ;
        if ((uVar5 & 1) == 0) {
          iVar8 = 10;
        }
        else {
          local_60 = (ulong *)0x0;
          local_c0 = (long *)0x0;
          (**(code **)(*plVar4 + 0x1a0))(plVar4,&local_f8,&local_110,alStack_e0);
          if (alStack_e0 == local_c0) {
            pcVar7 = *(code **)(*local_c0 + 0x20);
LAB_00811370:
            (*pcVar7)();
          }
          else if (local_c0 != (long *)0x0) {
            pcVar7 = *(code **)(*local_c0 + 0x28);
            goto LAB_00811370;
          }
          lua_settop(param_1,1);
          if (&local_80 == local_60) {
            pcVar7 = *(code **)(*local_60 + 0x20);
LAB_008113c4:
            (*pcVar7)();
          }
          else if (local_60 != (ulong *)0x0) {
            pcVar7 = *(code **)(*local_60 + 0x28);
            goto LAB_008113c4;
          }
          iVar8 = 1;
        }
        if ((local_110 & 1) != 0) {
          operator_delete(local_100);
        }
      }
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
      if (iVar8 != 10) goto LAB_00811304;
    }
    else {
      if (iVar2 != 5) goto LAB_008112b0;
      local_f0 = 0;
      local_e8 = (void *)0x0;
      local_f8 = 0;
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_f8,"cc.FileUtils:renameFile");
      if ((uVar5 & 1) == 0) {
        iVar8 = 2;
      }
      else {
        local_108 = 0;
        local_100 = (void *)0x0;
        local_110 = 0;
        uVar5 = luaval_to_std_string(param_1,3,(basic_string *)&local_110,"cc.FileUtils:renameFile")
        ;
        if ((uVar5 & 1) == 0) {
          iVar8 = 2;
        }
        else {
          local_120 = 0;
          local_118 = (void *)0x0;
          local_128 = 0;
          uVar5 = luaval_to_std_string
                            (param_1,4,(basic_string *)&local_128,"cc.FileUtils:renameFile");
          if ((uVar5 & 1) == 0) {
            iVar8 = 2;
          }
          else {
            local_60 = (ulong *)0x0;
            local_90 = (long *)0x0;
            (**(code **)(*plVar4 + 400))(plVar4,&local_f8,&local_110,&local_128,alStack_b0);
            if (alStack_b0 == local_90) {
              pcVar7 = *(code **)(*local_90 + 0x20);
LAB_00811338:
              (*pcVar7)();
            }
            else if (local_90 != (long *)0x0) {
              pcVar7 = *(code **)(*local_90 + 0x28);
              goto LAB_00811338;
            }
            lua_settop(param_1,1);
            if (&local_80 == local_60) {
              pcVar7 = *(code **)(*local_60 + 0x20);
LAB_008113a8:
              (*pcVar7)();
            }
            else if (local_60 != (ulong *)0x0) {
              pcVar7 = *(code **)(*local_60 + 0x28);
              goto LAB_008113a8;
            }
            iVar8 = 1;
          }
          if ((local_128 & 1) != 0) {
            operator_delete(local_118);
          }
        }
        if ((local_110 & 1) != 0) {
          operator_delete(local_100);
        }
      }
      if ((local_f8 & 1) != 0) {
        operator_delete(local_e8);
      }
      if (iVar8 != 2) goto LAB_00811304;
    }
LAB_008112b0:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:renameFile",iVar2 + -1,3);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

