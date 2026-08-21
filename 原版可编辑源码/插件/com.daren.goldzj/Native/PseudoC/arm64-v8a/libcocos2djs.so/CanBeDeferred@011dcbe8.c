
/* v8::internal::SerializerDeserializer::CanBeDeferred(v8::internal::HeapObject) */

bool v8::internal::SerializerDeserializer::CanBeDeferred(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 & 0xffffffff00000000 | 7;
  if (*(ushort *)(uVar1 + *(uint *)(param_1 - 1)) < 0x40) {
    return false;
  }
  if (*(short *)(uVar1 + *(uint *)(param_1 - 1)) == 0x65) {
    return false;
  }
  return *(short *)(uVar1 + *(uint *)(param_1 - 1)) != 0x41b;
}

