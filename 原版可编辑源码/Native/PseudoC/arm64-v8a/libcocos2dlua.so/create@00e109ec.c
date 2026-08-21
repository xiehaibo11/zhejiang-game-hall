
/* cocos2d::extension::ControlSlider::create(char const*, char const*, char const*) */

Control * cocos2d::extension::ControlSlider::create(char *param_1,char *param_2,char *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Control *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_1);
  uVar2 = Sprite::create((basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_2);
  uVar3 = Sprite::create((basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
                    /* try { // try from 00e10a68 to 00f10acb has its CatchHandler @ 00e10a68
                       catch() { ... } // from try @ 00e10a68 with catch @ 00e10a68
                       catch() { ... } // from try @ 00e10ad4 with catch @ 00e10a68 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_3);
  uVar4 = Sprite::create((basic_string *)local_60);
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  this = operator_new(0x390,(nothrow_t *)&std::nothrow);
  if (this != (Control *)0x0) {
    Control::Control(this);
    *(undefined4 *)(this + 0x368) = 0;
    *(undefined ***)this = &PTR__ControlSlider_016eb010;
                    /* try { // try from 00e10acc to 00f10ad3 has its CatchHandler @ 00e10b50 */
    *(undefined8 *)(this + 0x360) = 0;
    *(undefined8 *)(this + 0x358) = 0;
    *(undefined8 *)(this + 0x378) = 0;
    *(undefined8 *)(this + 0x370) = 0;
    *(undefined8 *)(this + 0x388) = 0;
    *(undefined8 *)(this + 0x380) = 0;
  }
                    /* try { // try from 00e10ad4 to 00f10b7f has its CatchHandler @ 00e10a68 */
  (**(code **)(*(long *)this + 0x6b8))(this,uVar2,uVar3,uVar4);
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

