
/* cocos2d::LuaStack::attach(lua_State*) */

Ref * cocos2d::LuaStack::attach(lua_State *param_1)

{
  Ref *this;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  Ref::Ref(this);
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (Ref)0x0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__LuaStack_01698498;
  *(lua_State **)(this + 0x28) = param_1;
  Ref::autorelease(this);
  return this;
}

