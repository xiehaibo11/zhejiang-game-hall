
/* std::__ndk1::__function::__func<LuaCustomEventListener,
   std::__ndk1::allocator<LuaCustomEventListener>, void
   (cocos2d::EventCustom*)>::target(std::type_info const&) const */

__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
* __thiscall
std::__ndk1::__function::
__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
::target(__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
         *this,type_info *param_1)

{
  __func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
  *p_Var1;
  
                    /* try { // try from 008b7910 to 009b7967 has its CatchHandler @ 008b7910
                       catch() { ... } // from try @ 008b7910 with catch @ 008b7910
                       catch() { ... } // from try @ 008b7980 with catch @ 008b7910 */
  p_Var1 = this + 8;
  if (*(char **)(param_1 + 8) != "22LuaCustomEventListener") {
    p_Var1 = (__func<LuaCustomEventListener,std::__ndk1::allocator<LuaCustomEventListener>,void(cocos2d::EventCustom*)>
              *)0x0;
  }
  return p_Var1;
}

