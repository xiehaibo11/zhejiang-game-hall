
/* non-virtual thunk to cocos2d::Hide::~Hide() */

void __thiscall cocos2d::Hide::~Hide(Hide *this)

{
                    /* try { // try from 00edb8c8 to 00fdb8d3 has its CatchHandler @ 00edba1c */
                    /* try { // try from 00edb8d4 to 00fdb9fb has its CatchHandler @ 00edb6fc */
  Action::~Action((Action *)(this + -0x28));
  operator_delete((Action *)(this + -0x28));
  return;
}

