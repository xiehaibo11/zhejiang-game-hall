
/* v8::internal::Builtins::CallableFor(v8::internal::Isolate*, v8::internal::Builtins::Name) */

void __thiscall v8::internal::Builtins::CallableFor(undefined8 *param_1,Builtins *this,int param_3)

{
  undefined8 uVar1;
  Builtins aBStack_40 [8];
  undefined8 local_38;
  
  uVar1 = Heap::builtin_address((Heap *)(*(long *)(this + 0x9e00) + 0x8850),param_3);
  CallInterfaceDescriptorFor(aBStack_40,param_3);
  *param_1 = uVar1;
  param_1[1] = &PTR__CallInterfaceDescriptor_01ca0fc8;
  param_1[2] = local_38;
  return;
}

