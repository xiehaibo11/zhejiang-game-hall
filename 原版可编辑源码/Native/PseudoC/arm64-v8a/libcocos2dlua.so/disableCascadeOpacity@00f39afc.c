
/* cocos2d::ProtectedNode::disableCascadeOpacity() */

void __thiscall cocos2d::ProtectedNode::disableCascadeOpacity(ProtectedNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  this[0x218] = this[0x219];
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x498))((long *)*puVar2,0xff);
  }
  puVar1 = *(undefined8 **)(this + 0x300);
  for (puVar2 = *(undefined8 **)(this + 0x2f8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x498))((long *)*puVar2,0xff);
  }
  return;
}

