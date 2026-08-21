
/* cocos2d::FadeTo::~FadeTo() */

void __thiscall cocos2d::FadeTo::~FadeTo(FadeTo *this)

{
  Action::~Action((Action *)this);
                    /* try { // try from 00ee5a24 to 00fe5a2f has its CatchHandler @ 00ee5bd4 */
  operator_delete(this);
  return;
}

