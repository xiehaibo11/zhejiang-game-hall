
/* cocos2d::ui::LinearLayoutParameter::createCloneInstance() */

Ref * cocos2d::ui::LinearLayoutParameter::createCloneInstance(void)

{
  Ref *this;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00db2a6c to 00eb2a6f has its CatchHandler @ 00db3010 */
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x34) = 1;
    *(undefined ***)this = &PTR__Ref_016d99d0;
    Ref::autorelease(this);
  }
                    /* try { // try from 00db2aac to 00eb2aaf has its CatchHandler @ 00db304c */
  return this;
}

