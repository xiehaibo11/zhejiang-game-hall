
/* cocos2d::Menu::createWithArray(cocos2d::Vector<cocos2d::MenuItem*> const&) */

Layer * cocos2d::Menu::createWithArray(Vector *param_1)

{
  Layer *this;
  ulong uVar1;
  
                    /* try { // try from 00f1b200 to 0101b213 has its CatchHandler @ 00f1b24c */
                    /* try { // try from 00f1b214 to 0101b333 has its CatchHandler @ 00f1b140 */
  this = operator_new(0x340,(nothrow_t *)&std::nothrow);
  if (this != (Layer *)0x0) {
    Layer::Layer(this);
                    /* catch() { ... } // from try @ 00f1b1d4 with catch @ 00f1b234 */
                    /* catch() { ... } // from try @ 00f1b1c8 with catch @ 00f1b23c */
    *(undefined ***)this = &PTR__Menu_01703d68;
                    /* catch() { ... } // from try @ 00f1b200 with catch @ 00f1b24c */
    *(undefined8 *)(this + 0x330) = 0;
    *(undefined8 *)(this + 0x328) = 0;
    uVar1 = initWithArray((Menu *)this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Layer *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

