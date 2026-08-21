
/* lua_cocos2dx_studio_PlayableFrame_constructor(lua_State*) */

bool lua_cocos2dx_studio_PlayableFrame_constructor(lua_State *param_1)

{
  int iVar1;
  PlayableFrame *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
                    /* try { // try from 00945858 to 00a4586f has its CatchHandler @ 00945918 */
    this = operator_new(0x70);
    cocostudio::timeline::PlayableFrame::PlayableFrame(this);
    cocos2d::Ref::autorelease((Ref *)this);
                    /* try { // try from 00945870 to 00a4589b has its CatchHandler @ 009457ec */
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.PlayableFrame");
  }
  else {
                    /* try { // try from 0094583c to 00a45853 has its CatchHandler @ 0094591c */
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.PlayableFrame:PlayableFrame",iVar1,0);
  }
  return iVar1 == 0;
}

