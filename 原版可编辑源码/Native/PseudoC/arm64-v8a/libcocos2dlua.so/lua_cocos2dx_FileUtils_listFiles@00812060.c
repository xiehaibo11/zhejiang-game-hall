
/* lua_cocos2dx_FileUtils_listFiles(lua_State*) */

undefined4 lua_cocos2dx_FileUtils_listFiles(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 uVar9;
  byte *local_68;
  byte *local_60;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar6 = lua_gettop(param_1);
  if (iVar6 + -1 == 1) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar8 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.FileUtils:listFiles");
    if ((uVar8 & 1) == 0) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FileUtils_listFiles\'",0);
      uVar9 = 0;
    }
    else {
      (**(code **)(*plVar7 + 0x1b8))(&local_68,plVar7,&local_50);
      ccvector_std_string_to_luaval(param_1,(vector *)&local_68);
      pbVar4 = local_68;
      if (local_68 != (byte *)0x0) {
        if (local_60 != local_68) {
          bVar1 = local_60[-0x18];
          pbVar5 = local_60 + -0x18;
          while( true ) {
            pbVar3 = pbVar5;
            if ((bVar1 & 1) != 0) {
              operator_delete(*(void **)(local_60 + -8));
            }
            if (pbVar4 == pbVar3) break;
            bVar1 = pbVar3[-0x18];
            pbVar5 = pbVar3 + -0x18;
            local_60 = pbVar3;
          }
        }
        local_60 = pbVar4;
        operator_delete(local_68);
      }
      uVar9 = 1;
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:listFiles",iVar6 + -1,1);
    uVar9 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

