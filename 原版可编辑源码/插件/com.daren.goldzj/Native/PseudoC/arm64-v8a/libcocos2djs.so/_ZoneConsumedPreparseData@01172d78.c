
/* v8::internal::ZoneConsumedPreparseData::~ZoneConsumedPreparseData() */

void __thiscall
v8::internal::ZoneConsumedPreparseData::~ZoneConsumedPreparseData(ZoneConsumedPreparseData *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__BaseConsumedPreparseData_01cb54f0;
  *(undefined8 *)(this + 8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

