
/* lua_cocos2dx_ui_RichElementCustomNode_constructor(lua_State*) */

bool lua_cocos2dx_ui_RichElementCustomNode_constructor(lua_State *param_1)

{
  int iVar1;
  Ref *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x38);
    cocos2d::Ref::Ref(this);
    *(undefined ***)this = &PTR__Ref_0169e108;
    cocos2d::Color3B::Color3B((Color3B *)(this + 0x2c));
    *(undefined4 *)(this + 0x24) = 2;
    *(undefined ***)this = &PTR__RichElementCustomNode_0169e168;
    cocos2d::Ref::autorelease(this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"ccui.RichElementCustomNode");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",&DAT_012de8c6,
               iVar1,0);
  }
  return iVar1 == 0;
}

