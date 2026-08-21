
/* lua_cocos2dx_studio_PositionFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_PositionFrame_constructor(lua_State *param_1)

{
  int iVar1;
  PositionFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x68);
    cocostudio::timeline::PositionFrame::PositionFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.PositionFrame");
  }
  else {
                    /* try { // try from 00942168 to 00a421fb has its CatchHandler @ 00942168
                       catch() { ... } // from try @ 00942168 with catch @ 00942168
                       catch() { ... } // from try @ 00942204 with catch @ 00942168 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.PositionFrame:PositionFrame",iVar1,0);
  }
  return iVar1 == 0;
}

