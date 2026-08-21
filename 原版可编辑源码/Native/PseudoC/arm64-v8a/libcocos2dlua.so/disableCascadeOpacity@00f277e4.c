
/* cocos2d::Node::disableCascadeOpacity() */

void __thiscall cocos2d::Node::disableCascadeOpacity(Node *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
  this[0x218] = this[0x219];
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x498))((long *)*puVar2,0xff);
  }
  return;
}

