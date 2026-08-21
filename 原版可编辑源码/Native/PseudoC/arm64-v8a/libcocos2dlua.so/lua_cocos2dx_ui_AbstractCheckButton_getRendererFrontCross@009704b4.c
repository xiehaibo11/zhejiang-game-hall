
/* lua_cocos2dx_ui_AbstractCheckButton_getRendererFrontCross(lua_State*) */

undefined8 lua_cocos2dx_ui_AbstractCheckButton_getRendererFrontCross(lua_State *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  void *pvVar4;
  
                    /* try { // try from 009704c0 to 00a704f3 has its CatchHandler @ 009705c0 */
  lVar2 = tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 0) {
    pvVar4 = *(void **)(lVar2 + 0x500);
                    /* try { // try from 0097050c to 00a7053f has its CatchHandler @ 00970590 */
    if (pvVar4 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                 "cc.Sprite");
    }
    uVar3 = 1;
  }
  else {
                    /* try { // try from 009704f4 to 00a70507 has its CatchHandler @ 0097058c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.AbstractCheckButton:getRendererFrontCross",iVar1 + -1,0);
    uVar3 = 0;
  }
                    /* try { // try from 00970540 to 00a705db has its CatchHandler @ 00970378 */
  return uVar3;
}

