
/* lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getInstance(lua_State*) */

undefined8 lua_cocos2dx_cocosdenshion_SimpleAudioEngine_getInstance(lua_State *param_1)

{
  int iVar1;
  undefined8 uVar2;
  SimpleAudioEngine *pSVar3;
  char *pcVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 0) {
    pSVar3 = (SimpleAudioEngine *)CocosDenshion::SimpleAudioEngine::getInstance();
    if (pSVar3 == (SimpleAudioEngine *)0x0) {
                    /* try { // try from 0090c8b8 to 00a0c8eb has its CatchHandler @ 0090c820 */
      lua_pushnil(param_1);
    }
    else {
      pcVar4 = getLuaTypeName<CocosDenshion::SimpleAudioEngine>(pSVar3,"cc.SimpleAudioEngine");
                    /* try { // try from 0090c8a4 to 00a0c8b7 has its CatchHandler @ 0090c940 */
      tolua_pushusertype(param_1,pSVar3,pcVar4);
    }
    uVar2 = 1;
  }
  else {
                    /* try { // try from 0090c870 to 00a0c887 has its CatchHandler @ 0090c944 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "cc.SimpleAudioEngine:getInstance",iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

