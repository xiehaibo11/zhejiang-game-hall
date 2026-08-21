
/* v8::internal::ValueDeserializer::ReadRawBytes(unsigned long, void const**) */

undefined8 __thiscall
v8::internal::ValueDeserializer::ReadRawBytes(ValueDeserializer *this,ulong param_1,void **param_2)

{
  if ((ulong)(*(long *)(this + 0x18) - (long)*(void **)(this + 0x10)) < param_1) {
    return 0;
  }
  *param_2 = *(void **)(this + 0x10);
  *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + param_1;
  return 1;
}

