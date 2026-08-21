
/* cocos2d::NavMeshObstacle::initWith(float, float) */

undefined8 __thiscall
cocos2d::NavMeshObstacle::initWith(NavMeshObstacle *this,float param_1,float param_2)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 0101e6ac with catch @ 0101e5f0 */
  *(float *)(this + 0x50) = param_1;
  *(float *)(this + 0x54) = param_2;
                    /* try { // try from 0101e62c to 0111e633 has its CatchHandler @ 0101e708 */
  if (((DAT_01792dd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792dd0), iVar1 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &DAT_01792db8,"___NavMeshObstacleComponent___");
                    /* try { // try from 0101e664 to 0111e6ab has its CatchHandler @ 0101e724 */
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01792db8,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01792dd0);
  }
  (**(code **)(*(long *)this + 0x20))(this,&DAT_01792db8);
  return 1;
}

