
/* cocos2d::extension::ScrollView::setViewSize(cocos2d::Size) */

void __thiscall cocos2d::extension::ScrollView::setViewSize(ScrollView *this,Size *param_2)

{
  Size::operator=((Size *)(this + 0x390),param_2);
  Node::setContentSize((Node *)this,param_2);
  return;
}

