
/* lua_cocos2dx_ui_Button_getRendererNormal(lua_State*) */

undefined8 lua_cocos2dx_ui_Button_getRendererNormal(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
  lVar2 = tolua_tousertype(param_1,1,0);
                    /* try { // try from 0096e024 to 00a6e057 has its CatchHandler @ 0096e124 */
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x4f0);
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
                    /* try { // try from 0096e070 to 00a6e0a3 has its CatchHandler @ 0096e0f4 */
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "ccui.Scale9Sprite");
    }
    uVar3 = 1;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012d859d,
               iVar1 + -1,0);
    uVar3 = 0;
                    /* try { // try from 0096e058 to 00a6e06b has its CatchHandler @ 0096e0f0 */
  }
  return uVar3;
}

