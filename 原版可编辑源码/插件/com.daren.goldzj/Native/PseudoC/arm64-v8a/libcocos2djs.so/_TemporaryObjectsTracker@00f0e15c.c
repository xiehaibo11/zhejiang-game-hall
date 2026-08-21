
/* v8::internal::Debug::TemporaryObjectsTracker::~TemporaryObjectsTracker() */

void __thiscall
v8::internal::Debug::TemporaryObjectsTracker::~TemporaryObjectsTracker
          (TemporaryObjectsTracker *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR_AllocationEvent_01ca45a8;
  base::Mutex::~Mutex((Mutex *)(this + 0x30));
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  operator_delete(this);
  return;
}

