
/* lua_cocos2dx_GLProgram_createWithByteArrays(lua_State*) */

void lua_cocos2dx_GLProgram_createWithByteArrays(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  int iVar8;
  ulong local_a8;
  undefined8 local_a0;
  void *local_98;
  ulong local_90;
  undefined8 local_88;
  void *local_80;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 == 3) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.GLProgram:createWithByteArrays");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar8 = 4;
    }
    else {
      local_70 = 0;
      local_68 = (char *)0x0;
      local_78 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,"cc.GLProgram:createWithByteArrays");
      if ((uVar5 & 1) == 0) {
        iVar8 = 4;
      }
      else {
        pcVar2 = (char *)((ulong)&local_78 | 1);
        if ((local_78 & 1) != 0) {
          pcVar2 = local_68;
        }
        pvVar6 = (void *)cocos2d::GLProgram::createWithByteArrays(pcVar1,pcVar2);
        if (pvVar6 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                     "cc.GLProgram");
        }
        iVar8 = 1;
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar8 != 4) {
LAB_0086d6f8:
      uVar7 = 1;
      goto LAB_0086d6fc;
    }
  }
  else if (iVar4 == 5) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.GLProgram:createWithByteArrays");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar8 = 6;
    }
    else {
      local_70 = 0;
      local_68 = (char *)0x0;
      local_78 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,"cc.GLProgram:createWithByteArrays");
      pcVar2 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar2 = local_68;
      }
      if ((uVar5 & 1) == 0) {
        iVar8 = 6;
      }
      else {
        local_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        uVar5 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_90,"cc.GLProgram:createWithByteArrays");
        if ((uVar5 & 1) == 0) {
          iVar8 = 6;
        }
        else {
          local_a0 = 0;
          local_98 = (void *)0x0;
          local_a8 = 0;
          uVar5 = luaval_to_std_string
                            (param_1,5,(basic_string *)&local_a8,"cc.GLProgram:createWithByteArrays"
                            );
          if ((uVar5 & 1) == 0) {
            iVar8 = 6;
          }
          else {
            pvVar6 = (void *)cocos2d::GLProgram::createWithByteArrays
                                       (pcVar1,pcVar2,(basic_string *)&local_90,
                                        (basic_string *)&local_a8);
            if (pvVar6 == (void *)0x0) {
              lua_pushnil(param_1);
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                         "cc.GLProgram");
            }
            iVar8 = 1;
          }
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar8 != 6) goto LAB_0086d6f8;
  }
  else if (iVar4 == 4) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"cc.GLProgram:createWithByteArrays");
    pcVar1 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar1 = local_50;
    }
    if ((uVar5 & 1) == 0) {
      iVar8 = 2;
    }
    else {
      local_70 = 0;
      local_68 = (char *)0x0;
      local_78 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_78,"cc.GLProgram:createWithByteArrays");
      pcVar2 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar2 = local_68;
      }
      if ((uVar5 & 1) == 0) {
        iVar8 = 2;
      }
      else {
        local_88 = 0;
        local_80 = (void *)0x0;
        local_90 = 0;
        uVar5 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_90,"cc.GLProgram:createWithByteArrays");
        if ((uVar5 & 1) == 0) {
          iVar8 = 2;
        }
        else {
          pvVar6 = (void *)cocos2d::GLProgram::createWithByteArrays
                                     (pcVar1,pcVar2,(basic_string *)&local_90);
          if (pvVar6 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar6 + 0xc),(int *)((long)pvVar6 + 0x10),pvVar6,
                       "cc.GLProgram");
          }
          iVar8 = 1;
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar8 != 2) goto LAB_0086d6f8;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.GLProgram:createWithByteArrays",iVar4 + -1,4);
  uVar7 = 0;
LAB_0086d6fc:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

