
/* cocos2d::Configuration::Configuration() */

void __thiscall cocos2d::Configuration::Configuration(Configuration *this)

{
  long lVar1;
  EventCustom *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x50) = 0x100000001;
  *(undefined8 *)(this + 0x48) = 0x100000001;
  *(undefined ***)this = &PTR__Configuration_01722360;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x33) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x78) = 0x3f800000;
  this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this_00 == (EventCustom *)0x0) {
    *(undefined8 *)(this + 0x80) = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_60,CONFIG_FILE_LOADED);
    EventCustom::EventCustom(this_00,(basic_string *)local_60);
    *(EventCustom **)(this + 0x80) = this_00;
    if (((byte)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

