
/* lua_cocos2dx_extension_EventAssetsManagerEx_getAssetsManagerEx(lua_State*) */

undefined8 lua_cocos2dx_extension_EventAssetsManagerEx_getAssetsManagerEx(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x60);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 009af220 to 00aaf227 has its CatchHandler @ 009af31c */
                    /* try { // try from 009af228 to 00aaf24b has its CatchHandler @ 009af1b8 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.AssetsManagerEx");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e7bcc,
               iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 009af24c to 00aaf257 has its CatchHandler @ 009af31c */
  return uVar3;
}

