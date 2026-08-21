
/* lua_cocos2dx_extension_AssetsManagerEx_getRemoteManifest(lua_State*) */

undefined8 lua_cocos2dx_extension_AssetsManagerEx_getRemoteManifest(lua_State *param_1)

{
  int iVar1;
  AssetsManagerEx *this;
  undefined8 uVar2;
  void *pvVar3;
  
                    /* catch() { ... } // from try @ 009b12f8 with catch @ 009b1400 */
  this = (AssetsManagerEx *)tolua_tousertype(param_1,1,0);
                    /* try { // try from 009b141c to 00ab146b has its CatchHandler @ 009b141c
                       catch() { ... } // from try @ 009b141c with catch @ 009b141c
                       catch() { ... } // from try @ 009b1534 with catch @ 009b141c */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar3 = (void *)cocos2d::extension::AssetsManagerEx::getRemoteManifest(this);
    if (pvVar3 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009b146c to 00ab1487 has its CatchHandler @ 009b1610 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar3 + 0xc),(int *)((long)pvVar3 + 0x10),pvVar3,
                 "cc.Manifest");
    }
    uVar2 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7fce,
               iVar1 + -1,0);
    uVar2 = 0;
  }
  return uVar2;
}

