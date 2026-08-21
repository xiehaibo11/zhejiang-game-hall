
/* cocos2d::extension::ControlPotentiometer::create(char const*, char const*, char const*) */

Control * cocos2d::extension::ControlPotentiometer::create
                    (char *param_1,char *param_2,char *param_3)

{
  long lVar1;
  Control *this;
  Sprite *pSVar2;
  Sprite *pSVar3;
  Sprite *pSVar4;
  ProgressTimer *pPVar5;
  ulong uVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* try { // try from 00e0f728 to 00f0f72b has its CatchHandler @ 00e0f738 */
                    /* try { // try from 00e0f72c to 00f0f74b has its CatchHandler @ 00e0f6fc */
                    /* catch() { ... } // from try @ 00e0f728 with catch @ 00e0f738 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x380,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
    Control::Control(this);
    *(undefined4 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x368) = 0;
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined ***)this = &PTR__ControlPotentiometer_016ea1d0;
    *(undefined8 *)(this + 0x370) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,param_1);
    pSVar2 = (Sprite *)Sprite::create((basic_string *)local_60);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
                    /* try { // try from 00e0f7c4 to 00f0f837 has its CatchHandler @ 00e0f7c4
                       catch() { ... } // from try @ 00e0f7c4 with catch @ 00e0f7c4
                       catch() { ... } // from try @ 00e0f87c with catch @ 00e0f7c4
                       catch() { ... } // from try @ 00e0f8dc with catch @ 00e0f7c4
                       catch() { ... } // from try @ 00e0f950 with catch @ 00e0f7c4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,param_3);
    pSVar3 = (Sprite *)Sprite::create((basic_string *)local_60);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,param_2);
    pSVar4 = (Sprite *)Sprite::create((basic_string *)local_60);
    pPVar5 = (ProgressTimer *)ProgressTimer::create(pSVar4);
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
    uVar6 = initWithTrackSprite_ProgressTimer_ThumbSprite
                      ((ControlPotentiometer *)this,pSVar2,pPVar5,pSVar3);
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 00e0f838 to 00f0f84b has its CatchHandler @ 00e0f9c8 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Control *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00e0f84c to 00f0f857 has its CatchHandler @ 00e0f9b4 */
                    /* try { // try from 00e0f858 to 00f0f86f has its CatchHandler @ 00e0f9b8 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00e0f870 to 00f0f87b has its CatchHandler @ 00e0f9a4 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

