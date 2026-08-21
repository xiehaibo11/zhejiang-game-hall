
/* covariant return thunk to cocos2d::__Integer::clone() const */

Ref * __thiscall cocos2d::__Integer::clone(__Integer *this)

{
  Ref *pRVar1;
  undefined4 uVar2;
  Ref *this_00;
  
  uVar2 = *(undefined4 *)(this + 8);
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(undefined4 *)(this_00 + 0x30) = uVar2;
    *(undefined ***)this_00 = &PTR____Integer_01698788;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016987b8;
  }
  Ref::autorelease(this_00);
  pRVar1 = (Ref *)0x0;
  if (this_00 != (Ref *)0x0) {
    pRVar1 = this_00 + 0x28;
  }
  return pRVar1;
}

