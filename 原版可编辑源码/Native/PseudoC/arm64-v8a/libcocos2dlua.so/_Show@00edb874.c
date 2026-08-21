
/* non-virtual thunk to cocos2d::Show::~Show() */

void __thiscall cocos2d::Show::~Show(Show *this)

{
                    /* try { // try from 00edb884 to 00fdb8a7 has its CatchHandler @ 00edba40 */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

