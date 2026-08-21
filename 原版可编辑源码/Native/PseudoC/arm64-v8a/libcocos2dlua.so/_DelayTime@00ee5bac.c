
/* cocos2d::DelayTime::~DelayTime() */

void __thiscall cocos2d::DelayTime::~DelayTime(DelayTime *this)

{
                    /* catch() { ... } // from try @ 00ee5a30 with catch @ 00ee5bb4 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

