
/* lua_cocos2dx_studio_DisplayManager_containPoint(lua_State*) */

void lua_cocos2dx_studio_DisplayManager_containPoint(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  double local_48;
  double local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 2) {
    local_40 = 0.0;
    uVar5 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccs.DisplayManager:containPoint");
    if ((uVar5 & 1) == 0) goto LAB_00930fa4;
    uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4,&local_40);
  }
  else {
    if (((iVar2 != 3) ||
        (uVar5 = luaval_to_number(param_1,2,&local_40,"ccs.DisplayManager:containPoint"),
        (uVar5 & 1) == 0)) ||
       (uVar5 = luaval_to_number(param_1,3,&local_48,"ccs.DisplayManager:containPoint"),
       (uVar5 & 1) == 0)) {
LAB_00930fa4:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.DisplayManager:containPoint",iVar2 + -1,1);
      uVar6 = 0;
      goto LAB_00930fc8;
    }
    uVar3 = (**(code **)(*plVar4 + 0x48))((float)local_40,(float)local_48,plVar4);
  }
  tolua_pushboolean(param_1,uVar3 & 1);
  uVar6 = 1;
LAB_00930fc8:
                    /* try { // try from 00930fd4 to 00a3101f has its CatchHandler @ 00930fd4
                       catch() { ... } // from try @ 00930fd4 with catch @ 00930fd4
                       catch() { ... } // from try @ 00931048 with catch @ 00930fd4 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

