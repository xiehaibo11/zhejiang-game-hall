
/* lua_cocos2dx_audioengine_AudioEngine_setFinishCallback(lua_State*) */

undefined8 lua_cocos2dx_audioengine_AudioEngine_setFinishCallback(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  code *pcVar3;
  int local_64;
  undefined **local_60;
  undefined4 local_58;
  undefined ***local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    luaval_to_int32(param_1,2,&local_64,"ccexp.AudioEngine:setFinishCallback");
    local_58 = toluafix_ref_function(param_1,3,0);
    local_60 = &PTR_FUN_0169b418;
    local_40 = &local_60;
    cocos2d::experimental::AudioEngine::setFinishCallback(local_64,(function *)&local_60);
    if (&local_60 == local_40) {
      pcVar3 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) goto LAB_008cddc8;
      pcVar3 = (code *)(*local_40)[5];
    }
    (*pcVar3)();
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.AudioEngine:setFinishCallback",iVar2 + -1,2);
  }
LAB_008cddc8:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

