
/* v8::internal::ConsumedPreparseData::For(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::PreparseData>) */

void __thiscall
v8::internal::ConsumedPreparseData::For
          (undefined8 *param_1_00,ConsumedPreparseData *this,undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = operator_new(0x28);
  puVar2 = operator_new(0x10);
  *puVar2 = 0;
  *(undefined8 *)((long)puVar2 + 6) = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[3] = this;
  puVar1[4] = param_1;
  *param_1_00 = puVar1;
  *puVar1 = &PTR__BaseConsumedPreparseData_01cb53d0;
  puVar1[1] = puVar2;
  return;
}

