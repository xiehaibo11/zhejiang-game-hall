
/* lua_cocos2dx_extension_AssetsManagerEx_getStoragePath(lua_State*) */

undefined8 lua_cocos2dx_extension_AssetsManagerEx_getStoragePath(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  AssetsManagerEx *this;
  undefined8 uVar4;
  byte *pbVar5;
  
  this = (AssetsManagerEx *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
    pbVar5 = (byte *)cocos2d::extension::AssetsManagerEx::getStoragePath(this);
                    /* try { // try from 009b1090 to 00ab1093 has its CatchHandler @ 009b1134 */
    uVar1 = *(ulong *)(pbVar5 + 8);
    pbVar2 = *(byte **)(pbVar5 + 0x10);
                    /* try { // try from 009b1094 to 00ab10ff has its CatchHandler @ 009b0fb4 */
    if ((*pbVar5 & 1) == 0) {
      pbVar2 = pbVar5 + 1;
      uVar1 = (ulong)(*pbVar5 >> 1);
    }
    lua_pushlstring(param_1,pbVar2,uVar1);
    uVar4 = 1;
  }
  else {
                    /* try { // try from 009b106c to 00ab107b has its CatchHandler @ 009b10e4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.AssetsManagerEx:getStoragePath",iVar3 + -1,0);
    uVar4 = 0;
  }
  return uVar4;
}

