
/* std::__ndk1::__function::__func<void (*)(cocos2d::CustomEvent const&),
   std::__ndk1::allocator<void (*)(cocos2d::CustomEvent const&)>, void (cocos2d::CustomEvent
   const&)>::target(std::type_info const&) const */

__func<void(*)(cocos2d::CustomEvent_const&),std::__ndk1::allocator<void(*)(cocos2d::CustomEvent_const&)>,void(cocos2d::CustomEvent_const&)>
* __thiscall
std::__ndk1::__function::
__func<void(*)(cocos2d::CustomEvent_const&),std::__ndk1::allocator<void(*)(cocos2d::CustomEvent_const&)>,void(cocos2d::CustomEvent_const&)>
::target(__func<void(*)(cocos2d::CustomEvent_const&),std::__ndk1::allocator<void(*)(cocos2d::CustomEvent_const&)>,void(cocos2d::CustomEvent_const&)>
         *this,type_info *param_1)

{
  __func<void(*)(cocos2d::CustomEvent_const&),std::__ndk1::allocator<void(*)(cocos2d::CustomEvent_const&)>,void(cocos2d::CustomEvent_const&)>
  *p_Var1;
  
                    /* try { // try from 00a6ed04 to 00b6ed47 has its CatchHandler @ 00a6ee10 */
  p_Var1 = this + 8;
  if (*(char **)(param_1 + 8) != "PFvRKN7cocos2d11CustomEventEE") {
    p_Var1 = (__func<void(*)(cocos2d::CustomEvent_const&),std::__ndk1::allocator<void(*)(cocos2d::CustomEvent_const&)>,void(cocos2d::CustomEvent_const&)>
              *)0x0;
  }
  return p_Var1;
}

