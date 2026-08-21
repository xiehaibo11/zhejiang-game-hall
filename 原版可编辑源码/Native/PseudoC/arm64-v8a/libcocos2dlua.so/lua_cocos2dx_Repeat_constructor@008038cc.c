
/* lua_cocos2dx_Repeat_constructor(lua_State*) */

bool lua_cocos2dx_Repeat_constructor(lua_State *param_1)

{
  int iVar1;
  Action *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x70);
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Repeat_016f85a8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8608;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Repeat");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Repeat:Repeat",iVar1,0);
  }
  return iVar1 == 0;
}

