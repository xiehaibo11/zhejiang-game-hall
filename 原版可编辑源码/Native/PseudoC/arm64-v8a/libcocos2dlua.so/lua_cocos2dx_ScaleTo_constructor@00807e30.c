
/* lua_cocos2dx_ScaleTo_constructor(lua_State*) */

bool lua_cocos2dx_ScaleTo_constructor(lua_State *param_1)

{
  int iVar1;
  Action *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x88);
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f9128;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9188;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.ScaleTo");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.ScaleTo:ScaleTo",iVar1,0);
  }
  return iVar1 == 0;
}

