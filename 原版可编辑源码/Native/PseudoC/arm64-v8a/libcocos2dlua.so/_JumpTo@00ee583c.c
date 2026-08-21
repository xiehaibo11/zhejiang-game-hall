
/* non-virtual thunk to cocos2d::JumpTo::~JumpTo() */

void __thiscall cocos2d::JumpTo::~JumpTo(JumpTo *this)

{
  Action::~Action((Action *)(this + -0x28));
                    /* try { // try from 00ee5858 to 00fe5867 has its CatchHandler @ 00ee588c */
  operator_delete((Action *)(this + -0x28));
  return;
}

