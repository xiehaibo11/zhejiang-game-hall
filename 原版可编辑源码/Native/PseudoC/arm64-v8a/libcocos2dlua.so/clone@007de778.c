
/* cocos2d::__Integer::clone() const */

Ref * __thiscall cocos2d::__Integer::clone(__Integer *this)

{
  undefined4 uVar1;
  Ref *this_00;
  
  uVar1 = *(undefined4 *)(this + 0x30);
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x30) = uVar1;
    *(undefined ***)this_00 = &PTR____Integer_01698788;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016987b8;
  }
  Ref::autorelease(this_00);
  return this_00;
}

