
/* v8::internal::Descriptor::Descriptor(v8::internal::Handle<v8::internal::Name>,
   v8::internal::MaybeObjectHandle const&, v8::internal::PropertyKind,
   v8::internal::PropertyAttributes, v8::internal::PropertyLocation,
   v8::internal::PropertyConstness, v8::internal::Representation, int) */

void __thiscall
v8::internal::Descriptor::Descriptor
          (Descriptor *this,undefined8 param_2,undefined8 *param_3,uint param_4,int param_5,
          int param_6,int param_7,uint param_8,int param_9)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = param_2;
  uVar1 = *param_3;
  *(undefined8 *)(this + 0x10) = param_3[1];
  *(undefined8 *)(this + 8) = uVar1;
  *(uint *)(this + 0x18) =
       param_4 | param_5 << 3 | param_6 << 1 | param_7 << 2 | param_9 << 0x13 |
       (param_8 & 0xff) << 6;
  return;
}

