
/* cocostudio::timeline::BoneNode::disableCascadeOpacity() */

void __thiscall cocostudio::timeline::BoneNode::disableCascadeOpacity(BoneNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x398);
  for (puVar1 = *(undefined8 **)(this + 0x390); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x498))((long *)*puVar1,0xff);
  }
  return;
}

