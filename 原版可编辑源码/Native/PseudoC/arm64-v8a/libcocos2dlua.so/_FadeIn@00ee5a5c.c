
/* cocos2d::FadeIn::~FadeIn() */

void __thiscall cocos2d::FadeIn::~FadeIn(FadeIn *this)

{
                    /* try { // try from 00ee5a6c to 00fe5b2b has its CatchHandler @ 00ee58d4 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

