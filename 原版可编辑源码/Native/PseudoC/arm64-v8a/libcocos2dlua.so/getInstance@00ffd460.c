
/* cocos2d::__NotificationCenter::getInstance() */

Ref * cocos2d::__NotificationCenter::getInstance(void)

{
  Ref *this;
  Ref *this_00;
  
  this = DAT_01792c68;
  if ((DAT_01792c68 == (Ref *)0x0) &&
     (this = operator_new(0x38,(nothrow_t *)&std::nothrow), this != (Ref *)0x0)) {
    Ref::Ref(this);
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined ***)this = &PTR____NotificationCenter_01724c88;
                    /* try { // try from 00ffd4b0 to 010fd4cb has its CatchHandler @ 00ffd6d8 */
    this_00 = (Ref *)__Array::createWithCapacity(3);
    *(Ref **)(this + 0x28) = this_00;
    Ref::retain(this_00);
  }
  DAT_01792c68 = this;
  return DAT_01792c68;
}

