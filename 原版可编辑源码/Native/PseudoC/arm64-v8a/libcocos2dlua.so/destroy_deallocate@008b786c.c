
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void
   (cocos2d::EventCustom*)>::destroy_deallocate() */

void __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::destroy_deallocate
          (__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
           *this)

{
                    /* try { // try from 008b788c to 009b78a3 has its CatchHandler @ 008b78f4 */
  if ((*(long *)(this + 8) != 0) && (*(uint *)(this + 0x10) < 0xfffffffe)) {
    luaL_unref(*(long *)(this + 8),0xffffd8f0);
  }
                    /* try { // try from 008b78a4 to 009b790f has its CatchHandler @ 008b7834 */
  operator_delete(this);
  return;
}

