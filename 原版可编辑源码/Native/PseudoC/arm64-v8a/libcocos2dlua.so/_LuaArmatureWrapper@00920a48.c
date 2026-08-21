
/* LuaArmatureWrapper::~LuaArmatureWrapper() */

void __thiscall LuaArmatureWrapper::~LuaArmatureWrapper(LuaArmatureWrapper *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

