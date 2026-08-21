
/* cocos2d::ui::TextBMFont::createCloneInstance() */

TextBMFont * cocos2d::ui::TextBMFont::createCloneInstance(void)

{
  TextBMFont *this;
  ulong uVar1;
  
                    /* try { // try from 00dca15c to 00eca16b has its CatchHandler @ 00dca3b8 */
  this = operator_new(0x530,(nothrow_t *)&std::nothrow);
  if (this != (TextBMFont *)0x0) {
    TextBMFont(this);
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
                    /* try { // try from 00dca190 to 00eca19f has its CatchHandler @ 00dca3f4 */
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00dca1a4 to 00eca1b3 has its CatchHandler @ 00dca404 */
      (**(code **)(*(long *)this + 8))(this);
      this = (TextBMFont *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

