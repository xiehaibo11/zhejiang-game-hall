
/* lua_cocos2dx_FileUtils_setSearchPaths(lua_State*) */

bool lua_cocos2dx_FileUtils_setSearchPaths(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  bool bVar10;
  byte *local_50;
  byte *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar8 = (long *)tolua_tousertype(param_1,1,0);
  iVar7 = lua_gettop(param_1);
  if (iVar7 + -1 == 1) {
    local_48 = (byte *)0x0;
    uStack_40 = 0;
    local_50 = (byte *)0x0;
    uVar9 = luaval_to_std_vector_string(param_1,2,(vector *)&local_50,"cc.FileUtils:setSearchPaths")
    ;
    bVar10 = (uVar9 & 1) == 0;
    if (bVar10) {
      tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_FileUtils_setSearchPaths\'",
                  0);
      pbVar5 = local_50;
    }
    else {
      (**(code **)(*plVar8 + 0x88))(plVar8,&local_50);
      lua_settop(param_1,1);
      pbVar5 = local_50;
    }
    bVar10 = !bVar10;
    local_50 = pbVar5;
    if (pbVar5 != (byte *)0x0) {
      if (local_48 != pbVar5) {
        bVar1 = local_48[-0x18];
        pbVar6 = local_48 + -0x18;
        pbVar4 = local_48;
        while( true ) {
          pbVar3 = pbVar6;
          if ((bVar1 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if (pbVar5 == pbVar3) break;
          bVar1 = pbVar3[-0x18];
          pbVar6 = pbVar3 + -0x18;
          pbVar4 = pbVar3;
        }
      }
      local_48 = pbVar5;
      operator_delete(local_50);
    }
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:setSearchPaths",iVar7 + -1,1);
    bVar10 = false;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar10;
}

