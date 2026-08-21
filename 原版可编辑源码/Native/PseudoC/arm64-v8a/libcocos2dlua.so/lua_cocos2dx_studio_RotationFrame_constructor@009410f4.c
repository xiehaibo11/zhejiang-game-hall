
/* lua_cocos2dx_studio_RotationFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_RotationFrame_constructor(lua_State *param_1)

{
  int iVar1;
  RotationFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00941138 to 00a4114f has its CatchHandler @ 00941218 */
    this = operator_new(0x60);
    cocostudio::timeline::RotationFrame::RotationFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 00941154 to 00a4116b has its CatchHandler @ 00941214 */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.RotationFrame");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.RotationFrame:RotationFrame",iVar1,0);
  }
                    /* try { // try from 0094116c to 00a41197 has its CatchHandler @ 009410e8 */
  return iVar1 == 0;
}

