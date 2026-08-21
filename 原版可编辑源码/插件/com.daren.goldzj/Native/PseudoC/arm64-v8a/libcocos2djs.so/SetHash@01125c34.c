
/* v8::internal::OrderedNameDictionaryHandler::SetHash(v8::internal::HeapObject, int) */

void v8::internal::OrderedNameDictionaryHandler::SetHash(ulong param_1,int param_2)

{
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    *(int *)(param_1 + 3) = param_2;
    return;
  }
  *(int *)(param_1 + 7) = param_2 << 1;
  return;
}

