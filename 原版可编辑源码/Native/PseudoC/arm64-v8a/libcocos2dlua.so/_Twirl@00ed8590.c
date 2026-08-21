
/* non-virtual thunk to cocos2d::Twirl::~Twirl() */

void __thiscall cocos2d::Twirl::~Twirl(Twirl *this)

{
                    /* try { // try from 00ed8598 to 00fd859f has its CatchHandler @ 00ed85c8 */
                    /* try { // try from 00ed85a0 to 00fd85a7 has its CatchHandler @ 00ed85c4 */
  Action::~Action((Action *)(this + -0x28));
                    /* try { // try from 00ed85a8 to 00fd85af has its CatchHandler @ 00ed85c0 */
                    /* try { // try from 00ed85b0 to 00fd8753 has its CatchHandler @ 00ed788c */
  operator_delete((Action *)(this + -0x28));
  return;
}

