
/* cocos2d::LuaEngine::init() */

undefined8 __thiscall cocos2d::LuaEngine::init(LuaEngine *this)

{
  Ref *this_00;
  
  this_00 = (Ref *)LuaStack::create();
  *(Ref **)(this + 8) = this_00;
  Ref::retain(this_00);
  return 1;
}

