
/* cocos2d::extension::ScrollView::removeAllChildrenWithCleanup(bool) */

void __thiscall
cocos2d::extension::ScrollView::removeAllChildrenWithCleanup(ScrollView *this,bool param_1)

{
  (**(code **)(**(long **)(this + 0x340) + 0x2a0))(*(long **)(this + 0x340),param_1);
  Node::removeAllChildrenWithCleanup((Node *)this,param_1);
  return;
}

