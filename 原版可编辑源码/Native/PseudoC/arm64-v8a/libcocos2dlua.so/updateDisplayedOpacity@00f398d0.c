
/* cocos2d::ProtectedNode::updateDisplayedOpacity(unsigned char) */

void __thiscall cocos2d::ProtectedNode::updateDisplayedOpacity(ProtectedNode *this,uchar param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00f39800 with catch @ 00f398d0 */
                    /* catch() { ... } // from try @ 00f397ec with catch @ 00f398d4 */
                    /* catch() { ... } // from try @ 00f397e4 with catch @ 00f398e4 */
                    /* catch() { ... } // from try @ 00f3982c with catch @ 00f398e8 */
  this[0x218] = SUB41((int)((double)((uint)(byte)this[0x219] * (uint)param_1) / 255.0),0);
  (**(code **)(*(long *)this + 0x528))();
  if (this[0x221] != (ProtectedNode)0x0) {
    puVar2 = *(undefined8 **)(this + 0x180);
    for (puVar1 = *(undefined8 **)(this + 0x178); puVar1 != puVar2; puVar1 = puVar1 + 1) {
      (**(code **)(*(long *)*puVar1 + 0x498))((long *)*puVar1,this[0x218]);
    }
  }
  puVar2 = *(undefined8 **)(this + 0x300);
  for (puVar1 = *(undefined8 **)(this + 0x2f8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x498))((long *)*puVar1,this[0x218]);
  }
  return;
}

