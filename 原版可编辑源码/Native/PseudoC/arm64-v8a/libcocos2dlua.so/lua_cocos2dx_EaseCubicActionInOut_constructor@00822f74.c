
/* lua_cocos2dx_EaseCubicActionInOut_constructor(lua_State*) */

bool lua_cocos2dx_EaseCubicActionInOut_constructor(lua_State *param_1)

{
  int iVar1;
  Action *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x60);
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined ***)this = &PTR__ActionEase_016f6c68;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6cd0;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.EaseCubicActionInOut");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.EaseCubicActionInOut:EaseCubicActionInOut",iVar1,0);
  }
  return iVar1 == 0;
}

