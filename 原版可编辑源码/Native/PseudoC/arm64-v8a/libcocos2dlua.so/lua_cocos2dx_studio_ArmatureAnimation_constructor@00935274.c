
/* lua_cocos2dx_studio_ArmatureAnimation_constructor(lua_State*) */

bool lua_cocos2dx_studio_ArmatureAnimation_constructor(lua_State *param_1)

{
  int iVar1;
  ArmatureAnimation *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x1e0);
    cocostudio::ArmatureAnimation::ArmatureAnimation(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccs.ArmatureAnimation");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccs.ArmatureAnimation:ArmatureAnimation",iVar1,0);
  }
  return iVar1 == 0;
}

