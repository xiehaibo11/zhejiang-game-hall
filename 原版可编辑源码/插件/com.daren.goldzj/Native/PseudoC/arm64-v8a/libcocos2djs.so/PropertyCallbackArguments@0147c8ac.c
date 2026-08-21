
/* v8::internal::PropertyCallbackArguments::PropertyCallbackArguments(v8::internal::Isolate*,
   v8::internal::Object, v8::internal::Object, v8::internal::JSObject,
   v8::Maybe<v8::internal::ShouldThrow>) */

void __thiscall
v8::internal::PropertyCallbackArguments::PropertyCallbackArguments
          (PropertyCallbackArguments *this,long param_1,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__Relocatable_01cacc40;
  *(long *)(this + 8) = param_1;
  lVar1 = 4;
  if ((char)param_6 != '\0') {
    lVar1 = (long)(int)((ulong)param_6 >> 0x20) << 1;
  }
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0xb790);
  *(PropertyCallbackArguments **)(param_1 + 0xb790) = this;
  *(undefined8 *)(this + 0x40) = param_3;
  *(undefined8 *)(this + 0x48) = param_4;
  *(long *)(this + 0x18) = lVar1;
  *(undefined8 *)(this + 0x20) = param_5;
  *(undefined ***)this = &PTR__CustomArguments_01cc40b0;
  *(long *)(this + 0x28) = param_1;
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x38) = uVar2;
  return;
}

