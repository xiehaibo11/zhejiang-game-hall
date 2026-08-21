
/* v8::internal::ProfileNode::~ProfileNode() */

void __thiscall v8::internal::ProfileNode::~ProfileNode(ProfileNode *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(this + 0x98);
  if (pvVar4 != (void *)0x0) {
    pvVar2 = pvVar4;
    pvVar3 = *(void **)(this + 0xa0);
    if (*(void **)(this + 0xa0) != pvVar4) {
      do {
        pvVar2 = *(void **)((long)pvVar3 + -0x18);
        pvVar5 = (void *)((long)pvVar3 + -0x20);
        if (pvVar2 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x10) = pvVar2;
          operator_delete(pvVar2);
        }
        pvVar3 = pvVar5;
      } while (pvVar4 != pvVar5);
      pvVar2 = *(void **)(this + 0x98);
    }
    *(void **)(this + 0xa0) = pvVar4;
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x80);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x70);
  *(undefined8 *)(this + 0x70) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x48);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar4;
    operator_delete(pvVar4);
  }
  puVar1 = *(void **)(this + 0x28);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x18);
  *(undefined8 *)(this + 0x18) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
    return;
  }
  return;
}

