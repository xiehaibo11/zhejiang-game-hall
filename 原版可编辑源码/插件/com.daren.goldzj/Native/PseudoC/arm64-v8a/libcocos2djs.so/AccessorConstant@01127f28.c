
/* v8::internal::Descriptor::AccessorConstant(v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::Descriptor::AccessorConstant
          (undefined8 *param_1,Descriptor *this,undefined8 param_3,int param_4)

{
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = this;
  param_1[2] = param_3;
  *(uint *)(param_1 + 3) = param_4 << 3 | 0x107;
  return;
}

