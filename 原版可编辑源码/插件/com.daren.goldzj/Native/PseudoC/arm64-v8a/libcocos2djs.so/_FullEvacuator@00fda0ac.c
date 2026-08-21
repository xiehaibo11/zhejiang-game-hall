
/* v8::internal::FullEvacuator::~FullEvacuator() */

void __thiscall v8::internal::FullEvacuator::~FullEvacuator(FullEvacuator *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *extraout_x1;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__FullEvacuator_01ca8178;
  LocalAllocationBuffer::Close((LocalAllocationBuffer *)(this + 0x380));
  CompactionSpaceCollection::~CompactionSpaceCollection((CompactionSpaceCollection *)(this + 0x1a8))
  ;
  puVar2 = *(void **)(this + 0x168);
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
  pvVar3 = *(void **)(this + 0x158);
  *(undefined8 *)(this + 0x158) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  Evacuator::~Evacuator((Evacuator *)this);
  Malloced::operator_delete((Malloced *)this,extraout_x1);
  return;
}

