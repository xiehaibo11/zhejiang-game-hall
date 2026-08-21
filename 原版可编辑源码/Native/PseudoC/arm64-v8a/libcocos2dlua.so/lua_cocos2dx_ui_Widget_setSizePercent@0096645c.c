
/* lua_cocos2dx_ui_Widget_setSizePercent(lua_State*) */

undefined4 lua_cocos2dx_ui_Widget_setSizePercent(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00966484 to 00a66527 has its CatchHandler @ 00966690 */
  plVar3 = (long *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    local_40 = 0;
    uVar4 = luaval_to_vec2(param_1,2,(Vec2 *)&local_40,"ccui.Widget:setSizePercent");
    if ((uVar4 & 1) != 0) {
      (**(code **)(*plVar3 + 0x5c0))(plVar3,&local_40);
      uVar5 = 1;
      lua_settop(param_1,1);
      goto LAB_00966524;
    }
    tolua_error(param_1,0x12d6523,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d6508,
               iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_00966524:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00966540 to 00a6657b has its CatchHandler @ 0096668c */
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

