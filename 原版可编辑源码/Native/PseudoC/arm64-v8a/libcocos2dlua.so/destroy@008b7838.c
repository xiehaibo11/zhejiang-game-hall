
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void (cocos2d::EventCustom*)>::destroy() */

void __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::destroy(__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
          *this)

{
  if ((*(long *)(this + 8) != 0) && (*(uint *)(this + 0x10) < 0xfffffffe)) {
    luaL_unref(*(long *)(this + 8),0xffffd8f0);
  }
  return;
}

