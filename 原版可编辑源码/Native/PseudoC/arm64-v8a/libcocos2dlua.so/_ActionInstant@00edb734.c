
/* cocos2d::ActionInstant::~ActionInstant() */

void __thiscall cocos2d::ActionInstant::~ActionInstant(ActionInstant *this)

{
                    /* try { // try from 00edb740 to 00fdb767 has its CatchHandler @ 00edba88 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

