
/* v8::internal::OnHeapConsumedPreparseData::~OnHeapConsumedPreparseData() */

void __thiscall
v8::internal::OnHeapConsumedPreparseData::~OnHeapConsumedPreparseData
          (OnHeapConsumedPreparseData *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__BaseConsumedPreparseData_01cb54b0;
  *(undefined8 *)(this + 8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}

