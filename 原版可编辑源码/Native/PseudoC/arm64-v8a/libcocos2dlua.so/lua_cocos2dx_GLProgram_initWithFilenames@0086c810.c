
/* lua_cocos2dx_GLProgram_initWithFilenames(lua_State*) */

void lua_cocos2dx_GLProgram_initWithFilenames(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  GLProgram *this;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
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
  this = (GLProgram *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgram:initWithFilenames");
    if ((uVar4 & 1) == 0) {
      iVar6 = 4;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar4 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"cc.GLProgram:initWithFilenames");
      if ((uVar4 & 1) == 0) {
        iVar6 = 4;
      }
      else {
        uVar3 = cocos2d::GLProgram::initWithFilenames
                          (this,(basic_string *)&local_50,(basic_string *)&local_68);
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
    if (iVar6 != 4) {
LAB_0086cb08:
      uVar5 = 1;
      goto LAB_0086cb80;
    }
  }
  else if (iVar2 == 5) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgram:initWithFilenames");
    if ((uVar4 & 1) == 0) {
      iVar6 = 6;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar4 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"cc.GLProgram:initWithFilenames");
      if ((uVar4 & 1) == 0) {
        iVar6 = 6;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar4 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_80,"cc.GLProgram:initWithFilenames");
        if ((uVar4 & 1) == 0) {
          iVar6 = 6;
        }
        else {
          local_90 = 0;
          local_88 = (void *)0x0;
          local_98 = 0;
          uVar4 = luaval_to_std_string
                            (param_1,5,(basic_string *)&local_98,"cc.GLProgram:initWithFilenames");
          if ((uVar4 & 1) == 0) {
            iVar6 = 6;
          }
          else {
            uVar3 = cocos2d::GLProgram::initWithFilenames
                              (this,(basic_string *)&local_50,(basic_string *)&local_68,
                               (basic_string *)&local_80,(basic_string *)&local_98);
            tolua_pushboolean(param_1,uVar3 & 1);
            iVar6 = 1;
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
    if (iVar6 != 6) goto LAB_0086cb08;
  }
  else if (iVar2 == 4) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar4 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.GLProgram:initWithFilenames");
    if ((uVar4 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar4 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_68,"cc.GLProgram:initWithFilenames");
      if ((uVar4 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        uVar4 = luaval_to_std_string
                          (param_1,4,(basic_string *)&local_80,"cc.GLProgram:initWithFilenames");
        if ((uVar4 & 1) == 0) {
          iVar6 = 2;
        }
        else {
          uVar3 = cocos2d::GLProgram::initWithFilenames
                            (this,(basic_string *)&local_50,(basic_string *)&local_68,
                             (basic_string *)&local_80);
          tolua_pushboolean(param_1,uVar3 & 1);
          iVar6 = 1;
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
    if (iVar6 != 2) goto LAB_0086cb08;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
             "cc.GLProgram:initWithFilenames",iVar2 + -1,4);
  uVar5 = 0;
LAB_0086cb80:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

