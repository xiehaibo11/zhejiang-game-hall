
/* cocos2d::JumpTo::~JumpTo() */

void __thiscall cocos2d::JumpTo::~JumpTo(JumpTo *this)

{
  Action::~Action((Action *)this);
                    /* try { // try from 00ee5824 to 00fe5833 has its CatchHandler @ 00ee58ac */
  operator_delete(this);
  return;
}

