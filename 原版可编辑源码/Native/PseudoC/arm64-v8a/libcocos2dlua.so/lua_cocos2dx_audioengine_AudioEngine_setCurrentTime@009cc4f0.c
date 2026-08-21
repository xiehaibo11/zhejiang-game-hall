
/* lua_cocos2dx_audioengine_AudioEngine_setCurrentTime(lua_State*) */

void lua_cocos2dx_audioengine_AudioEngine_setCurrentTime(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  double local_48;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    uVar4 = luaval_to_int32(param_1,2,&local_3c,"ccexp.AudioEngine:setCurrentTime");
    uVar5 = luaval_to_number(param_1,3,&local_48,"ccexp.AudioEngine:setCurrentTime");
    if (((uVar4 & 1) != 0) && ((uVar5 & 1) != 0)) {
      uVar3 = cocos2d::experimental::AudioEngine::setCurrentTime(local_3c,(float)local_48);
      tolua_pushboolean(param_1,uVar3 & 1);
      uVar6 = 1;
      goto LAB_009cc5bc;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_audioengine_AudioEngine_setCurrentTime\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012efc8f,
               iVar2 + -1,2);
  }
  uVar6 = 0;
LAB_009cc5bc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

