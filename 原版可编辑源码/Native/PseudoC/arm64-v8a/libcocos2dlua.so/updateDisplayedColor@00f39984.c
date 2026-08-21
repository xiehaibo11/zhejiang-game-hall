
/* cocos2d::ProtectedNode::updateDisplayedColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ProtectedNode::updateDisplayedColor(ProtectedNode *this,Color3B *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  this[0x21a] = SUB41((int)((double)((uint)(byte)*param_1 * (uint)(byte)this[0x21d]) / 255.0),0);
                    /* catch() { ... } // from try @ 00f39a14 with catch @ 00f399c8 */
  this[0x21b] = SUB41((int)((double)((uint)(byte)param_1[1] * (uint)(byte)this[0x21e]) / 255.0),0);
                    /* try { // try from 00f399ec to 010399f3 has its CatchHandler @ 00f39a3c */
  this[0x21c] = SUB41((int)((double)((uint)(byte)param_1[2] * (uint)(byte)this[0x21f]) / 255.0),0);
  (**(code **)(*(long *)this + 0x528))();
  if (this[0x220] != (ProtectedNode)0x0) {
                    /* try { // try from 00f39a10 to 01039a13 has its CatchHandler @ 00f39a2c */
    puVar1 = *(undefined8 **)(this + 0x180);
                    /* try { // try from 00f39a14 to 01039a57 has its CatchHandler @ 00f399c8 */
    for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
                    /* catch() { ... } // from try @ 00f39a10 with catch @ 00f39a2c */
      (**(code **)(*(long *)*puVar2 + 0x4c8))((long *)*puVar2,this + 0x21a);
    }
  }
                    /* catch() { ... } // from try @ 00f399ec with catch @ 00f39a3c */
  puVar1 = *(undefined8 **)(this + 0x300);
  for (puVar2 = *(undefined8 **)(this + 0x2f8); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x4c8))((long *)*puVar2,this + 0x21a);
  }
  return;
}

