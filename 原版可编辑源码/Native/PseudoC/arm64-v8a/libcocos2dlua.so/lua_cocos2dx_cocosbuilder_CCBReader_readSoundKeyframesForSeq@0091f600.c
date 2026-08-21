
/* lua_cocos2dx_cocosbuilder_CCBReader_readSoundKeyframesForSeq(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBReader_readSoundKeyframesForSeq(lua_State *param_1)

{
  int iVar1;
  uint uVar2;
  CCBReader *this;
  ulong uVar3;
  CCBSequence *pCVar4;
  
                    /* try { // try from 0091f600 to 00a1f6b7 has its CatchHandler @ 0091f600
                       catch() { ... } // from try @ 0091f600 with catch @ 0091f600
                       catch() { ... } // from try @ 0091f738 with catch @ 0091f600 */
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar3 = luaval_is_usertype(param_1,2,"cc.CCBSequence",0), (uVar3 & 1) != 0)) {
      pCVar4 = (CCBSequence *)tolua_tousertype(param_1,2,0);
      uVar2 = cocosbuilder::CCBReader::readSoundKeyframesForSeq(this,pCVar4);
      tolua_pushboolean(param_1,uVar2 & 1);
      return 1;
    }
                    /* try { // try from 0091f6b8 to 00a1f6eb has its CatchHandler @ 0091f7b8 */
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_cocosbuilder_CCBReader_readSoundKeyframesForSeq\'"
                ,0);
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:readSoundKeyframesForSeq",iVar1 + -1,1);
  }
  return 0;
}

