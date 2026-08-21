
/* cocos2d::FlipY::~FlipY() */

void __thiscall cocos2d::FlipY::~FlipY(FlipY *this)

{
                    /* try { // try from 00edb9fc to 00fdba07 has its CatchHandler @ 00edba48 */
  Action::~Action((Action *)this);
                    /* try { // try from 00edba08 to 00fdba13 has its CatchHandler @ 00edba44 */
  operator_delete(this);
  return;
}

