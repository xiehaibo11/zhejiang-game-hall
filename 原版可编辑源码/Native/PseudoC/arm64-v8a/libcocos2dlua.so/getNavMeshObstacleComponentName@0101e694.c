
/* cocos2d::NavMeshObstacle::getNavMeshObstacleComponentName() */

undefined * cocos2d::NavMeshObstacle::getNavMeshObstacleComponentName(void)

{
  int iVar1;
  
                    /* try { // try from 0101e6ac to 0111e75f has its CatchHandler @ 0101e5f0 */
  if (((DAT_01792dd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792dd0), iVar1 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01792db8,"___NavMeshObstacleComponent___");
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01792db8,&PTR_LOOP_016979c0);
                    /* catch() { ... } // from try @ 0101e62c with catch @ 0101e708 */
    __cxa_guard_release(&DAT_01792dd0);
  }
  return &DAT_01792db8;
}

