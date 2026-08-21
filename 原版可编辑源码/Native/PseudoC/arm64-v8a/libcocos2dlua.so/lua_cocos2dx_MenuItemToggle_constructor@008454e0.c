
/* lua_cocos2dx_MenuItemToggle_constructor(lua_State*) */

bool lua_cocos2dx_MenuItemToggle_constructor(lua_State *param_1)

{
  int iVar1;
  Node *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x360);
    cocos2d::Node::Node(this);
    *(undefined2 *)(this + 0x2f8) = 0;
    *(undefined8 *)(this + 800) = 0;
    *(undefined4 *)(this + 0x330) = 0;
    *(undefined ***)this = &PTR__MenuItemToggle_017060c8;
    *(undefined8 *)(this + 0x340) = 0;
    *(undefined8 *)(this + 0x338) = 0;
    *(undefined8 *)(this + 0x350) = 0;
    *(undefined8 *)(this + 0x348) = 0;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.MenuItemToggle");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MenuItemToggle:MenuItemToggle",iVar1,0);
  }
  return iVar1 == 0;
}

