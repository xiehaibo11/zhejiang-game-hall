
/* v8::internal::Factory::NewStringFromTwoByte(v8::internal::ZoneVector<unsigned short> const*,
   v8::internal::AllocationType) */

void __thiscall
v8::internal::Factory::NewStringFromTwoByte(Factory *this,long *param_1,undefined4 param_3)

{
  NewStringFromTwoByte(this,*param_1,(ulong)(param_1[1] - *param_1) >> 1,param_3);
  return;
}

