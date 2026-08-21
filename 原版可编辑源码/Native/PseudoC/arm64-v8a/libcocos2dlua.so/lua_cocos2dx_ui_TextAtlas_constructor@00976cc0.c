
/* lua_cocos2dx_ui_TextAtlas_constructor(lua_State*) */

bool lua_cocos2dx_ui_TextAtlas_constructor(lua_State *param_1)

{
  int iVar1;
  TextAtlas *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 00976be4 with catch @ 00976d00 */
                    /* catch() { ... } // from try @ 00976bb8 with catch @ 00976d04 */
    this = operator_new(0x550);
                    /* catch() { ... } // from try @ 00976aec with catch @ 00976d08 */
    cocos2d::ui::TextAtlas::TextAtlas(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00976ac8 with catch @ 00976d28 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.TextAtlas");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.TextAtlas:TextAtlas",iVar1,0);
  }
  return iVar1 == 0;
}

