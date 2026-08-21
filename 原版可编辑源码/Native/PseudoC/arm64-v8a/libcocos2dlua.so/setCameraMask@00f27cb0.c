
/* cocos2d::Node::setCameraMask(unsigned short, bool) */

void __thiscall cocos2d::Node::setCameraMask(Node *this,ushort param_1,bool param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(ushort *)(this + 0x222) = param_1;
  if (param_2) {
    puVar1 = *(undefined8 **)(this + 0x180);
                    /* catch() { ... } // from try @ 00f27c84 with catch @ 00f27cd0 */
    for (puVar2 = *(undefined8 **)(this + 0x178); puVar2 != puVar1; puVar2 = puVar2 + 1) {
                    /* catch() { ... } // from try @ 00f27c38 with catch @ 00f27cd8
                       catch() { ... } // from try @ 00f27c70 with catch @ 00f27cd8 */
      (**(code **)(*(long *)*puVar2 + 0x4f0))((long *)*puVar2,param_1,1);
    }
  }
  return;
}

