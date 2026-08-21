
/* lua_cocos2dx_FileUtils_isFileExist(lua_State*) */

void lua_cocos2dx_FileUtils_isFileExist(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  int iVar8;
  ulong local_c8;
  undefined8 local_c0;
  void *local_b8;
  long alStack_b0 [4];
  long *local_90;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong *local_60;
  long local_48;
  int iVar9;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_78 = 0;
    local_70 = (void *)0x0;
    local_80 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_80,"cc.FileUtils:isFileExist");
    if ((uVar5 & 1) == 0) {
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_00813dec;
    }
    uVar3 = (**(code **)(*plVar4 + 0x128))(plVar4,&local_80);
    tolua_pushboolean(param_1,uVar3 & 1);
    if ((local_80 & 1) != 0) {
      operator_delete(local_70);
    }
LAB_00813dd4:
    uVar6 = 1;
  }
  else {
    if (iVar2 == 3) {
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_c8 = 0;
      uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_c8,"cc.FileUtils:isFileExist");
      if ((uVar5 & 1) == 0) {
        iVar9 = 2;
        iVar8 = 2;
      }
      else {
        local_60 = (ulong *)0x0;
        local_90 = (long *)0x0;
        (**(code **)(*plVar4 + 0x130))(plVar4,&local_c8,alStack_b0);
        if (alStack_b0 == local_90) {
          pcVar7 = *(code **)(*local_90 + 0x20);
LAB_00813e40:
          (*pcVar7)();
        }
        else if (local_90 != (long *)0x0) {
          pcVar7 = *(code **)(*local_90 + 0x28);
          goto LAB_00813e40;
        }
        lua_settop(param_1,1);
        if (&local_80 == local_60) {
          pcVar7 = *(code **)(*local_60 + 0x20);
LAB_00813e78:
          (*pcVar7)();
        }
        else if (local_60 != (ulong *)0x0) {
          pcVar7 = *(code **)(*local_60 + 0x28);
          goto LAB_00813e78;
        }
        iVar9 = 1;
        iVar8 = 1;
      }
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
        iVar8 = iVar9;
      }
      if (iVar8 != 2) goto LAB_00813dd4;
    }
LAB_00813dec:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:isFileExist",iVar2 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

