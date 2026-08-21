
/* lua_cocos2dx_MoveBy_constructor(lua_State*) */

bool lua_cocos2dx_MoveBy_constructor(lua_State *param_1)

{
  int iVar1;
  Action *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x80);
    cocos2d::Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    this[0x56] = (Action)0x0;
    *(undefined ***)this = &PTR__Action_016f8b70;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8bd0;
    cocos2d::Vec3::Vec3((Vec3 *)(this + 0x58));
    cocos2d::Vec3::Vec3((Vec3 *)(this + 100));
    cocos2d::Vec3::Vec3((Vec3 *)(this + 0x70));
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.MoveBy");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.MoveBy:MoveBy",iVar1,0);
  }
  return iVar1 == 0;
}

