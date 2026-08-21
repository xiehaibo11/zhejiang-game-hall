
/* lua_cocos2dx_cocosbuilder_CCBReader_getCCBRootPath(lua_State*) */

undefined8 lua_cocos2dx_cocosbuilder_CCBReader_getCCBRootPath(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  CCBReader *this;
  undefined8 uVar4;
  byte *pbVar5;
  
                    /* try { // try from 0091f6ec to 00a1f6ff has its CatchHandler @ 0091f784 */
  this = (CCBReader *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
                    /* try { // try from 0091f704 to 00a1f737 has its CatchHandler @ 0091f788 */
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)cocosbuilder::CCBReader::getCCBRootPath(this);
                    /* try { // try from 0091f738 to 00a1f7d3 has its CatchHandler @ 0091f600 */
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
    lua_pushlstring(param_1,pbVar2,uVar1);
    uVar4 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CCBReader:getCCBRootPath",iVar3 + -1,0);
    uVar4 = 0;
  }
  return uVar4;
}

