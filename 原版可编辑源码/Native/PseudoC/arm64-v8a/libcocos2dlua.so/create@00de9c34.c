
/* cocos2d::ui::EditBox::create(cocos2d::Size const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

EditBox * cocos2d::ui::EditBox::create(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  EditBox *this;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00de9c6c with catch @ 00de9c34 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00de9c64 to 00ee9c6b has its CatchHandler @ 00de9c98 */
                    /* try { // try from 00de9c6c to 00ee9cb3 has its CatchHandler @ 00de9c34 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,"");
  this = operator_new(0x5d0,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00de9c64 with catch @ 00de9c98 */
  if (this != (EditBox *)0x0) {
    EditBox(this);
    uVar2 = initWithSizeAndTexture(this,param_1,param_2,local_60,local_78,param_3);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (EditBox *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

