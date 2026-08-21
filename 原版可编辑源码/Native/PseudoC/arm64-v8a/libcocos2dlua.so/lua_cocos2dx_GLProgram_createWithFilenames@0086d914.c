
/* lua_cocos2dx_GLProgram_createWithFilenames(lua_State*) */

void lua_cocos2dx_GLProgram_createWithFilenames(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  basic_string *pbVar6;
  int iVar7;
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
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgram:createWithFilenames");
    if ((uVar3 & 1) == 0) {
      iVar7 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      pbVar6 = (basic_string *)&local_68;
      uVar3 = luaval_to_std_string(param_1,3,pbVar6,"cc.GLProgram:createWithFilenames");
      if ((uVar3 & 1) == 0) {
        iVar7 = 4;
      }
      else {
        pvVar4 = (void *)cocos2d::GLProgram::createWithFilenames
                                   ((GLProgram *)&local_50,(basic_string *)&local_68,pbVar6);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.GLProgram");
        }
        iVar7 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar7 != 4) {
LAB_0086dc04:
      uVar5 = 1;
      goto LAB_0086dc94;
    }
  }
  else if (iVar2 == 5) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgram:createWithFilenames");
    if ((uVar3 & 1) == 0) {
      iVar7 = 6;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"cc.GLProgram:createWithFilenames");
      if ((uVar3 & 1) == 0) {
        iVar7 = 6;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar3 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_80,"cc.GLProgram:createWithFilenames");
        if ((uVar3 & 1) == 0) {
          iVar7 = 6;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar3 = luaval_to_std_string
                            (param_1,5,(basic_string *)&local_98,"cc.GLProgram:createWithFilenames")
          ;
          if ((uVar3 & 1) == 0) {
            iVar7 = 6;
          }
          else {
            pvVar4 = (void *)cocos2d::GLProgram::createWithFilenames
                                       ((basic_string *)&local_50,(basic_string *)&local_68,
                                        (basic_string *)&local_80,(basic_string *)&local_98);
            if (pvVar4 == (void *)0x0) {
              lua_pushnil(param_1);
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                         "cc.GLProgram");
            }
            iVar7 = 1;
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
    if (iVar7 != 6) goto LAB_0086dc04;
  }
  else if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgram:createWithFilenames");
    if ((uVar3 & 1) == 0) {
      iVar7 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"cc.GLProgram:createWithFilenames");
      if ((uVar3 & 1) == 0) {
        iVar7 = 2;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar3 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_80,"cc.GLProgram:createWithFilenames");
        if ((uVar3 & 1) == 0) {
          iVar7 = 2;
        }
        else {
          pvVar4 = (void *)cocos2d::GLProgram::createWithFilenames
                                     ((basic_string *)&local_50,(basic_string *)&local_68,
                                      (basic_string *)&local_80);
          if (pvVar4 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                       "cc.GLProgram");
          }
          iVar7 = 1;
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
    if (iVar7 != 2) goto LAB_0086dc04;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.GLProgram:createWithFilenames",iVar2 + -1,4);
  uVar5 = 0;
LAB_0086dc94:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

