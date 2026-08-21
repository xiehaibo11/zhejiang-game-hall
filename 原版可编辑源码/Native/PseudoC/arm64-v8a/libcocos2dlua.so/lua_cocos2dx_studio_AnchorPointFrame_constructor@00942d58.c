
/* lua_cocos2dx_studio_AnchorPointFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_AnchorPointFrame_constructor(lua_State *param_1)

{
  int iVar1;
  AnchorPointFrame *this;
  
                    /* catch() { ... } // from try @ 00942cfc with catch @ 00942d5c */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x68);
    cocostudio::timeline::AnchorPointFrame::AnchorPointFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.AnchorPointFrame");
  }
  else {
                    /* try { // try from 00942d78 to 00a42e2b has its CatchHandler @ 00942d78
                       catch() { ... } // from try @ 00942d78 with catch @ 00942d78
                       catch() { ... } // from try @ 00942eac with catch @ 00942d78 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.AnchorPointFrame:AnchorPointFrame",iVar1,0);
  }
  return iVar1 == 0;
}

