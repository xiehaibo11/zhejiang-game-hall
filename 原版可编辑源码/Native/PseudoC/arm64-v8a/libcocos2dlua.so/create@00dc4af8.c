
/* cocos2d::ui::CheckBox::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

AbstractCheckButton *
cocos2d::ui::CheckBox::create(undefined8 param_1,undefined8 param_2,undefined4 param_3)

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
  
                    /* try { // try from 00dc4b04 to 00ec4b17 has its CatchHandler @ 00dc5268 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dc4b18 to 00ec4b2f has its CatchHandler @ 00dc5264 */
  this = operator_new(0x610,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
                    /* try { // try from 00dc4b48 to 00ec4b57 has its CatchHandler @ 00dc5224 */
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined8 *)(this + 0x5c0) = 0;
                    /* try { // try from 00dc4b70 to 00ec4b7b has its CatchHandler @ 00dc5250 */
    *(undefined8 *)(this + 0x5d0) = 0;
    *(undefined ***)this = &PTR__CheckBox_016dcf30;
    *(undefined ***)(this + 0x318) = &PTR__CheckBox_016dd608;
                    /* try { // try from 00dc4b7c to 00ec4b87 has its CatchHandler @ 00dc524c */
    *(undefined8 *)(this + 0x5c8) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,"");
                    /* try { // try from 00dc4b88 to 00ec4b8f has its CatchHandler @ 00dc5248 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_78,"");
                    /* try { // try from 00dc4b94 to 00ec4ba3 has its CatchHandler @ 00dc5244 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_90,"");
    uVar2 = (**(code **)(*(long *)this + 0x688))
                      (this,param_1,local_60,param_2,local_78,local_90,param_3);
    if (((byte)local_90[0] & 1) != 0) {
      operator_delete(local_80);
    }
    if (((byte)local_78[0] & 1) != 0) {
      operator_delete(local_68);
                    /* try { // try from 00dc4c0c to 00ec4c27 has its CatchHandler @ 00dc52c4 */
    }
    if (((byte)local_60[0] & 1) != 0) {
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
                    /* try { // try from 00dc4c38 to 00ec4c3f has its CatchHandler @ 00dc52cc */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00dc4c5c to 00ec4c77 has its CatchHandler @ 00dc5280 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

