
/* lua_cocos2dx_cocosbuilder_CCBReader_readCallbackKeyframesForSeq(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBReader_readCallbackKeyframesForSeq(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  CCBSequence *pCVar3;
  ulong uVar4;
  
  pCVar3 = (CCBSequence *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
                    /* try { // try from 0091fc6c to 00a1fc6f has its CatchHandler @ 0091fcc4 */
  if (iVar1 + -1 == 1) {
                    /* try { // try from 0091fc70 to 00a1fcd7 has its CatchHandler @ 0091fc20 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar4 = luaval_is_usertype(param_1,2,"cc.CCBSequence",0), (uVar4 & 1) != 0)) {
      tolua_tousertype(param_1,2,0);
      uVar2 = cocosbuilder::CCBReader::readCallbackKeyframesForSeq(pCVar3);
                    /* catch() { ... } // from try @ 0091fc6c with catch @ 0091fcc4 */
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBReader_readCallbackKeyframesForSeq\'"
                ,0);
  }
  else {
                    /* try { // try from 0091fcd8 to 00a1fd8f has its CatchHandler @ 0091fcd8
                       catch() { ... } // from try @ 0091fcd8 with catch @ 0091fcd8
                       catch() { ... } // from try @ 0091fe10 with catch @ 0091fcd8 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:readCallbackKeyframesForSeq",iVar1 + -1,1);
  }
  return 0;
}

