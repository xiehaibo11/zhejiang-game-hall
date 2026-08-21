
/* lua_cocos2dx_studio_ComAudio_stopEffect(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_stopEffect(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ComAudio *this;
  ulong uVar3;
  undefined4 uVar4;
  uint local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ComAudio *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_uint32(param_1,2,&local_3c,"ccs.ComAudio:stopEffect");
    if ((uVar3 & 1) != 0) {
      cocostudio::ComAudio::stopEffect(this,local_3c);
      uVar4 = 1;
      lua_settop(param_1,1);
      goto LAB_0093b11c;
    }
    tolua_error(param_1,"invalid arguments in function \'lua_cocos2dx_studio_ComAudio_stopEffect\'",
                0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012ccf9c,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_0093b11c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

