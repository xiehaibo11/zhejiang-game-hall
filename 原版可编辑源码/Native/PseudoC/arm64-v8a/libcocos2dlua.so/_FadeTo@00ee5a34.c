
/* non-virtual thunk to cocos2d::FadeTo::~FadeTo() */

void __thiscall cocos2d::FadeTo::~FadeTo(FadeTo *this)

{
                    /* try { // try from 00ee5a3c to 00fe5a47 has its CatchHandler @ 00ee5b94 */
                    /* try { // try from 00ee5a48 to 00fe5a6b has its CatchHandler @ 00ee5b44 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

