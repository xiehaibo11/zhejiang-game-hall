
/* lua_cocos2dx_EventMouse_setCursorPosition(lua_State*) */

undefined4 lua_cocos2dx_EventMouse_setCursorPosition(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined4 uVar6;
  double local_58;
  double dStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_number(param_1,2,&dStack_50,"cc.EventMouse:setCursorPosition");
    uVar5 = luaval_to_number(param_1,3,&local_58,"cc.EventMouse:setCursorPosition");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      *(undefined8 *)(lVar3 + 100) = *(undefined8 *)(lVar3 + 0x5c);
      *(float *)(lVar3 + 0x40) = (float)dStack_50;
      *(float *)(lVar3 + 0x44) = (float)local_58;
      *(float *)(lVar3 + 0x5c) = (float)dStack_50;
      *(float *)(lVar3 + 0x60) = (float)local_58;
      if (*(char *)(lVar3 + 0x50) == '\0') {
        *(undefined1 *)(lVar3 + 0x50) = 1;
        *(undefined8 *)(lVar3 + 0x54) = *(undefined8 *)(lVar3 + 0x5c);
      }
      uVar6 = 1;
      lua_settop(param_1,1);
      goto LAB_00819714;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_EventMouse_setCursorPosition\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventMouse:setCursorPosition",iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_00819714:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

