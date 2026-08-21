
/* lua_cocos2dx_ui_LayoutComponent_bindLayoutComponent(lua_State*) */

undefined8 lua_cocos2dx_ui_LayoutComponent_bindLayoutComponent(lua_State *param_1)

{
  int iVar1;
  ulong uVar2;
  Node *pNVar3;
  void *pvVar4;
  
  iVar1 = lua_gettop();
  if (iVar1 + -1 == 1) {
                    /* try { // try from 009988d0 to 00a988e7 has its CatchHandler @ 009989b4 */
                    /* try { // try from 009988ec to 00a988fb has its CatchHandler @ 009989b0 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"cc.Node",0), (uVar2 & 1) != 0)) {
                    /* try { // try from 009988fc to 00a98907 has its CatchHandler @ 00998998 */
      pNVar3 = (Node *)tolua_tousertype(param_1,2,0);
      pvVar4 = (void *)cocos2d::ui::LayoutComponent::bindLayoutComponent(pNVar3);
      if (pvVar4 != (void *)0x0) {
                    /* try { // try from 00998908 to 00a98943 has its CatchHandler @ 00998880 */
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "ccui.LayoutComponent");
        return 1;
      }
      lua_pushnil(param_1);
      return 1;
    }
                    /* try { // try from 00998958 to 00a989cf has its CatchHandler @ 00998880 */
    tolua_error(param_1,&DAT_012e1e3d,0);
  }
  else {
                    /* try { // try from 00998944 to 00a98957 has its CatchHandler @ 009989b4 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",
               "ccui.LayoutComponent:bindLayoutComponent",iVar1 + -1,1);
  }
  return 0;
}

