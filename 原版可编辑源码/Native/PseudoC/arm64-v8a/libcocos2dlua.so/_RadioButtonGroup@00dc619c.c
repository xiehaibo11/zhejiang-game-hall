
/* cocos2d::ui::RadioButtonGroup::~RadioButtonGroup() */

void __thiscall cocos2d::ui::RadioButtonGroup::~RadioButtonGroup(RadioButtonGroup *this)

{
  ~RadioButtonGroup(this);
                    /* try { // try from 00dc61b8 to 00ec61c7 has its CatchHandler @ 00dc6658 */
  operator_delete(this);
  return;
}

