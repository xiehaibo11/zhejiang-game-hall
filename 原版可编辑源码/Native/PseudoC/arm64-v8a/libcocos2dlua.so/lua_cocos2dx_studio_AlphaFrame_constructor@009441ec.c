
/* lua_cocos2dx_studio_AlphaFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_AlphaFrame_constructor(lua_State *param_1)

{
  int iVar1;
  AlphaFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x60);
    cocostudio::timeline::AlphaFrame::AlphaFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 00944244 to 00a4428f has its CatchHandler @ 00944244
                       catch() { ... } // from try @ 00944244 with catch @ 00944244
                       catch() { ... } // from try @ 00944294 with catch @ 00944244 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.AlphaFrame");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.AlphaFrame:AlphaFrame",iVar1,0);
  }
  return iVar1 == 0;
}

