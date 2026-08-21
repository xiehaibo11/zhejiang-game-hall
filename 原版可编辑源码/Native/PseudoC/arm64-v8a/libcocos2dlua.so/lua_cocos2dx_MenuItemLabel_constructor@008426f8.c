
/* lua_cocos2dx_MenuItemLabel_constructor(lua_State*) */

bool lua_cocos2dx_MenuItemLabel_constructor(lua_State *param_1)

{
  int iVar1;
  Node *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x350);
    cocos2d::Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined ***)this = &PTR__MenuItem_01705020;
    cocos2d::Color3B::Color3B((Color3B *)(this + 0x330));
    *(undefined4 *)(this + 0x334) = 0;
    cocos2d::Color3B::Color3B((Color3B *)(this + 0x338));
    *(undefined8 *)(this + 0x340) = 0;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.MenuItemLabel");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemLabel:MenuItemLabel",iVar1,0);
  }
  return iVar1 == 0;
}

