
/* lua_cocos2dx_FileUtils_writeStringToFile(lua_State*) */

void lua_cocos2dx_FileUtils_writeStringToFile(lua_State *param_1)

{
  long lVar1;
  void *__src;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  void *__dest;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  undefined8 local_f8;
  void *local_f0;
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  long alStack_d0 [4];
  long *local_b0;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 3) {
    local_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_a0,"cc.FileUtils:writeStringToFile");
    if ((uVar5 & 1) == 0) {
      iVar9 = 6;
    }
    else {
      uStack_e0 = 0;
      local_d8 = (void *)0x0;
      local_e8 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_e8,"cc.FileUtils:writeStringToFile");
      if ((uVar5 & 1) == 0) {
        iVar9 = 6;
      }
      else {
        uVar3 = (**(code **)(*plVar4 + 0xd8))(plVar4,&local_a0,&local_e8);
        tolua_pushboolean(param_1,uVar3 & 1);
        iVar9 = 1;
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
    }
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
    if (iVar9 == 6) goto LAB_00812f0c;
LAB_00812ed8:
    uVar7 = 1;
  }
  else {
    if (iVar2 == 4) {
      uStack_e0 = 0;
      local_d8 = (void *)0x0;
      local_e8 = 0;
      uVar5 = luaval_to_std_string
                        (param_1,2,(basic_string *)&local_e8,"cc.FileUtils:writeStringToFile");
      if ((uVar5 & 1) == 0) {
        iVar9 = 2;
      }
      else {
        local_f8 = 0;
        local_f0 = (void *)0x0;
        local_100 = 0;
        uVar6 = luaval_to_std_string
                          (param_1,3,(basic_string *)&local_100,"cc.FileUtils:writeStringToFile");
        __src = local_d8;
        uVar5 = uStack_e0;
        if ((uVar6 & 1) == 0) {
          iVar9 = 2;
        }
        else {
          local_80 = (ulong *)0x0;
          local_120 = 0;
          uStack_118 = 0;
          local_110 = (void *)0x0;
          if ((local_e8 & 1) == 0) {
            uStack_118 = uStack_e0;
            local_120 = local_e8;
            local_110 = local_d8;
          }
          else {
            if (0xffffffffffffffef < uStack_e0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_e0 < 0x17) {
              __dest = (void *)((ulong)&local_120 | 1);
              local_120 = (ulong)(byte)((int)uStack_e0 << 1);
              if (uStack_e0 != 0) goto LAB_00812fb0;
            }
            else {
              uVar6 = uStack_e0 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar6);
              local_120 = uVar6 | 1;
              uStack_118 = uVar5;
              local_110 = __dest;
LAB_00812fb0:
              memcpy(__dest,__src,uVar5);
            }
            *(undefined1 *)((long)__dest + uVar5) = 0;
          }
          local_b0 = (long *)0x0;
          (**(code **)(*plVar4 + 0xe0))(plVar4,&local_120,&local_100,alStack_d0);
          if (alStack_d0 == local_b0) {
            pcVar8 = *(code **)(*local_b0 + 0x20);
LAB_0081300c:
            (*pcVar8)();
          }
          else if (local_b0 != (long *)0x0) {
            pcVar8 = *(code **)(*local_b0 + 0x28);
            goto LAB_0081300c;
          }
          if ((local_120 & 1) != 0) {
            operator_delete(local_110);
          }
          lua_settop(param_1,1);
          if (&local_a0 == local_80) {
            pcVar8 = *(code **)(*local_80 + 0x20);
LAB_00813054:
            (*pcVar8)();
          }
          else if (local_80 != (ulong *)0x0) {
            pcVar8 = *(code **)(*local_80 + 0x28);
            goto LAB_00813054;
          }
          iVar9 = 1;
        }
        if ((local_100 & 1) != 0) {
          operator_delete(local_f0);
        }
      }
      if ((local_e8 & 1) != 0) {
        operator_delete(local_d8);
      }
      if (iVar9 != 2) goto LAB_00812ed8;
    }
LAB_00812f0c:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:writeStringToFile",iVar2 + -1,2);
    uVar7 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

