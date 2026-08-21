
/* lua_cocos2dx_Menu_constructor(lua_State*) */

bool lua_cocos2dx_Menu_constructor(lua_State *param_1)

{
  int iVar1;
  Layer *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x340);
    cocos2d::Layer::Layer(this);
    *(undefined ***)this = &PTR__Menu_01703d68;
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    cocos2d::Ref::autorelease((Ref *)this);
    toluafix_pushusertype_ccobject(param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Menu")
    ;
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Menu:Menu",
               iVar1,0);
  }
  return iVar1 == 0;
}

