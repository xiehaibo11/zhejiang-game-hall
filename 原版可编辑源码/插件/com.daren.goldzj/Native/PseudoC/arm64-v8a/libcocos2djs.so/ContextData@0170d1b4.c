
/* v8::internal::compiler::ContextData::ContextData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::Context>) */

void __thiscall v8::internal::compiler::ContextData::ContextData(ContextData *this,long param_1)

{
  undefined8 uVar1;
  
  HeapObjectData::HeapObjectData();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(ContextData **)(this + 0x18) = this + 0x20;
  *(undefined8 *)(this + 0x28) = uVar1;
  return;
}

