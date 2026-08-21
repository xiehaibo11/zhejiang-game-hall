
/* cocos2d::RotateBy::~RotateBy() */

void __thiscall cocos2d::RotateBy::~RotateBy(RotateBy *this)

{
                    /* catch() { ... } // from try @ 00ee5458 with catch @ 00ee5580 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

