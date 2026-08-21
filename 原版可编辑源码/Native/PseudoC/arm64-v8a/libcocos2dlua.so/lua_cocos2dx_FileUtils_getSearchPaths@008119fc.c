
/* lua_cocos2dx_FileUtils_getSearchPaths(lua_State*) */

void lua_cocos2dx_FileUtils_getSearchPaths(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  byte *local_50;
  byte *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar6 = lua_gettop(param_1);
  if (iVar6 + -1 == 0) {
    (**(code **)(*plVar7 + 0x90))(&local_50,plVar7);
    ccvector_std_string_to_luaval(param_1,(vector *)&local_50);
    pbVar4 = local_50;
    if (local_50 != (byte *)0x0) {
      if (local_48 != local_50) {
        bVar1 = local_48[-0x18];
        pbVar5 = local_48 + -0x18;
        while( true ) {
          pbVar3 = pbVar5;
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(local_48 + -8));
          }
          if (pbVar4 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar5 = pbVar3 + -0x18;
          local_48 = pbVar3;
        }
      }
      local_48 = pbVar4;
      operator_delete(local_50);
    }
    uVar8 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:getSearchPaths",iVar6 + -1,0);
    uVar8 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

