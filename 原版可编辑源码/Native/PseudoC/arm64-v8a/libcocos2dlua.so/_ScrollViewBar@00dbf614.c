
/* cocos2d::ui::ScrollViewBar::~ScrollViewBar() */

void __thiscall cocos2d::ui::ScrollViewBar::~ScrollViewBar(ScrollViewBar *this)

{
  ProtectedNode::~ProtectedNode((ProtectedNode *)this);
  operator_delete(this);
  return;
}

