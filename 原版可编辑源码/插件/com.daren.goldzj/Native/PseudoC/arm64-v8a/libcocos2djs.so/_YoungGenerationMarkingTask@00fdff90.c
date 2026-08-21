
/* v8::internal::YoungGenerationMarkingTask::~YoungGenerationMarkingTask() */

void __thiscall
v8::internal::YoungGenerationMarkingTask::~YoungGenerationMarkingTask
          (YoungGenerationMarkingTask *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__YoungGenerationMarkingTask_01ca8b20;
  *(undefined ***)(this + 0x20) = &PTR__YoungGenerationMarkingTask_01ca8b58;
  puVar1 = *(void **)(this + 0xa0);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x90);
  *(undefined8 *)(this + 0x90) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Cancelable::~Cancelable((Cancelable *)this);
  operator_delete(this);
  return;
}

