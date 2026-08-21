
/* non-virtual thunk to cocos2d::Label::~Label() */

void __thiscall cocos2d::Label::~Label(Label *this)

{
  ~Label(this + -0x2f8);
                    /* try { // try from 00f0a8ac to 0100a8b3 has its CatchHandler @ 00f0a8f0 */
  operator_delete(this + -0x2f8);
  return;
}

