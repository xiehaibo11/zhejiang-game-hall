
/* cocos2d::Show::~Show() */

void __thiscall cocos2d::Show::~Show(Show *this)

{
                    /* try { // try from 00edb84c to 00fdb85b has its CatchHandler @ 00edba14 */
  Action::~Action((Action *)this);
                    /* try { // try from 00edb85c to 00fdb877 has its CatchHandler @ 00edba44 */
  operator_delete(this);
  return;
}

