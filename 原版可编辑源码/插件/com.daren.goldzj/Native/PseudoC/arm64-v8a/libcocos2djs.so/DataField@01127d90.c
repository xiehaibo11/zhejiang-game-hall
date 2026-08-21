
/* v8::internal::Descriptor::DataField(v8::internal::Handle<v8::internal::Name>, int,
   v8::internal::PropertyAttributes, v8::internal::PropertyConstness, v8::internal::Representation,
   v8::internal::MaybeObjectHandle const&) */

void __thiscall
v8::internal::Descriptor::DataField
          (undefined8 *param_1,Descriptor *this,int param_3,int param_4,int param_5,uint param_6,
          undefined8 *param_7)

{
  undefined8 uVar1;
  
  *param_1 = this;
  uVar1 = *param_7;
  param_1[2] = param_7[1];
  param_1[1] = uVar1;
  *(uint *)(param_1 + 3) = param_4 << 3 | param_3 << 0x13 | param_5 << 2 | (param_6 & 0xff) << 6;
  return;
}

