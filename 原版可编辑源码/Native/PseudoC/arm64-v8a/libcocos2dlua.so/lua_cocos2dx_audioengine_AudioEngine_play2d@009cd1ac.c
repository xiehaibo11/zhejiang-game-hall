
/* lua_cocos2dx_audioengine_AudioEngine_play2d(lua_State*) */

undefined4 lua_cocos2dx_audioengine_AudioEngine_play2d(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  AudioProfile *pAVar7;
  undefined4 uVar8;
  double local_70;
  bool local_64 [4];
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  switch(iVar2) {
  case 2:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    uVar6 = luaval_to_std_string(param_1,2,(basic_string *)local_60,"ccexp.AudioEngine:play2d");
    if ((uVar6 & 1) != 0) {
      iVar2 = cocos2d::experimental::AudioEngine::play2d
                        ((basic_string *)local_60,false,1.0,(AudioProfile *)0x0);
      tolua_pushnumber((double)iVar2,param_1);
      break;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_audioengine_AudioEngine_play2d\'",0);
LAB_009cd498:
    uVar8 = 0;
    if ((local_60[0] & 1) == 0) goto LAB_009cd4ac;
    goto LAB_009cd4a4;
  case 3:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_60,"ccexp.AudioEngine:play2d");
    uVar4 = luaval_to_boolean(param_1,3,(bool *)&local_70,"ccexp.AudioEngine:play2d");
    if ((uVar3 & uVar4 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_audioengine_AudioEngine_play2d\'",0)
      ;
      goto LAB_009cd498;
    }
    iVar2 = cocos2d::experimental::AudioEngine::play2d
                      ((basic_string *)local_60,(bool)local_70._0_1_,1.0,(AudioProfile *)0x0);
    tolua_pushnumber((double)iVar2,param_1);
    break;
  case 4:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_60,"ccexp.AudioEngine:play2d");
    uVar4 = luaval_to_boolean(param_1,3,local_64,"ccexp.AudioEngine:play2d");
    uVar5 = luaval_to_number(param_1,4,&local_70,"ccexp.AudioEngine:play2d");
    if ((uVar3 & uVar4 & uVar5 & 1) == 0) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_audioengine_AudioEngine_play2d\'",0)
      ;
      goto LAB_009cd498;
    }
    iVar2 = cocos2d::experimental::AudioEngine::play2d
                      ((basic_string *)local_60,local_64[0],
                       (float)(double)CONCAT71(local_70._1_7_,local_70._0_1_),(AudioProfile *)0x0);
    tolua_pushnumber((double)iVar2,param_1);
    break;
  case 5:
    local_60[1] = 0;
    local_50 = (void *)0x0;
    local_60[0] = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)local_60,"ccexp.AudioEngine:play2d");
    uVar4 = luaval_to_boolean(param_1,3,local_64,"ccexp.AudioEngine:play2d");
    uVar5 = luaval_to_number(param_1,4,&local_70,"ccexp.AudioEngine:play2d");
    if ((((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 5)) ||
        (uVar6 = luaval_is_usertype(param_1,5,"ccexp.AudioProfile",0), (uVar6 & 1) == 0)) ||
       (pAVar7 = (AudioProfile *)tolua_tousertype(param_1,5,0), (uVar3 & uVar4 & uVar5 & 1) == 0)) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_audioengine_AudioEngine_play2d\'",0)
      ;
      goto LAB_009cd498;
    }
    iVar2 = cocos2d::experimental::AudioEngine::play2d
                      ((basic_string *)local_60,local_64[0],
                       (float)(double)CONCAT71(local_70._1_7_,local_70._0_1_),pAVar7);
    tolua_pushnumber((double)iVar2,param_1);
    break;
  default:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccexp.AudioEngine:play2d",iVar2 + -1,1);
    uVar8 = 0;
    goto LAB_009cd4ac;
  }
  uVar8 = 1;
  if ((local_60[0] & 1) != 0) {
LAB_009cd4a4:
    operator_delete(local_50);
  }
LAB_009cd4ac:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

