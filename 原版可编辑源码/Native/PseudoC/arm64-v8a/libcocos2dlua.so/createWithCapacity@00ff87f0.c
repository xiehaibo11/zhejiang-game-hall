
/* cocos2d::__Array::createWithCapacity(long) */

Ref * cocos2d::__Array::createWithCapacity(long param_1)

{
  Ref *this;
  undefined8 uVar1;
  
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined ***)this = &PTR____Array_01724b68;
    *(undefined ***)(this + 0x28) = &PTR_clone_01724b98;
    *(undefined8 *)(this + 0x30) = 0;
    uVar1 = ccArrayNew(param_1);
    *(undefined8 *)(this + 0x30) = uVar1;
    Ref::autorelease(this);
  }
  return this;
}

