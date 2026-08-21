
/* cocos2d::ui::EditBox::setDelegate(cocos2d::ui::EditBoxDelegate*) */

void __thiscall cocos2d::ui::EditBox::setDelegate(EditBox *this,EditBoxDelegate *param_1)

{
  *(EditBoxDelegate **)(this + 0x5c0) = param_1;
  if (*(long *)(this + 0x5b8) != 0) {
    *(EditBoxDelegate **)(*(long *)(this + 0x5b8) + 8) = param_1;
  }
  return;
}

