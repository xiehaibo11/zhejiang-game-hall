
/* cocostudio::timeline::Timeline::setNode(cocos2d::Node*) */

void __thiscall cocostudio::timeline::Timeline::setNode(Timeline *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  for (puVar2 = *(undefined8 **)(this + 0x28); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,param_1);
  }
  return;
}

