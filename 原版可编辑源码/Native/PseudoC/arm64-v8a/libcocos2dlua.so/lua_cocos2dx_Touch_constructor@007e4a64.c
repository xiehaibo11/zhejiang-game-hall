
/* lua_cocos2dx_Touch_constructor(lua_State*) */

bool lua_cocos2dx_Touch_constructor(lua_State *param_1)

{
  int iVar1;
  Ref *this;
  
  iVar1 = lua_gettop();
  iVar1 = iVar1 + -1;
  if (iVar1 == 0) {
    this = operator_new(0x50);
    cocos2d::Ref::Ref(this);
    *(undefined4 *)(this + 0x24) = 0;
    this[0x28] = (Ref)0x0;
    *(undefined8 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined ***)this = &PTR__Ref_01698ab8;
    *(undefined8 *)(this + 0x44) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    cocos2d::Ref::autorelease(this);
    toluafix_pushusertype_ccobject
              (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Touch");
  }
  else {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n","cc.Touch:Touch",
               iVar1,0);
  }
  return iVar1 == 0;
}

