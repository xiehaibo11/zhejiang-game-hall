
/* cocos2d::Node::updateDisplayedColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::Node::updateDisplayedColor(Node *this,Color3B *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00f27888 to 0102788f has its CatchHandler @ 00f27ac8 */
                    /* try { // try from 00f27890 to 01027967 has its CatchHandler @ 00f2758c */
  this[0x21a] = SUB41((int)((double)((uint)(byte)*param_1 * (uint)(byte)this[0x21d]) / 255.0),0);
  this[0x21b] = SUB41((int)((double)((uint)(byte)param_1[1] * (uint)(byte)this[0x21e]) / 255.0),0);
  this[0x21c] = SUB41((int)((double)((uint)(byte)param_1[2] * (uint)(byte)this[0x21f]) / 255.0),0);
  (**(code **)(*(long *)this + 0x528))();
  if (this[0x220] != (Node)0x0) {
    puVar1 = *(undefined8 **)(this + 0x180);
    if (*(undefined8 **)(this + 0x178) != puVar1) {
      puVar2 = *(undefined8 **)(this + 0x178);
      do {
        puVar3 = puVar2 + 1;
        (**(code **)(*(long *)*puVar2 + 0x4c8))((long *)*puVar2,this + 0x21a);
        puVar2 = puVar3;
      } while (puVar1 != puVar3);
    }
  }
  return;
}

