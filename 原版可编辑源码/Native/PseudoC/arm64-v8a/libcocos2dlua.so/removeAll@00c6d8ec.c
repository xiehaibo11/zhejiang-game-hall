
/* cocostudio::TriggerObj::removeAll() */

void __thiscall cocostudio::TriggerObj::removeAll(TriggerObj *this)

{
  TriggerMng *this_00;
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x30);
  for (puVar2 = *(undefined8 **)(this + 0x28); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x30))();
  }
  puVar3 = *(undefined8 **)(this + 0x48);
  for (puVar2 = *(undefined8 **)(this + 0x40); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x30))();
  }
  puVar3 = *(undefined8 **)(this + 0x68);
  for (puVar2 = *(undefined8 **)(this + 0x60); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    this_00 = (TriggerMng *)TriggerMng::getInstance();
    TriggerMng::removeEventListener(this_00,(EventListener *)*puVar2);
  }
  puVar2 = *(undefined8 **)(this + 0x28);
  puVar3 = *(undefined8 **)(this + 0x30);
  if (puVar2 != puVar3) {
    do {
      puVar1 = puVar2 + 1;
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar2 = puVar1;
    } while (puVar3 != puVar1);
    puVar2 = *(undefined8 **)(this + 0x28);
  }
  puVar3 = *(undefined8 **)(this + 0x40);
  puVar1 = *(undefined8 **)(this + 0x48);
  *(undefined8 **)(this + 0x30) = puVar2;
  if (puVar3 != puVar1) {
    do {
      puVar2 = puVar3 + 1;
      cocos2d::Ref::release((Ref *)*puVar3);
      puVar3 = puVar2;
    } while (puVar1 != puVar2);
    puVar3 = *(undefined8 **)(this + 0x40);
  }
  puVar2 = *(undefined8 **)(this + 0x60);
  puVar1 = *(undefined8 **)(this + 0x68);
  *(undefined8 **)(this + 0x48) = puVar3;
  if (puVar2 != puVar1) {
    do {
      puVar3 = puVar2 + 1;
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar2 = puVar3;
    } while (puVar1 != puVar3);
    puVar2 = *(undefined8 **)(this + 0x60);
  }
  *(undefined8 **)(this + 0x68) = puVar2;
  return;
}

