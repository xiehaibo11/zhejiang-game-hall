
/* lua_cocos2dx_studio_SkewFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_SkewFrame_constructor(lua_State *param_1)

{
  int iVar1;
  SkewFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x68);
    cocostudio::timeline::SkewFrame::SkewFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 009416e8 with catch @ 00941720 */
                    /* try { // try from 00941734 to 00a41833 has its CatchHandler @ 00941734
                       catch() { ... } // from try @ 00941734 with catch @ 00941734
                       catch() { ... } // from try @ 009418b4 with catch @ 00941734 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.SkewFrame");
  }
  else {
                    /* try { // try from 009416e8 to 00a416eb has its CatchHandler @ 00941720 */
                    /* try { // try from 009416ec to 00a41733 has its CatchHandler @ 0094169c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.SkewFrame:SkewFrame",iVar1,0);
  }
  return iVar1 == 0;
}

