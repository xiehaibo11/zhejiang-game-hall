
/* lua_cocos2dx_SkewBy_constructor(lua_State*) */

bool lua_cocos2dx_SkewBy_constructor(lua_State *param_1)

{
  int iVar1;
  SkewTo *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x78);
    cocos2d::SkewTo::SkewTo(this);
    *(undefined ***)this = &PTR__Action_016f8cc8;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f8d28;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.SkewBy");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.SkewBy:SkewBy",iVar1,0);
  }
  return iVar1 == 0;
}

