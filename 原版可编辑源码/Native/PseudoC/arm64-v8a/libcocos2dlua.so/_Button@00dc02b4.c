
/* non-virtual thunk to cocos2d::ui::Button::~Button() */

void __thiscall cocos2d::ui::Button::~Button(Button *this)

{
                    /* try { // try from 00dc02b8 to 00ec02c3 has its CatchHandler @ 00dc07cc */
  ~Button(this + -0x318);
                    /* try { // try from 00dc02cc to 00ec02ef has its CatchHandler @ 00dc07c8 */
  operator_delete(this + -0x318);
  return;
}

