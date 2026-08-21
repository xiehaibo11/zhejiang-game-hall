
/* v8::internal::OrderedNameDictionaryHandler::DetailsAt(v8::internal::HeapObject, int) */

int v8::internal::OrderedNameDictionaryHandler::DetailsAt(ulong param_1,int param_2)

{
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    return *(int *)(param_1 + (long)(param_2 * 0xc) + 0x13) >> 1;
  }
  return *(int *)(param_1 + (long)(int)((param_2 * 4 + (*(uint *)(param_1 + 0x13) >> 1)) * 4 + 0x18)
                 + 7) >> 1;
}

