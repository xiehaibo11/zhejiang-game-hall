
/* v8::internal::Serializer::ObjectIsBytecodeHandler(v8::internal::HeapObject) const */

bool __thiscall v8::internal::Serializer::ObjectIsBytecodeHandler(undefined8 param_1,ulong param_2)

{
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x9a) {
    return (*(uint *)(param_2 + 0x17) & 0x3e) == 2;
  }
  return false;
}

