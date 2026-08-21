
/* cocostudio::timeline::BoneNode::updateDisplayedColor(cocos2d::Color3B const&) */

void cocostudio::timeline::BoneNode::updateDisplayedColor(Color3B *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  if (param_1[0x220] != (Color3B)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x398);
    if (*(undefined8 **)(param_1 + 0x390) != puVar3) {
      puVar1 = *(undefined8 **)(param_1 + 0x390);
      do {
        puVar2 = puVar1 + 1;
        (**(code **)(*(long *)*puVar1 + 0x4c8))((long *)*puVar1,param_1 + 0x21a);
        puVar1 = puVar2;
      } while (puVar3 != puVar2);
    }
  }
  return;
}

