
/* non-virtual thunk to cocos2d::Liquid::~Liquid() */

void __thiscall cocos2d::Liquid::~Liquid(Liquid *this)

{
                    /* try { // try from 00ed84e8 to 00fd84ef has its CatchHandler @ 00ed85e4 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

