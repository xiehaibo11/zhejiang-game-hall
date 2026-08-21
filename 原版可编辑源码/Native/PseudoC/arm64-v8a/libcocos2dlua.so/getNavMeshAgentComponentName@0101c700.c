
/* cocos2d::NavMeshAgent::getNavMeshAgentComponentName() */

undefined * cocos2d::NavMeshAgent::getNavMeshAgentComponentName(void)

{
  int iVar1;
  
  if (((DAT_01792db0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792db0), iVar1 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01792d98,"___NavMeshAgentComponent___");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01792d98,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01792db0);
  }
  return &DAT_01792d98;
}

