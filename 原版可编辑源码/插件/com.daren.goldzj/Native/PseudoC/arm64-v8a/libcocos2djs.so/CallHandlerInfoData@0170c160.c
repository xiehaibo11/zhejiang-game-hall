
/* v8::internal::compiler::CallHandlerInfoData::CallHandlerInfoData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::CallHandlerInfo>) */

void __thiscall
v8::internal::compiler::CallHandlerInfoData::CallHandlerInfoData
          (CallHandlerInfoData *this,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  HeapObjectData::HeapObjectData();
  uVar1 = *(uint *)(*param_4 + 3);
  if (uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)((*param_4 & 0xffffffff00000000 | (ulong)uVar1) + 3);
  }
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x20) = 0;
  return;
}

