
/* cocos2d::__Bool::clone() const */

Ref * __thiscall cocos2d::__Bool::clone(__Bool *this)

{
  __Bool _Var1;
  Ref *this_00;
  
  _Var1 = this[0x30];
  this_00 = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this_00 != (Ref *)0x0) {
    Ref::Ref(this_00);
    *(__Bool *)(this_00 + 0x30) = _Var1;
    *(undefined ***)this_00 = &PTR____Bool_016985e8;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_01698618;
    Ref::autorelease(this_00);
  }
  return this_00;
}

