
/* lua_cocos2dx_studio_EventFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_EventFrame_constructor(lua_State *param_1)

{
  int iVar1;
  EventFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x78);
    cocostudio::timeline::EventFrame::EventFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.EventFrame");
  }
  else {
                    /* try { // try from 009448c0 to 00a44923 has its CatchHandler @ 009448c0
                       catch() { ... } // from try @ 009448c0 with catch @ 009448c0
                       catch() { ... } // from try @ 009449a4 with catch @ 009448c0
                       catch() { ... } // from try @ 009449e4 with catch @ 009448c0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.EventFrame:EventFrame",iVar1,0);
  }
                    /* try { // try from 00944924 to 00a44973 has its CatchHandler @ 00944a8c */
  return iVar1 == 0;
}

