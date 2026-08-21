
/* lua_cocos2dx_Console_listenOnTCP(lua_State*) */

void lua_cocos2dx_Console_listenOnTCP(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 1) {
    uVar5 = luaval_to_int32(param_1,2,&local_3c,"cc.Console:listenOnTCP");
    if ((uVar5 & 1) != 0) {
      uVar4 = cocos2d::Console::listenOnTCP(iVar2);
      tolua_pushboolean(param_1,uVar4 & 1);
      uVar6 = 1;
      goto LAB_007e14d8;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_Console_listenOnTCP\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Console:listenOnTCP",iVar3 + -1,1);
  }
  uVar6 = 0;
LAB_007e14d8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

