
/* v8::internal::OrderedNameDictionaryHandler::Hash(v8::internal::HeapObject) */

int v8::internal::OrderedNameDictionaryHandler::Hash(ulong param_1)

{
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    return *(int *)(param_1 + 3);
  }
  return *(int *)(param_1 + 7) >> 1;
}

