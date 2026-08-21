
/* cocos2d::StopGrid::~StopGrid() */

void __thiscall cocos2d::StopGrid::~StopGrid(StopGrid *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

