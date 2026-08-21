
/* cocos2d::Label::enableStrikethrough() */

void __thiscall cocos2d::Label::enableStrikethrough(Label *this)

{
  undefined8 uVar1;
  
  if (this[0x698] == (Label)0x0) {
    if (*(long *)(this + 0x690) == 0) {
      uVar1 = DrawNode::create(2.0);
      *(undefined8 *)(this + 0x690) = uVar1;
      (**(code **)(*(long *)this + 0x210))(this,uVar1,100000);
      this[0x30c] = (Label)0x1;
    }
    this[0x698] = (Label)0x1;
  }
  return;
}

