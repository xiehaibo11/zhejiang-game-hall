
/* lua_cocos2dx_Follow_constructor(lua_State*) */

bool lua_cocos2dx_Follow_constructor(lua_State *param_1)

{
  int iVar1;
  Action *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x98);
    cocos2d::Action::Action(this);
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined2 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 100) = 0;
    *(undefined8 *)(this + 0x5c) = 0;
    *(undefined8 *)(this + 0x74) = 0;
    *(undefined8 *)(this + 0x6c) = 0;
    *(undefined ***)this = &PTR__Follow_016f5558;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f55b8;
    *(undefined8 *)(this + 0x7c) = 0;
    cocos2d::Rect::Rect((Rect *)(this + 0x84),(Rect *)cocos2d::Rect::ZERO);
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Follow");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.Follow:Follow",iVar1,0);
  }
  return iVar1 == 0;
}

