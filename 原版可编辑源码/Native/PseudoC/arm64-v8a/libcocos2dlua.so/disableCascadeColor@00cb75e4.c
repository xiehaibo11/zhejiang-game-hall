
/* cocostudio::timeline::BoneNode::disableCascadeColor() */

void __thiscall cocostudio::timeline::BoneNode::disableCascadeColor(BoneNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x398);
  for (puVar1 = *(undefined8 **)(this + 0x390); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x4c8))((long *)*puVar1,&cocos2d::Color3B::WHITE);
  }
  return;
}

