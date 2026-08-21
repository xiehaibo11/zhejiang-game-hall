
/* v8::internal::Scavenger::~Scavenger() */

void __thiscall v8::internal::Scavenger::~Scavenger(Scavenger *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar2 = *(void **)(this + 0x2c8);
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    puVar1 = (void *)puVar2[5];
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    pvVar4 = (void *)puVar2[3];
    puVar2[3] = 0;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x2b8);
  *(undefined8 *)(this + 0x2b8) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar2 = *(void **)(this + 0x2a0);
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x290);
  *(undefined8 *)(this + 0x290) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  LocalAllocationBuffer::Close((LocalAllocationBuffer *)(this + 0x270));
  CompactionSpaceCollection::~CompactionSpaceCollection((CompactionSpaceCollection *)(this + 0x98));
  puVar2 = *(void **)(this + 0x60);
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar3);
  return;
}

