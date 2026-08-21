
/* cocos2d::ui::LayoutParameter::create() */

Ref * cocos2d::ui::LayoutParameter::create(void)

{
  Ref *this;
  
                    /* try { // try from 00db286c to 00eb29a7 has its CatchHandler @ 00db286c
                       catch() { ... } // from try @ 00db286c with catch @ 00db286c
                       catch() { ... } // from try @ 00db2f28 with catch @ 00db286c */
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined ***)this = &PTR__Ref_016d99a0;
    *(undefined4 *)(this + 0x34) = 0;
    Ref::autorelease(this);
  }
  return this;
}

