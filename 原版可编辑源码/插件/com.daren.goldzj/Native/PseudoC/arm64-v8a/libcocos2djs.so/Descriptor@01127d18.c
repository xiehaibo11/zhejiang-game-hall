
/* v8::internal::Descriptor::Descriptor(v8::internal::Handle<v8::internal::Name>,
   v8::internal::MaybeObjectHandle const&, v8::internal::PropertyDetails) */

void __thiscall
v8::internal::Descriptor::Descriptor
          (Descriptor *this,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)this = param_2;
  uVar2 = param_3[1];
  uVar1 = *param_3;
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined8 *)(this + 8) = uVar1;
  return;
}

