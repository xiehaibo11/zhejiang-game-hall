
/* v8::internal::JSReceiver::DefineOwnProperty(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyDescriptor*, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2 v8::internal::JSReceiver::DefineOwnProperty(undefined8 param_1,ulong *param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar3 = uVar2 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x423) {
    uVar1 = JSArray::DefineOwnProperty();
  }
  else if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa9) {
    uVar1 = JSProxy::DefineOwnProperty();
  }
  else if (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x41b) {
    uVar1 = JSTypedArray::DefineOwnProperty();
  }
  else {
    uVar1 = OrdinaryDefineOwnProperty();
  }
  return uVar1;
}

