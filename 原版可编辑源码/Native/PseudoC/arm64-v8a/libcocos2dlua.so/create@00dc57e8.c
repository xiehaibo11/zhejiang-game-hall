
/* cocos2d::ui::RadioButton::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

AbstractCheckButton *
cocos2d::ui::RadioButton::create(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  AbstractCheckButton *this;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_90 [16];
  void *local_80;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dc5818 to 00ec5827 has its CatchHandler @ 00dc5a50 */
  this = operator_new(0x600,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x5e0) = 0;
                    /* try { // try from 00dc585c to 00ec586b has its CatchHandler @ 00dc5aa8 */
    *(undefined ***)this = &PTR__RadioButton_016dd648;
    *(undefined ***)(this + 0x318) = &PTR__RadioButton_016ddd20;
    *(undefined8 *)(this + 0x5f0) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,"");
                    /* try { // try from 00dc5870 to 00ec587f has its CatchHandler @ 00dc5aac */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_90,"");
    uVar2 = (**(code **)(*(long *)this + 0x688))
                      (this,param_1,local_60,param_2,local_78,local_90,param_3);
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
    }
    if (((byte)local_60[0] & 1) != 0) {
                    /* try { // try from 00dc58fc to 00ec5903 has its CatchHandler @ 00dc5a6c */
      operator_delete(local_50);
    }
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00dc5938 to 00ec599f has its CatchHandler @ 00dc5a80 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

