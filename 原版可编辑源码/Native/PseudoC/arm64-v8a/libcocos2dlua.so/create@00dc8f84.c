
/* cocos2d::ui::TextAtlas::create() */

TextAtlas * cocos2d::ui::TextAtlas::create(void)

{
  TextAtlas *this;
  ulong uVar1;
  
                    /* try { // try from 00dc8f8c to 00ec90a3 has its CatchHandler @ 00dc8b4c */
  this = operator_new(0x550,(nothrow_t *)&std::nothrow);
  if (this != (TextAtlas *)0x0) {
    TextAtlas(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (TextAtlas *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00dc8d90 with catch @ 00dc8fec */
                    /* catch() { ... } // from try @ 00dc8bb0 with catch @ 00dc8ff0 */
  return this;
}

