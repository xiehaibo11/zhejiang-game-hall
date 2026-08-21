
/* cocos2d::NavMeshObstacle::create(float, float) */

Component * cocos2d::NavMeshObstacle::create(float param_1,float param_2)

{
  int iVar1;
  Component *this;
  
  this = operator_new(0x68,(nothrow_t *)&std::nothrow);
  if (this != (Component *)0x0) {
    Component::Component(this);
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined ***)this = &PTR__NavMeshObstacle_01727198;
                    /* catch() { ... } // from try @ 0101e548 with catch @ 0101e510 */
    *(float *)(this + 0x50) = param_1;
    *(float *)(this + 0x54) = param_2;
    *(undefined8 *)(this + 0x58) = 0xffffffff00000003;
    if (((DAT_01792dd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01792dd0), iVar1 != 0)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &DAT_01792db8,"___NavMeshObstacleComponent___");
      __cxa_atexit(std::__ndk1::
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                   ~basic_string,&DAT_01792db8,&PTR_LOOP_016979c0);
      __cxa_guard_release(&DAT_01792dd0);
    }
    (**(code **)(*(long *)this + 0x20))(this,&DAT_01792db8);
                    /* try { // try from 0101e540 to 0111e547 has its CatchHandler @ 0101e5d4 */
    Ref::autorelease((Ref *)this);
  }
                    /* try { // try from 0101e548 to 0111e5ef has its CatchHandler @ 0101e510 */
  return this;
}

