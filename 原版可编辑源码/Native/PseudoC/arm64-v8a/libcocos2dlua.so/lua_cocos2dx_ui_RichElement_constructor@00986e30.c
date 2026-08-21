
/* lua_cocos2dx_ui_RichElement_constructor(lua_State*) */

bool lua_cocos2dx_ui_RichElement_constructor(lua_State *param_1)

{
  int iVar1;
  Ref *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x30);
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__Ref_0169e108;
    cocos2d::Color3B::Color3B((Color3B *)(this + 0x2c));
    cocos2d::Ref::autorelease(this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.RichElement");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "ccui.RichElement:RichElement",iVar1,0);
  }
  return iVar1 == 0;
}

