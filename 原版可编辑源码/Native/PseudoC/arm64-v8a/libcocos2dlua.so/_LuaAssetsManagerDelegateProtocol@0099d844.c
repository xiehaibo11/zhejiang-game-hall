
/* LuaAssetsManagerDelegateProtocol::~LuaAssetsManagerDelegateProtocol() */

void __thiscall
LuaAssetsManagerDelegateProtocol::~LuaAssetsManagerDelegateProtocol
          (LuaAssetsManagerDelegateProtocol *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

