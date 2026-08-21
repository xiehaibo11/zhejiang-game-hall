
/* lua_cocos2dx_FileUtils_getNewFilename(lua_State*) */

undefined4 lua_cocos2dx_FileUtils_getNewFilename(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.FileUtils:getNewFilename");
    if ((uVar5 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FileUtils_getNewFilename\'",
                  0);
      uVar6 = 0;
    }
    else {
      (**(code **)(*plVar4 + 0x1d8))(local_68,plVar4,&local_50);
      uVar5 = (ulong)(local_68[0] >> 1);
      pvVar2 = (void *)((ulong)local_68 | 1);
      if ((local_68[0] & 1) != 0) {
        uVar5 = local_60;
        pvVar2 = local_58;
      }
      lua_pushlstring(param_1,pvVar2,uVar5);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      uVar6 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:getNewFilename",iVar3 + -1,1);
    uVar6 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

