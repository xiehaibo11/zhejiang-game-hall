
/* non-virtual thunk to cocos2d::TintTo::~TintTo() */

void __thiscall cocos2d::TintTo::~TintTo(TintTo *this)

{
                    /* catch() { ... } // from try @ 00ee59f8 with catch @ 00ee5b34
                       catch() { ... } // from try @ 00ee5b2c with catch @ 00ee5b34
                       try { // try from 00ee5b34 to 00fe5c1f has its CatchHandler @ 00ee58d4 */
                    /* catch() { ... } // from try @ 00ee5a48 with catch @ 00ee5b44 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

