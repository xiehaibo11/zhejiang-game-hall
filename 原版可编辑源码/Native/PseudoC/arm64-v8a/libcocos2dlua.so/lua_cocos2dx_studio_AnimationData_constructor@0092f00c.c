
/* lua_cocos2dx_studio_AnimationData_constructor(lua_State*) */

bool lua_cocos2dx_studio_AnimationData_constructor(lua_State *param_1)

{
  int iVar1;
  AnimationData *this;
  
  iVar1 = lua_gettop();
                    /* try { // try from 0092f020 to 00a2f053 has its CatchHandler @ 0092f0a4 */
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x80);
                    /* try { // try from 0092f054 to 00a2f0ef has its CatchHandler @ 0092ef04 */
    cocostudio::AnimationData::AnimationData(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.AnimationData");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.AnimationData:AnimationData",iVar1,0);
  }
  return iVar1 == 0;
}

