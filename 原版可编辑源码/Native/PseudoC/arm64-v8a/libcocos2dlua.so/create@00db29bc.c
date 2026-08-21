
/* cocos2d::ui::LinearLayoutParameter::create() */

Ref * cocos2d::ui::LinearLayoutParameter::create(void)

{
  Ref *this;
  
  this = operator_new(0x40,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00db29dc to 00eb29e3 has its CatchHandler @ 00db3018 */
  if (this != (Ref *)0x0) {
                    /* try { // try from 00db29e4 to 00eb29ef has its CatchHandler @ 00db3020 */
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
                    /* try { // try from 00db29f0 to 00eb2a03 has its CatchHandler @ 00db301c */
    *(undefined8 *)(this + 0x24) = 0;
                    /* try { // try from 00db2a04 to 00eb2a0f has its CatchHandler @ 00db304c */
    *(undefined8 *)(this + 0x34) = 1;
    *(undefined ***)this = &PTR__Ref_016d99d0;
    Ref::autorelease(this);
  }
  return this;
}

