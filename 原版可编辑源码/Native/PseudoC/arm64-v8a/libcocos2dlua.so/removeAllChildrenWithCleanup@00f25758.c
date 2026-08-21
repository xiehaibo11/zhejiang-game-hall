
/* cocos2d::Node::removeAllChildrenWithCleanup(bool) */

void __thiscall cocos2d::Node::removeAllChildrenWithCleanup(Node *this,bool param_1)

{
  undefined8 *puVar1;
  Node NVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* catch() { ... } // from try @ 00f25574 with catch @ 00f25758 */
  puVar4 = *(undefined8 **)(this + 0x178);
  puVar1 = *(undefined8 **)(this + 0x180);
                    /* catch() { ... } // from try @ 00f25610 with catch @ 00f25774 */
  if (puVar4 != puVar1) {
                    /* catch() { ... } // from try @ 00f254e0 with catch @ 00f25778 */
    NVar2 = this[0x1f8];
    while( true ) {
      if (NVar2 != (Node)0x0) {
                    /* try { // try from 00f257b8 to 010257df has its CatchHandler @ 00f257b8
                       catch() { ... } // from try @ 00f257b8 with catch @ 00f257b8
                       catch() { ... } // from try @ 00f257ec with catch @ 00f257b8 */
        (**(code **)(*(long *)*puVar4 + 0x338))();
        (**(code **)(*(long *)*puVar4 + 0x330))();
      }
      if (param_1) {
        (**(code **)(*(long *)*puVar4 + 0x340))();
                    /* try { // try from 00f257e0 to 010257eb has its CatchHandler @ 00f257fc */
      }
      (**(code **)(*(long *)*puVar4 + 600))((long *)*puVar4,0);
      if (puVar1 == puVar4 + 1) break;
      NVar2 = this[0x1f8];
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined8 **)(this + 0x178);
    puVar1 = *(undefined8 **)(this + 0x180);
                    /* try { // try from 00f257ec to 0102580f has its CatchHandler @ 00f257b8 */
    if (puVar4 != puVar1) {
      do {
        puVar3 = puVar4 + 1;
        Ref::release((Ref *)*puVar4);
        puVar4 = puVar3;
                    /* catch() { ... } // from try @ 00f257e0 with catch @ 00f257fc */
      } while (puVar1 != puVar3);
      puVar4 = *(undefined8 **)(this + 0x178);
    }
  }
  *(undefined8 **)(this + 0x180) = puVar4;
  return;
}

