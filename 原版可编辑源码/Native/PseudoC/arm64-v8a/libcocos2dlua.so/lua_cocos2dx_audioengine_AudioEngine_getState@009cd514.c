
/* lua_cocos2dx_audioengine_AudioEngine_getState(lua_State*) */

void lua_cocos2dx_audioengine_AudioEngine_getState(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 1) {
    uVar3 = luaval_to_int32(param_1,2,&local_2c,"ccexp.AudioEngine:getState");
    if ((uVar3 & 1) != 0) {
      iVar2 = cocos2d::experimental::AudioEngine::getState(local_2c);
      tolua_pushnumber((double)iVar2,param_1);
      uVar4 = 1;
      goto LAB_009cd5b4;
    }
    tolua_error(param_1,&DAT_012f01b4,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012f0199,
               iVar2 + -1,1);
  }
  uVar4 = 0;
LAB_009cd5b4:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

