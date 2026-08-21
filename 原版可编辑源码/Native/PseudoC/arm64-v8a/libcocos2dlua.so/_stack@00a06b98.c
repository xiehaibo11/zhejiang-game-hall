
/* std::__ndk1::stack<universe::network::AUpdates*, std::__ndk1::deque<universe::network::AUpdates*,
   std::__ndk1::allocator<universe::network::AUpdates*> > >::~stack() */

void __thiscall
std::__ndk1::
stack<universe::network::AUpdates*,std::__ndk1::deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>>
::~stack(stack<universe::network::AUpdates*,std::__ndk1::deque<universe::network::AUpdates*,std::__ndk1::allocator<universe::network::AUpdates*>>>
         *this)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(this + 8);
  puVar2 = *(undefined8 **)(this + 0x10);
  lVar3 = (long)puVar2 - (long)puVar8;
  if (lVar3 != 0) {
    uVar6 = *(ulong *)(this + 0x20);
                    /* try { // try from 00a06bc4 to 00b06bdb has its CatchHandler @ 00a06ca4 */
    plVar5 = (long *)((long)puVar8 + (uVar6 >> 6 & 0x3fffffffffffff8));
                    /* try { // try from 00a06be0 to 00b06c0b has its CatchHandler @ 00a06ca0 */
    lVar7 = *plVar5 + (uVar6 & 0x1ff) * 8;
    lVar1 = *(long *)((long)puVar8 + (*(long *)(this + 0x28) + uVar6 >> 6 & 0x3fffffffffffff8)) +
            (*(long *)(this + 0x28) + uVar6 & 0x1ff) * 8;
    while (lVar1 != lVar7) {
                    /* try { // try from 00a06c0c to 00b06c33 has its CatchHandler @ 00a06b74 */
      while (lVar7 = lVar7 + 8, lVar7 - *plVar5 == 0x1000) {
        plVar5 = plVar5 + 1;
        lVar7 = *plVar5;
        if (lVar1 == lVar7) goto LAB_00a06c24;
      }
    }
  }
LAB_00a06c24:
  *(undefined8 *)(this + 0x28) = 0;
  while (uVar6 = lVar3 >> 3, 2 < uVar6) {
                    /* try { // try from 00a06c34 to 00b06c47 has its CatchHandler @ 00a06ca4 */
    operator_delete((void *)*puVar8);
    puVar2 = *(undefined8 **)(this + 0x10);
    puVar8 = (undefined8 *)(*(long *)(this + 8) + 8);
    *(undefined8 **)(this + 8) = puVar8;
    lVar3 = (long)puVar2 - (long)puVar8;
  }
  if (uVar6 == 1) {
    uVar4 = 0x100;
  }
  else {
    if (uVar6 != 2) goto LAB_00a06c78;
    uVar4 = 0x200;
  }
  *(undefined8 *)(this + 0x20) = uVar4;
LAB_00a06c78:
  if (puVar8 != puVar2) {
    do {
      puVar9 = puVar8 + 1;
                    /* try { // try from 00a06c84 to 00b06c8b has its CatchHandler @ 00a06ca0 */
      operator_delete((void *)*puVar8);
      puVar8 = puVar9;
                    /* try { // try from 00a06c8c to 00b06cbf has its CatchHandler @ 00a06b74 */
    } while (puVar2 != puVar9);
    lVar3 = *(long *)(this + 0x10) - *(long *)(this + 8);
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 00a06be0 with catch @ 00a06ca0
                       catch() { ... } // from try @ 00a06c84 with catch @ 00a06ca0 */
                    /* catch() { ... } // from try @ 00a06bc4 with catch @ 00a06ca4
                       catch() { ... } // from try @ 00a06c34 with catch @ 00a06ca4 */
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*(void **)this != (void *)0x0) {
                    /* try { // try from 00a06cc0 to 00b06d07 has its CatchHandler @ 00a06cc0
                       catch() { ... } // from try @ 00a06cc0 with catch @ 00a06cc0
                       catch() { ... } // from try @ 00a06dd4 with catch @ 00a06cc0
                       catch() { ... } // from try @ 00a06ec0 with catch @ 00a06cc0 */
    operator_delete(*(void **)this);
    return;
  }
  return;
}

