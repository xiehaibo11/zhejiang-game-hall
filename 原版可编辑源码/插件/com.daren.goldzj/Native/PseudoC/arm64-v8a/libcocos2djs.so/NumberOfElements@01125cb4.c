
/* v8::internal::OrderedNameDictionaryHandler::NumberOfElements(v8::internal::HeapObject) */

uint v8::internal::OrderedNameDictionaryHandler::NumberOfElements(ulong param_1)

{
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    return (uint)*(byte *)(param_1 + 7);
  }
  return *(int *)(param_1 + 0xb) >> 1;
}

