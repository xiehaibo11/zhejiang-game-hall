
/* lua_cocos2dx_ui_ImageView_constructor(lua_State*) */

bool lua_cocos2dx_ui_ImageView_constructor(lua_State *param_1)

{
  int iVar1;
  ImageView *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* catch() { ... } // from try @ 00973cb0 with catch @ 00973db0 */
  if (iVar1 == 0) {
    this = operator_new(0x540);
    cocos2d::ui::ImageView::ImageView(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.ImageView");
  }
  else {
                    /* try { // try from 00973dcc to 00a73e1b has its CatchHandler @ 00973dcc
                       catch() { ... } // from try @ 00973dcc with catch @ 00973dcc
                       catch() { ... } // from try @ 00973e64 with catch @ 00973dcc
                       catch() { ... } // from try @ 00973ee4 with catch @ 00973dcc */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.ImageView:ImageView",iVar1,0);
  }
  return iVar1 == 0;
}

