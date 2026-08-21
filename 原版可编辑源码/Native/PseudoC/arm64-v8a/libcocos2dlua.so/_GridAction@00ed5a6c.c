
/* cocos2d::GridAction::~GridAction() */

void __thiscall cocos2d::GridAction::~GridAction(GridAction *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

