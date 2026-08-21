
/* lua_cocos2dx_studio_ComAudio_stopBackgroundMusic(lua_State*) */

undefined4 lua_cocos2dx_studio_ComAudio_stopBackgroundMusic(lua_State *param_1)

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
  if (iVar2 == 2) {
    uVar3 = luaval_to_boolean(param_1,2,local_3c,"ccs.ComAudio:stopBackgroundMusic");
    if ((uVar3 & 1) == 0) goto LAB_0093b440;
    cocostudio::ComAudio::stopBackgroundMusic(this,local_3c[0]);
  }
  else {
    if (iVar2 != 1) {
LAB_0093b440:
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012cd0d6,
                 iVar2 + -1,1);
      uVar4 = 0;
      goto LAB_0093b464;
    }
    cocostudio::ComAudio::stopBackgroundMusic();
  }
  uVar4 = 1;
  lua_settop(param_1,1);
LAB_0093b464:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

