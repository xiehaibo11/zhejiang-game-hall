
/* MyXMLVisitor::~MyXMLVisitor() */

void __thiscall MyXMLVisitor::~MyXMLVisitor(MyXMLVisitor *this)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(this + 8);
                    /* try { // try from 00dd1510 to 00ed154b has its CatchHandler @ 00dd16a0 */
  *(undefined ***)this = &PTR__MyXMLVisitor_016e1d58;
  if (pvVar1 != (void *)0x0) {
    pvVar3 = pvVar1;
    pvVar2 = *(void **)(this + 0x10);
    if (*(void **)(this + 0x10) != pvVar1) {
      do {
        if ((*(byte *)((long)pvVar2 + -0x48) & 1) != 0) {
                    /* try { // try from 00dd154c to 00ed1587 has its CatchHandler @ 00dd16a4 */
          operator_delete(*(void **)((long)pvVar2 + -0x38));
        }
        pvVar3 = (void *)((long)pvVar2 + -0x60);
        if ((*(byte *)((long)pvVar2 + -0x60) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar2 + -0x50));
        }
        pvVar2 = pvVar3;
      } while (pvVar1 != pvVar3);
      pvVar3 = *(void **)(this + 8);
    }
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar3);
  }
  operator_delete(this);
  return;
}

