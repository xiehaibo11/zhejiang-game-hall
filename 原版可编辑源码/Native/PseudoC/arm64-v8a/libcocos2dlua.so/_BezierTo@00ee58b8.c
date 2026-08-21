
/* cocos2d::BezierTo::~BezierTo() */

void __thiscall cocos2d::BezierTo::~BezierTo(BezierTo *this)

{
  Action::~Action((Action *)this);
                    /* try { // try from 00ee58d4 to 00fe5987 has its CatchHandler @ 00ee58d4
                       catch() { ... } // from try @ 00ee58d4 with catch @ 00ee58d4
                       catch() { ... } // from try @ 00ee5a00 with catch @ 00ee58d4
                       catch() { ... } // from try @ 00ee5a6c with catch @ 00ee58d4
                       catch() { ... } // from try @ 00ee5b34 with catch @ 00ee58d4 */
  operator_delete(this);
  return;
}

