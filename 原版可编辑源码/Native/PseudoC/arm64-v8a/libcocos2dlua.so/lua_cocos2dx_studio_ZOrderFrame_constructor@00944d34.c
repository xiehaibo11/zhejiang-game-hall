
/* lua_cocos2dx_studio_ZOrderFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_ZOrderFrame_constructor(lua_State *param_1)

{
  int iVar1;
  ZOrderFrame *this;
  
                    /* try { // try from 00944d34 to 00a44d67 has its CatchHandler @ 00944db8 */
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x60);
    cocostudio::timeline::ZOrderFrame::ZOrderFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ZOrderFrame");
  }
  else {
                    /* try { // try from 00944d68 to 00a44e03 has its CatchHandler @ 00944bd0 */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ZOrderFrame:ZOrderFrame",iVar1,0);
  }
                    /* catch() { ... } // from try @ 00944d1c with catch @ 00944db4 */
  return iVar1 == 0;
}

