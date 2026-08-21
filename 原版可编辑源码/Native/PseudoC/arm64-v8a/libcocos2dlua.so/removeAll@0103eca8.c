
/* cocos2d::ComponentContainer::removeAll() */

void __thiscall cocos2d::ComponentContainer::removeAll(ComponentContainer *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  
                    /* try { // try from 0103ecbc to 0113ecfb has its CatchHandler @ 0103ecbc
                       catch() { ... } // from try @ 0103ecbc with catch @ 0103ecbc
                       catch() { ... } // from try @ 0103edc8 with catch @ 0103ecbc */
  if (*(long *)(this + 0x18) == 0) {
    return;
  }
  plVar3 = *(long **)(this + 0x10);
  puVar4 = (undefined8 *)0x0;
  if (plVar3 != (long *)0x0) {
    do {
      (**(code **)(*(long *)plVar3[5] + 0x58))();
      (**(code **)(*(long *)plVar3[5] + 0x28))((long *)plVar3[5],0);
      Ref::release((Ref *)plVar3[5]);
      plVar3 = (long *)*plVar3;
                    /* try { // try from 0103ecfc to 0113ed03 has its CatchHandler @ 0103edf8 */
    } while (plVar3 != (long *)0x0);
    if (*(long *)(this + 0x18) == 0) goto LAB_0103ed64;
    puVar4 = *(undefined8 **)(this + 0x10);
  }
  while (puVar4 != (void *)0x0) {
    pvVar5 = (void *)*puVar4;
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
                    /* try { // try from 0103ed14 to 0113ed1b has its CatchHandler @ 0103edf0 */
    operator_delete(puVar4);
                    /* try { // try from 0103ed20 to 0113edc7 has its CatchHandler @ 0103ee00 */
    puVar4 = pvVar5;
  }
  lVar1 = *(long *)(this + 8);
  *(undefined8 *)(this + 0x10) = 0;
  if (lVar1 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(*(long *)this + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar1 != lVar2);
  }
  *(undefined8 *)(this + 0x18) = 0;
LAB_0103ed64:
  Node::unscheduleUpdate(*(Node **)(this + 0x28));
  return;
}

