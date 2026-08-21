
/* cocos2d::BillBoard::create(cocos2d::BillBoard::Mode) */

BillBoard * cocos2d::BillBoard::create(undefined4 param_1)

{
  BillBoard *this;
  ulong uVar1;
  
  this = operator_new(0x5c0,(nothrow_t *)&std::nothrow);
  if (this != (BillBoard *)0x0) {
    BillBoard(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (BillBoard *)0x0;
    }
    else {
      *(undefined4 *)(this + 0x5b0) = param_1;
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

