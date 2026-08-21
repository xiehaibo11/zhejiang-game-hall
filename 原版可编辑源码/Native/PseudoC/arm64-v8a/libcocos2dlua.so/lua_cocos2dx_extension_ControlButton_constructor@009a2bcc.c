
/* lua_cocos2dx_extension_ControlButton_constructor(lua_State*) */

bool lua_cocos2dx_extension_ControlButton_constructor(lua_State *param_1)

{
  int iVar1;
  ControlButton *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x450);
    cocos2d::extension::ControlButton::ControlButton(this);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.ControlButton");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012e482b,
               iVar1,0);
  }
  return iVar1 == 0;
}

