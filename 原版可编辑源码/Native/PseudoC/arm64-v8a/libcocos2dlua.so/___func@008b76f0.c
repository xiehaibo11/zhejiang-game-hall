
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void (cocos2d::EventCustom*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::~__func(__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
          *this)

{
  *(undefined ***)this = &PTR____func_0169a7a0;
  if ((*(long *)(this + 8) != 0) && (*(uint *)(this + 0x10) < 0xfffffffe)) {
    luaL_unref(*(long *)(this + 8),0xffffd8f0);
  }
  operator_delete(this);
  return;
}

