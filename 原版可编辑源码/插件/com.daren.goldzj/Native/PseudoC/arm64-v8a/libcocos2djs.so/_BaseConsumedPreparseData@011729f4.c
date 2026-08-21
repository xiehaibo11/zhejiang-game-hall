
/* v8::internal::BaseConsumedPreparseData<v8::internal::PreparseData>::~BaseConsumedPreparseData()
    */

void __thiscall
v8::internal::BaseConsumedPreparseData<v8::internal::PreparseData>::~BaseConsumedPreparseData
          (BaseConsumedPreparseData<v8::internal::PreparseData> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__BaseConsumedPreparseData_01cb54b0;
  *(undefined8 *)(this + 8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

