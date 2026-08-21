
/* cocos2d::ui::LoadingBar::createInstance() */

LoadingBar * cocos2d::ui::LoadingBar::createInstance(void)

{
  LoadingBar *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00dca15c with catch @ 00dca3b8 */
                    /* catch() { ... } // from try @ 00dca2b0 with catch @ 00dca3bc */
  this = operator_new(0x560,(nothrow_t *)&std::nothrow);
  if (this != (LoadingBar *)0x0) {
                    /* catch() { ... } // from try @ 00dca0ec with catch @ 00dca3dc */
    LoadingBar(this);
                    /* catch() { ... } // from try @ 00dc9e30 with catch @ 00dca3e0 */
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
                    /* catch() { ... } // from try @ 00dc9e1c with catch @ 00dca3f0 */
    if ((uVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00dca1a4 with catch @ 00dca404 */
      (**(code **)(*(long *)this + 8))(this);
      this = (LoadingBar *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00dca190 with catch @ 00dca3f4 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

