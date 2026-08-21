
/* cocos2d::createImage(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

Image * cocos2d::createImage(basic_string *param_1)

{
  ulong uVar1;
  long lVar2;
  basic_string bVar3;
  long *plVar4;
  Image *this;
  basic_string local_50 [8];
  ulong local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x50))(local_50,plVar4,param_1);
  bVar3 = local_50[0];
  uVar1 = (ulong)((byte)local_50[0] >> 1);
  if (((byte)local_50[0] & 1) != 0) {
    uVar1 = local_48;
  }
  if (uVar1 == 0) {
    this = (Image *)0x0;
  }
  else {
    this = operator_new(0x170,(nothrow_t *)&std::nothrow);
    if (this != (Image *)0x0) {
      Image::Image(this);
      Image::initWithImageFile(this,local_50);
      bVar3 = local_50[0];
    }
  }
  if (((byte)bVar3 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

