
/* cocos2d::BezierBy::~BezierBy() */

void __thiscall cocos2d::BezierBy::~BezierBy(BezierBy *this)

{
                    /* try { // try from 00ee5868 to 00fe58af has its CatchHandler @ 00ee57f4 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

