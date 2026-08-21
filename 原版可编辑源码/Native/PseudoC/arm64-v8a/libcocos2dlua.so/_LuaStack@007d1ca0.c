
/* cocos2d::LuaStack::~LuaStack() */

void __thiscall cocos2d::LuaStack::~LuaStack(LuaStack *this)

{
  *(undefined ***)this = &PTR__LuaStack_01698498;
  if (*(long *)(this + 0x28) != 0) {
    lua_close();
  }
  Ref::~Ref((Ref *)this);
  return;
}

