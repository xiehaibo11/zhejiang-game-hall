
/* cocos2d::Node::~Node() */

void __thiscall cocos2d::Node::~Node(Node *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  Node *pNVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  ComponentContainer *this_00;
  
                    /* try { // try from 00f22da0 to 01022dab has its CatchHandler @ 00f22ed4 */
  *(undefined ***)this = &PTR__Node_01706cd8;
  if (*(int *)(this + 0x204) != 0) {
    puVar3 = (undefined8 *)ScriptEngineManager::getInstance();
    (**(code **)(*(long *)*puVar3 + 0x50))((long *)*puVar3,*(undefined4 *)(this + 0x204));
  }
  if (*(Ref **)(this + 0x1d0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x1d0));
    *(undefined8 *)(this + 0x1d0) = 0;
  }
  if (*(Ref **)(this + 0x1d8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x1d8));
    *(undefined8 *)(this + 0x1d8) = 0;
  }
  plVar1 = *(long **)(this + 0x180);
  for (plVar6 = *(long **)(this + 0x178); plVar6 != plVar1; plVar6 = plVar6 + 1) {
    *(undefined8 *)(*plVar6 + 400) = 0;
  }
  (**(code **)(*(long *)this + 0x478))(this);
  this_00 = *(ComponentContainer **)(this + 0x210);
  if (this_00 != (ComponentContainer *)0x0) {
    ComponentContainer::~ComponentContainer(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x210) = 0;
  (**(code **)(**(long **)(this + 0x1e8) + 0x20))(*(long **)(this + 0x1e8),this);
  Scheduler::unscheduleAllForTarget(*(Scheduler **)(this + 0x1e0),this);
  if (*(Ref **)(this + 0x1e8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x1e8));
    *(undefined8 *)(this + 0x1e8) = 0;
  }
  if (*(Ref **)(this + 0x1e0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x1e0));
    *(undefined8 *)(this + 0x1e0) = 0;
  }
  lVar4 = Director::getInstance();
  EventDispatcher::removeEventListenersForTarget(*(EventDispatcher **)(lVar4 + 0xb0),this,false);
                    /* try { // try from 00f22e80 to 01022e8b has its CatchHandler @ 00f22ed0 */
  if (*(Ref **)(this + 0x1f0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x1f0));
  }
  lVar4 = *(long *)(this + 0x158);
  if (lVar4 != 0) {
    lVar8 = *(long *)(lVar4 + -8);
    if (lVar8 != 0) {
      lVar8 = lVar8 << 6;
      do {
                    /* try { // try from 00f22ea8 to 01022eb3 has its CatchHandler @ 00f22ecc */
        Mat4::~Mat4((Mat4 *)(lVar4 + -0x40 + lVar8));
        lVar8 = lVar8 + -0x40;
                    /* try { // try from 00f22eb4 to 01022efb has its CatchHandler @ 00f2268c */
      } while (lVar8 != 0);
    }
    operator_delete__((long *)(lVar4 + -8));
  }
  pNVar5 = *(Node **)(this + 0x2e0);
                    /* catch() { ... } // from try @ 00f22ea8 with catch @ 00f22ecc */
  if (this + 0x2c0 == pNVar5) {
                    /* catch() { ... } // from try @ 00f22b74 with catch @ 00f22ee0 */
    pcVar7 = *(code **)(*(long *)pNVar5 + 0x20);
LAB_00f22ee8:
    (*pcVar7)();
  }
  else {
                    /* catch() { ... } // from try @ 00f22e80 with catch @ 00f22ed0 */
    if (pNVar5 != (Node *)0x0) {
                    /* catch() { ... } // from try @ 00f22da0 with catch @ 00f22ed4 */
                    /* catch() { ... } // from try @ 00f22d78 with catch @ 00f22ed8 */
      pcVar7 = *(code **)(*(long *)pNVar5 + 0x28);
                    /* catch() { ... } // from try @ 00f22c50 with catch @ 00f22edc */
      goto LAB_00f22ee8;
    }
  }
  pNVar5 = *(Node **)(this + 0x2b0);
  if (this + 0x290 == pNVar5) {
    pcVar7 = *(code **)(*(long *)pNVar5 + 0x20);
LAB_00f22f14:
    (*pcVar7)();
  }
  else if (pNVar5 != (Node *)0x0) {
    pcVar7 = *(code **)(*(long *)pNVar5 + 0x28);
    goto LAB_00f22f14;
  }
  pNVar5 = *(Node **)(this + 0x280);
  if (this + 0x260 == pNVar5) {
    pcVar7 = *(code **)(*(long *)pNVar5 + 0x20);
LAB_00f22f40:
    (*pcVar7)();
  }
  else if (pNVar5 != (Node *)0x0) {
    pcVar7 = *(code **)(*(long *)pNVar5 + 0x28);
    goto LAB_00f22f40;
  }
  pNVar5 = *(Node **)(this + 0x250);
  if (this + 0x230 == pNVar5) {
    pcVar7 = *(code **)(*(long *)pNVar5 + 0x20);
  }
  else {
    if (pNVar5 == (Node *)0x0) goto LAB_00f22f70;
                    /* try { // try from 00f22f58 to 01023253 has its CatchHandler @ 00f22f58
                       catch() { ... } // from try @ 00f22f58 with catch @ 00f22f58
                       catch() { ... } // from try @ 00f2325c with catch @ 00f22f58
                       catch() { ... } // from try @ 00f23578 with catch @ 00f22f58 */
    pcVar7 = *(code **)(*(long *)pNVar5 + 0x28);
  }
  (*pcVar7)();
LAB_00f22f70:
  if (((byte)this[0x1a8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1b8));
  }
  puVar3 = *(undefined8 **)(this + 0x178);
  puVar2 = *(undefined8 **)(this + 0x180);
  if (puVar3 != puVar2) {
    do {
      Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar2 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x178);
  }
  *(undefined8 **)(this + 0x180) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x180) = puVar3;
    operator_delete(puVar3);
  }
  Mat4::~Mat4((Mat4 *)(this + 0x110));
  Mat4::~Mat4((Mat4 *)(this + 0xcc));
  Mat4::~Mat4((Mat4 *)(this + 0x8c));
  Quaternion::~Quaternion((Quaternion *)(this + 0x34));
  Ref::~Ref((Ref *)this);
  return;
}

