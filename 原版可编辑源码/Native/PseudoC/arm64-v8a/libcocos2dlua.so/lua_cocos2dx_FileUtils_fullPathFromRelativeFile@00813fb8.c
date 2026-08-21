
/* lua_cocos2dx_FileUtils_fullPathFromRelativeFile(lua_State*) */

undefined4 lua_cocos2dx_FileUtils_fullPathFromRelativeFile(lua_State *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined4 uVar8;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  ulong local_68;
  undefined8 uStack_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_50,"cc.FileUtils:fullPathFromRelativeFile");
    uVar6 = luaval_to_std_string
                      (param_1,3,(basic_string *)&local_68,"cc.FileUtils:fullPathFromRelativeFile");
    if ((uVar5 & uVar6 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_FileUtils_fullPathFromRelativeFile\'"
                  ,0);
      uVar8 = 0;
    }
    else {
      (**(code **)(*plVar7 + 0x68))(local_80,plVar7,&local_50,&local_68);
      uVar1 = (ulong)(local_80[0] >> 1);
      pvVar3 = (void *)((ulong)local_80 | 1);
      if ((local_80[0] & 1) != 0) {
        uVar1 = local_78;
        pvVar3 = local_70;
      }
      lua_pushlstring(param_1,pvVar3,uVar1);
      if ((local_80[0] & 1) != 0) {
        operator_delete(local_70);
      }
      uVar8 = 1;
    }
    if ((local_68 & 1) != 0) {
      operator_delete(local_58);
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:fullPathFromRelativeFile",iVar4 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

