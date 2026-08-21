
/* cocos2d::__Double::clone() const */

Ref * __thiscall cocos2d::__Double::clone(__Double *this)

{
  Ref *this_00;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(this + 0x30);
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined ***)this_00 = &PTR____Double_01698688;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016986b8;
    *(undefined8 *)(this_00 + 0x30) = uVar1;
    Ref::autorelease(this_00);
  }
  return this_00;
}

