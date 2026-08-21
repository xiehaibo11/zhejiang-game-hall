
/* v8::internal::OnHeapConsumedPreparseData::OnHeapConsumedPreparseData(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::PreparseData>) */

void __thiscall
v8::internal::OnHeapConsumedPreparseData::OnHeapConsumedPreparseData
          (OnHeapConsumedPreparseData *this,undefined8 param_1,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x10);
  *puVar1 = 0;
  *(undefined8 *)((long)puVar1 + 6) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = param_3;
  *(undefined ***)this = &PTR__BaseConsumedPreparseData_01cb53d0;
  *(undefined8 **)(this + 8) = puVar1;
  return;
}

