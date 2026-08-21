
/* lua_cocos2dx_studio_TextureFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_TextureFrame_constructor(lua_State *param_1)

{
  int iVar1;
  TextureFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x78);
    cocostudio::timeline::TextureFrame::TextureFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.TextureFrame");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.TextureFrame:TextureFrame",iVar1,0);
                    /* try { // try from 00940cb4 to 00a40cff has its CatchHandler @ 00940cb4
                       catch() { ... } // from try @ 00940cb4 with catch @ 00940cb4
                       catch() { ... } // from try @ 00940d04 with catch @ 00940cb4 */
  }
  return iVar1 == 0;
}

