
/* lua_cocos2dx_FileUtils_listFilesRecursivelyAsync(lua_State*) */

undefined4 lua_cocos2dx_FileUtils_listFilesRecursivelyAsync(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulong local_b8 [2];
  void *local_a8;
  long alStack_a0 [4];
  long *local_80;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 2) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:listFilesRecursivelyAsync",iVar2 + -1,2);
    uVar6 = 0;
    goto LAB_00810d00;
  }
  local_b8[1] = 0;
  local_a8 = (void *)0x0;
  local_b8[0] = 0;
  local_50 = (long *)0x0;
  uVar4 = luaval_to_std_string
                    (param_1,2,(basic_string *)local_b8,"cc.FileUtils:listFilesRecursivelyAsync");
  if ((uVar4 & 1) == 0) {
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_FileUtils_listFilesRecursivelyAsync\'"
                ,0);
    uVar6 = 0;
  }
  else {
    if (local_50 == (long *)0x0) {
      local_80 = (long *)0x0;
    }
    else if (alStack_70 == local_50) {
      local_80 = alStack_a0;
      (**(code **)(*local_50 + 0x18))(local_50,alStack_a0);
    }
    else {
      local_80 = (long *)(**(code **)(*local_50 + 0x10))();
    }
    (**(code **)(*plVar3 + 0x1d0))(plVar3,local_b8,alStack_a0);
    if (alStack_a0 == local_80) {
      pcVar5 = *(code **)(*local_80 + 0x20);
LAB_00810cb0:
      (*pcVar5)();
    }
    else if (local_80 != (long *)0x0) {
      pcVar5 = *(code **)(*local_80 + 0x28);
      goto LAB_00810cb0;
    }
    uVar6 = 1;
    lua_settop(param_1,1);
  }
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00810cec:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00810cec;
  }
  if ((local_b8[0] & 1) != 0) {
    operator_delete(local_a8);
  }
LAB_00810d00:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

