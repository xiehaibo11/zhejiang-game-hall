
/* cocos2d::LabelTTF::getBoundingBox() const */

void __thiscall cocos2d::LabelTTF::getBoundingBox(LabelTTF *this)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(long **)(this + 0x308) + 0x168))();
  (**(code **)(*(long *)this + 0x160))(this,uVar1);
  Node::getBoundingBox();
  return;
}

