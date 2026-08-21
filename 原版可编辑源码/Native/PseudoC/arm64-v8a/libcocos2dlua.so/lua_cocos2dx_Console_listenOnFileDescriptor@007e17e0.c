
/* lua_cocos2dx_Console_listenOnFileDescriptor(lua_State*) */

void lua_cocos2dx_Console_listenOnFileDescriptor(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  Console *this;
  ulong uVar4;
  undefined8 uVar5;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Console *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"cc.Console:listenOnFileDescriptor");
    if ((uVar4 & 1) != 0) {
      uVar3 = cocos2d::Console::listenOnFileDescriptor(this,local_3c);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar5 = 1;
      goto LAB_007e189c;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_Console_listenOnFileDescriptor\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Console:listenOnFileDescriptor",iVar2 + -1,1);
  }
  uVar5 = 0;
LAB_007e189c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

