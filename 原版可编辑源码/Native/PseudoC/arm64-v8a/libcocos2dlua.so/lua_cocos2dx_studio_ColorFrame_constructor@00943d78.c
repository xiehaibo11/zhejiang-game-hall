
/* lua_cocos2dx_studio_ColorFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_ColorFrame_constructor(lua_State *param_1)

{
  int iVar1;
  ColorFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
                    /* try { // try from 00943d90 to 00a43dc3 has its CatchHandler @ 00943cfc */
  if (iVar1 == 0) {
    this = operator_new(0x68);
                    /* try { // try from 00943dc4 to 00a43e4b has its CatchHandler @ 00943efc */
    cocostudio::timeline::ColorFrame::ColorFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ColorFrame");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ColorFrame:ColorFrame",iVar1,0);
  }
  return iVar1 == 0;
}

