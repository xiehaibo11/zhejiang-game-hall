
/* cocos2d::BillBoard::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::BillBoard::Mode) */

BillBoard * cocos2d::BillBoard::create(undefined8 param_1,undefined4 param_2)

{
  BillBoard *this;
  ulong uVar1;
  
  this = operator_new(0x5c0,(nothrow_t *)&std::nothrow);
  if (this != (BillBoard *)0x0) {
    BillBoard(this);
    uVar1 = (**(code **)(*(long *)this + 0x620))(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (BillBoard *)0x0;
    }
    else {
      *(undefined4 *)(this + 0x5b0) = param_2;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

