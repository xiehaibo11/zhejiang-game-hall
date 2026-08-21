
/* non-virtual thunk to cocos2d::Blink::~Blink() */

void __thiscall cocos2d::Blink::~Blink(Blink *this)

{
  Action::~Action((Action *)(this + -0x28));
                    /* try { // try from 00ee59f8 to 00fe59ff has its CatchHandler @ 00ee5b34 */
                    /* try { // try from 00ee5a00 to 00fe5a23 has its CatchHandler @ 00ee58d4 */
  operator_delete((Action *)(this + -0x28));
  return;
}

