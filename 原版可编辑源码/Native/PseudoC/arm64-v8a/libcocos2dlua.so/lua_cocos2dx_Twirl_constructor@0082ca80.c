
/* lua_cocos2dx_Twirl_constructor(lua_State*) */

bool lua_cocos2dx_Twirl_constructor(lua_State *param_1)

{
  int iVar1;
  Action *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x80);
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined ***)this = &PTR__Action_016f7408;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7470;
    cocos2d::Size::Size((Size *)(this + 0x58));
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined ***)this = &PTR__Action_016f7cd8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f7d40;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Twirl");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Twirl:Twirl",
               iVar1,0);
  }
  return iVar1 == 0;
}

