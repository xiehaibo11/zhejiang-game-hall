
/* v8::internal::Descriptor::DataField(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, int, v8::internal::PropertyAttributes,
   v8::internal::Representation) */

void __thiscall
v8::internal::Descriptor::DataField
          (undefined8 *param_1_00,Descriptor *this,undefined8 param_1,int param_4,int param_5,
          uint param_6)

{
  undefined8 uVar1;
  
  uVar1 = FieldType::Any((Isolate *)this);
  *param_1_00 = param_1;
  *(undefined4 *)(param_1_00 + 1) = 1;
  param_1_00[2] = uVar1;
  *(uint *)(param_1_00 + 3) = param_5 << 3 | param_4 << 0x13 | (param_6 & 0xff) << 6;
  return;
}

