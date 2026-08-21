
/* lua_cocos2dx_extension_Manifest_getManifestFileUrl(lua_State*) */

undefined8 lua_cocos2dx_extension_Manifest_getManifestFileUrl(lua_State *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  int iVar3;
  Manifest *this;
  undefined8 uVar4;
  byte *pbVar5;
  
                    /* try { // try from 009b06b8 to 00ab06fb has its CatchHandler @ 009b07d8 */
  this = (Manifest *)tolua_tousertype(param_1,1,0);
  iVar3 = lua_gettop(param_1);
  if (iVar3 + -1 == 0) {
                    /* try { // try from 009b0708 to 00ab074f has its CatchHandler @ 009b0624 */
    pbVar5 = (byte *)cocos2d::extension::Manifest::getManifestFileUrl(this);
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
               "cc.Manifest:getManifestFileUrl",iVar3 + -1,0);
    uVar4 = 0;
                    /* try { // try from 009b0700 to 00ab0707 has its CatchHandler @ 009b07d0 */
  }
  return uVar4;
}

