
/* lua_cocos2dx_ui_LoadingBar_constructor(lua_State*) */

bool lua_cocos2dx_ui_LoadingBar_constructor(lua_State *param_1)

{
  int iVar1;
  LoadingBar *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x560);
    cocos2d::ui::LoadingBar::LoadingBar(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.LoadingBar");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.LoadingBar:LoadingBar",iVar1,0);
  }
                    /* try { // try from 00977c8c to 00a77cd7 has its CatchHandler @ 00977c8c
                       catch() { ... } // from try @ 00977c8c with catch @ 00977c8c
                       catch() { ... } // from try @ 00977cdc with catch @ 00977c8c */
  return iVar1 == 0;
}

