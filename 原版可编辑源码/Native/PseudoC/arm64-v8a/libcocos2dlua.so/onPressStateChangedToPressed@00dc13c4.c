
/* cocos2d::ui::Button::onPressStateChangedToPressed() */

void __thiscall cocos2d::ui::Button::onPressStateChangedToPressed(Button *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  Scale9Sprite::setState(*(Scale9Sprite **)(this + 0x4f0),0);
  plVar1 = *(long **)(this + 0x4f0);
  if (this[0x561] == (Button)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,1);
    (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),1);
    (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
    Node::stopAllActions(*(Node **)(this + 0x4f0));
                    /* try { // try from 00dc1530 to 00ec15c3 has its CatchHandler @ 00dc1530
                       catch() { ... } // from try @ 00dc1530 with catch @ 00dc1530
                       catch() { ... } // from try @ 00dc15d4 with catch @ 00dc1530 */
    (**(code **)(**(long **)(this + 0x4f0) + 0x90))
              (*(float *)(this + 0x510) + 1.0,*(float *)(this + 0x510) + 1.0);
    if (*(Node **)(this + 0x508) != (Node *)0x0) {
      Node::stopAllActions(*(Node **)(this + 0x508));
      (**(code **)(**(long **)(this + 0x508) + 0x50))(*(float *)(this + 0x510) + 1.0);
                    /* WARNING: Could not recover jumptable at 0x00dc157c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(this + 0x508) + 0x60))(*(float *)(this + 0x510) + 1.0);
      return;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x170))(plVar1,0);
    (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),1);
    (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
    if (this[0x516] != (Button)0x0) {
      Node::stopAllActions(*(Node **)(this + 0x4f0));
      Node::stopAllActions(*(Node **)(this + 0x4f8));
      uVar2 = ScaleTo::create(0.05,*(float *)(this + 0x510) + 1.0,*(float *)(this + 0x510) + 1.0);
      (**(code **)(**(long **)(this + 0x4f8) + 0x3a8))(*(long **)(this + 0x4f8),uVar2);
      (**(code **)(**(long **)(this + 0x4f0) + 0x90))
                (*(float *)(this + 0x510) + 1.0,*(float *)(this + 0x510) + 1.0);
      if (*(Node **)(this + 0x508) != (Node *)0x0) {
        Node::stopAllActions(*(Node **)(this + 0x508));
        uVar2 = ScaleTo::create(0.05,*(float *)(this + 0x510) + 1.0,*(float *)(this + 0x510) + 1.0);
                    /* WARNING: Could not recover jumptable at 0x00dc14dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(this + 0x508) + 0x3a8))(*(long **)(this + 0x508),uVar2);
        return;
      }
    }
  }
  return;
}

