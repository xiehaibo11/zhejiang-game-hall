
/* v8::internal::SlotCollectingVisitor::~SlotCollectingVisitor() */

void __thiscall
v8::internal::SlotCollectingVisitor::~SlotCollectingVisitor(SlotCollectingVisitor *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__SlotCollectingVisitor_01ca7808;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

