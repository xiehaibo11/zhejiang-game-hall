
/* v8::internal::OrderedNameDictionaryHandler::Capacity(v8::internal::HeapObject) */

uint v8::internal::OrderedNameDictionaryHandler::Capacity(ulong param_1)

{
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    return (uint)*(byte *)(param_1 + 9) << 1;
  }
  return *(uint *)(param_1 + 0x13) & 0xfffffffe;
}

