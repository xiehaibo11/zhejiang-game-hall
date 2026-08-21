
/* v8::internal::FunctionCallbackArguments::FunctionCallbackArguments(v8::internal::Isolate*,
   v8::internal::Object, v8::internal::HeapObject, v8::internal::Object, v8::internal::HeapObject,
   unsigned long*, int) */

void __thiscall
v8::internal::FunctionCallbackArguments::FunctionCallbackArguments
          (FunctionCallbackArguments *this,long param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__Relocatable_01cacc40;
  *(long *)(this + 8) = param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0xb790);
  *(FunctionCallbackArguments **)(param_1 + 0xb790) = this;
  *(undefined8 *)(this + 0x40) = param_6;
  *(undefined8 *)(this + 0x48) = param_7;
  *(undefined4 *)(this + 0x50) = param_8;
  *(undefined ***)this = &PTR__CustomArguments_01cc40e0;
  *(undefined8 *)(this + 0x38) = param_3;
  *(undefined8 *)(this + 0x18) = param_5;
  *(long *)(this + 0x20) = param_1;
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0x28) = uVar1;
  *(undefined8 *)(this + 0x30) = uVar1;
  return;
}

