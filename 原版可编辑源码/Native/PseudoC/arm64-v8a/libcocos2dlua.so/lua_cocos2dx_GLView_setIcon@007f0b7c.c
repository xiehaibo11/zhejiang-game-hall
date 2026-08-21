
/* lua_cocos2dx_GLView_setIcon(lua_State*) */

void lua_cocos2dx_GLView_setIcon(lua_State *param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *local_60;
  byte *local_58;
  byte *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar7 = (long *)tolua_tousertype(param_1,1,0);
  iVar6 = lua_gettop(param_1);
  if (iVar6 + -1 == 1) {
    local_58 = (byte *)0x0;
    local_50 = (byte *)0x0;
    local_60 = (byte *)0x0;
    uVar8 = luaval_to_std_vector_string(param_1,2,(vector *)&local_60,"cc.GLView:setIcon");
    pbVar9 = local_60;
    if ((uVar8 & 1) == 0) {
      if (local_60 != (byte *)0x0) {
        if (local_58 != local_60) {
          bVar1 = local_58[-0x18];
          pbVar5 = local_58 + -0x18;
          pbVar4 = local_58;
          while( true ) {
            pbVar3 = pbVar5;
            if ((bVar1 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -8));
            }
            if (pbVar9 == pbVar3) break;
            bVar1 = pbVar3[-0x18];
            pbVar5 = pbVar3 + -0x18;
            pbVar4 = pbVar3;
          }
        }
        local_58 = pbVar9;
        operator_delete(local_60);
      }
      local_58 = (byte *)0x0;
      local_50 = (byte *)0x0;
      local_60 = (byte *)0x0;
      uVar8 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.GLView:setIcon");
      if ((uVar8 & 1) == 0) {
        if (((ulong)local_60 & 1) != 0) {
          operator_delete(local_50);
        }
        goto LAB_007f0d0c;
      }
      (**(code **)(*plVar7 + 0x120))(plVar7,&local_60);
      lua_settop(param_1,1);
      pbVar9 = local_50;
      if (((ulong)local_60 & 1) != 0) goto LAB_007f0d3c;
    }
    else {
      (**(code **)(*plVar7 + 0x128))(plVar7,&local_60);
      lua_settop(param_1,1);
      pbVar9 = local_60;
      if (local_60 != (byte *)0x0) {
        if (local_58 != local_60) {
          bVar1 = local_58[-0x18];
          pbVar5 = local_58 + -0x18;
          pbVar4 = local_58;
          while( true ) {
            pbVar3 = pbVar5;
            if ((bVar1 & 1) != 0) {
              operator_delete(*(void **)(pbVar4 + -8));
            }
            if (pbVar9 == pbVar3) break;
            bVar1 = pbVar3[-0x18];
            pbVar5 = pbVar3 + -0x18;
            pbVar4 = pbVar3;
          }
        }
        local_58 = pbVar9;
        pbVar9 = local_60;
LAB_007f0d3c:
        operator_delete(pbVar9);
      }
    }
    uVar10 = 1;
  }
  else {
LAB_007f0d0c:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.GLView:setIcon",iVar6 + -1,1);
    uVar10 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

