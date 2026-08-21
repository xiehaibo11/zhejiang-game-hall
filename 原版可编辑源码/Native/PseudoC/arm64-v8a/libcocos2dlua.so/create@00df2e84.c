
/* cocos2d::ui::TabHeader::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, cocos2d::ui::Widget::TextureResType) */

AbstractCheckButton *
cocos2d::ui::TabHeader::create
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  AbstractCheckButton *this;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x620,(nothrow_t *)&std::nothrow);
  if (this != (AbstractCheckButton *)0x0) {
    AbstractCheckButton::AbstractCheckButton(this);
    *(undefined8 *)(this + 0x5c0) = 0;
    *(undefined8 *)(this + 0x5d0) = 0;
    *(undefined8 *)(this + 0x600) = 0;
    *(undefined4 *)(this + 0x5c8) = 0x41400000;
    *(undefined ***)this = &PTR__TabHeader_016e6c50;
    *(undefined ***)(this + 0x318) = &PTR__TabHeader_016e7328;
    *(undefined4 *)(this + 0x610) = 0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_88,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_a0,"");
    uVar2 = (**(code **)(*(long *)this + 0x688))
                      (this,param_2,local_70,param_3,local_88,local_a0,param_4);
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
    if (((byte)local_88[0] & 1) != 0) {
      operator_delete(local_78);
    }
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (AbstractCheckButton *)0x0;
    }
    else {
      (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
      (**(code **)(**(long **)(this + 0x5c0) + 0x588))(*(long **)(this + 0x5c0),param_1);
      *(undefined8 *)(this + 0x78) = 0x3f000000;
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

