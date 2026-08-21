
/* cocos2d::SplitRows::~SplitRows() */

void __thiscall cocos2d::SplitRows::~SplitRows(SplitRows *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

