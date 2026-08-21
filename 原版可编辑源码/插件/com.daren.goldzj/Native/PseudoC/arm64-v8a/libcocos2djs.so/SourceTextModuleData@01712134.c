
/* v8::internal::compiler::SourceTextModuleData::SourceTextModuleData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::SourceTextModule>) */

void __thiscall
v8::internal::compiler::SourceTextModuleData::SourceTextModuleData
          (SourceTextModuleData *this,long param_1)

{
  undefined8 uVar1;
  
  HeapObjectData::HeapObjectData();
  this[0x18] = (SourceTextModuleData)0x0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar1;
  return;
}

