
/* cocos2d::LuaEngine::~LuaEngine() */

void __thiscall cocos2d::LuaEngine::~LuaEngine(LuaEngine *this)

{
  *(undefined ***)this = &PTR__LuaEngine_01698328;
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  _defaultEngine = 0;
  operator_delete(this);
  return;
}

