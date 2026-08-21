
/* cocos2d::Physics3DComponent::init() */

void __thiscall cocos2d::Physics3DComponent::init(Physics3DComponent *this)

{
  int iVar1;
  
  if (((DAT_01792cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792cc8), iVar1 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01792cb0,"___Physics3DComponent___");
                    /* try { // try from 01010fac to 01110fb3 has its CatchHandler @ 01010fb8 */
                    /* try { // try from 01010fb4 to 011110eb has its CatchHandler @ 01010b9c */
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01792cb0,&PTR_LOOP_016979c0);
                    /* catch() { ... } // from try @ 01010c74 with catch @ 01010fb8
                       catch() { ... } // from try @ 01010fac with catch @ 01010fb8 */
    __cxa_guard_release(&DAT_01792cc8);
  }
  (**(code **)(*(long *)this + 0x20))(this,&DAT_01792cb0);
  Component::init();
  return;
}

