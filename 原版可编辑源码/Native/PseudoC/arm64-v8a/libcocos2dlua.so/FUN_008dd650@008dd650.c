
undefined8 FUN_008dd650(lua_State *param_1)

{
  int iVar1;
  GComponent *this;
  ulong uVar2;
  GObject *pGVar3;
  void *pvVar4;
  
  this = (GComponent *)tolua_tousertype(param_1,1,0);
  iVar1 = lua_gettop(param_1);
  if (iVar1 + -1 == 1) {
                    /* try { // try from 008dd688 to 009dd693 has its CatchHandler @ 008dd728 */
                    /* try { // try from 008dd6a8 to 009dd6af has its CatchHandler @ 008dd708 */
    if (((param_1 != (lua_State *)0x0) && (iVar1 = lua_gettop(param_1), 1 < iVar1)) &&
       (uVar2 = luaval_is_usertype(param_1,2,"fairygui.GObject",0), (uVar2 & 1) != 0)) {
                    /* try { // try from 008dd6c0 to 009dd6cb has its CatchHandler @ 008dd744 */
      pGVar3 = (GObject *)tolua_tousertype(param_1,2,0);
                    /* try { // try from 008dd6cc to 009dd7b7 has its CatchHandler @ 008dd2f4 */
      pvVar4 = (void *)fairygui::GComponent::addChild(this,pGVar3);
      if (pvVar4 != (void *)0x0) {
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                   "fairygui.GObject");
        return 1;
      }
                    /* catch() { ... } // from try @ 008dd400 with catch @ 008dd73c */
      lua_pushnil(param_1);
      return 1;
                    /* catch() { ... } // from try @ 008dd4bc with catch @ 008dd744
                       catch() { ... } // from try @ 008dd6c0 with catch @ 008dd744 */
    }
                    /* catch() { ... } // from try @ 008dd688 with catch @ 008dd728 */
    tolua_error(param_1,"invalid arguments in function \'lua_fairygui_GComponent_addChild\'",0);
  }
  else {
                    /* catch() { ... } // from try @ 008dd6a8 with catch @ 008dd708 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "fairygui.GComponent:addChild",iVar1 + -1,1);
  }
                    /* catch() { ... } // from try @ 008dd470 with catch @ 008dd72c */
                    /* catch() { ... } // from try @ 008dd468 with catch @ 008dd734 */
  return 0;
}

