
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void (cocos2d::EventCustom*)>::~__func() */

void __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::~__func(__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
          *this)

{
  *(undefined ***)this = &PTR____func_0169a7a0;
                    /* try { // try from 008b76d4 to 009b76eb has its CatchHandler @ 008b773c */
  if ((*(long *)(this + 8) != 0) && (*(uint *)(this + 0x10) < 0xfffffffe)) {
    luaL_unref(*(long *)(this + 8),0xffffd8f0);
  }
  return;
}

