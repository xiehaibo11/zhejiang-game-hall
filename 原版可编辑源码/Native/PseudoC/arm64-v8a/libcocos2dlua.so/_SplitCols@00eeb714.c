
/* cocos2d::SplitCols::~SplitCols() */

void __thiscall cocos2d::SplitCols::~SplitCols(SplitCols *this)

{
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

