
/* lua_cocos2dx_studio_ComAudio_setLoop(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_setLoop(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ComAudio *this;
  ulong uVar3;
  undefined4 uVar4;
  bool local_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComAudio *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccs.ComAudio:setLoop");
                    /* try { // try from 0093beec to 00a3bf23 has its CatchHandler @ 0093c1d8 */
    if ((uVar3 & 1) != 0) {
      cocostudio::ComAudio::setLoop(this,local_3c[0]);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0093bf48;
    }
                    /* try { // try from 0093bf34 to 00a3bf83 has its CatchHandler @ 0093c1e4 */
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ComAudio_setLoop\'",0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ComAudio:setLoop",iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0093bf48:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

