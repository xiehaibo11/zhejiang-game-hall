
/* cocos2d::Physics3DComponent::getPhysics3DComponentName() */

undefined * cocos2d::Physics3DComponent::getPhysics3DComponentName(void)

{
  int iVar1;
  
                    /* try { // try from 01010e98 to 01110efb has its CatchHandler @ 01011064 */
  if (((DAT_01792cc8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792cc8), iVar1 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01792cb0,"___Physics3DComponent___");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01792cb0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01792cc8);
  }
  return &DAT_01792cb0;
}

