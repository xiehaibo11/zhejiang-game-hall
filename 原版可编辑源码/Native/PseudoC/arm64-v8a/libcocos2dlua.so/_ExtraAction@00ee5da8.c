
/* cocos2d::ExtraAction::~ExtraAction() */

void __thiscall cocos2d::ExtraAction::~ExtraAction(ExtraAction *this)

{
                    /* try { // try from 00ee5da8 to 00fe5e33 has its CatchHandler @ 00ee6014 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

