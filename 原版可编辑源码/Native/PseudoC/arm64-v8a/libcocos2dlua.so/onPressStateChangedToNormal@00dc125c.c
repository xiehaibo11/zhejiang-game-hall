
/* cocos2d::ui::Button::onPressStateChangedToNormal() */

void __thiscall cocos2d::ui::Button::onPressStateChangedToNormal(Button *this)

{
  undefined8 uVar1;
  
  (**(code **)(**(long **)(this + 0x4f0) + 0x170))(*(long **)(this + 0x4f0),1);
  (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),0);
  (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
  Scale9Sprite::setState(*(Scale9Sprite **)(this + 0x4f0),0);
  if (this[0x561] == (Button)0x0) {
    Node::stopAllActions(*(Node **)(this + 0x4f0));
    (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
    if (*(Node **)(this + 0x508) != (Node *)0x0) {
      Node::stopAllActions(*(Node **)(this + 0x508));
LAB_00dc137c:
      (**(code **)(**(long **)(this + 0x508) + 0x50))(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00dc13b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x508) + 0x60))(0x3f800000);
      return;
    }
  }
  else if (this[0x516] != (Button)0x0) {
    Node::stopAllActions(*(Node **)(this + 0x4f0));
    Node::stopAllActions(*(Node **)(this + 0x4f8));
    (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
    (**(code **)(**(long **)(this + 0x4f8) + 0x80))(0x3f800000);
    if (*(Node **)(this + 0x508) != (Node *)0x0) {
      Node::stopAllActions(*(Node **)(this + 0x508));
      if (this[0x381] != (Button)0x0) {
        uVar1 = ScaleTo::create(0.05,1.0,1.0);
                    /* WARNING: Could not recover jumptable at 0x00dc1350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(this + 0x508) + 0x3a8))(*(long **)(this + 0x508),uVar1);
        return;
      }
      goto LAB_00dc137c;
    }
  }
  return;
}

