
/* lua_cocos2dx_extension_EventListenerAssetsManagerEx_constructor(lua_State*) */

bool lua_cocos2dx_extension_EventListenerAssetsManagerEx_constructor(lua_State *param_1)

{
  int iVar1;
  EventListenerAssetsManagerEx *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x110);
    cocos2d::extension::EventListenerAssetsManagerEx::EventListenerAssetsManagerEx(this);
                    /* try { // try from 009b1cec to 00ab1d3b has its CatchHandler @ 009b1cec
                       catch() { ... } // from try @ 009b1cec with catch @ 009b1cec
                       catch() { ... } // from try @ 009b1d74 with catch @ 009b1cec
                       catch() { ... } // from try @ 009b1de0 with catch @ 009b1cec */
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,
               "cc.EventListenerAssetsManagerEx");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EventListenerAssetsManagerEx:EventListenerAssetsManagerEx",iVar1,0);
  }
  return iVar1 == 0;
}

