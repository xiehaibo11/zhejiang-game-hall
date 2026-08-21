
/* non-virtual thunk to cocos2d::Label::~Label() */

void __thiscall cocos2d::Label::~Label(Label *this)

{
                    /* try { // try from 00f0a8b4 to 0100a90b has its CatchHandler @ 00f0a874 */
  ~Label(this + -0x300);
  operator_delete(this + -0x300);
  return;
}

