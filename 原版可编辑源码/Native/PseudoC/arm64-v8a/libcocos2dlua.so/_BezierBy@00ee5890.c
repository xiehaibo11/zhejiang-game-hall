
/* non-virtual thunk to cocos2d::BezierBy::~BezierBy() */

void __thiscall cocos2d::BezierBy::~BezierBy(BezierBy *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee5838 with catch @ 00ee5890
                        */
  Action::~Action((Action *)(this + -0x28));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee5824 with catch @ 00ee58ac
                        */
  operator_delete((Action *)(this + -0x28));
  return;
}

