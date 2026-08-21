
/* cocos2d::ui::UICCTextField::onEnter() */

void __thiscall cocos2d::ui::UICCTextField::onEnter(UICCTextField *this)

{
  Node::onEnter((Node *)this);
  *(UICCTextField **)(this + 0x6a8) = this + 0x738;
  return;
}

