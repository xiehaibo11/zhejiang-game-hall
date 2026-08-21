
/* lua_cocos2dx_ui_ScrollView_addEventListener(lua_State*) */

void lua_cocos2dx_ui_ScrollView_addEventListener(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* catch() { ... } // from try @ 00979134 with catch @ 00979234 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 1) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ScrollView:addEventListener",iVar2 + -1,1);
    uVar4 = 0;
    goto LAB_009792f8;
  }
  local_50 = (long *)0x0;
  (**(code **)(*plVar3 + 0x7a0))(plVar3,alStack_70);
  lua_settop(param_1,1);
  if (alStack_70 == local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_009792f0:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_009792f0;
  }
  uVar4 = 1;
LAB_009792f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

