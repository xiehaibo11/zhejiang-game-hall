
/* v8::internal::OrderedNameDictionaryHandler::KeyAt(v8::internal::HeapObject, int) */

ulong v8::internal::OrderedNameDictionaryHandler::KeyAt(ulong param_1,int param_2)

{
  uint uVar1;
  
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    uVar1 = *(uint *)(param_1 + (long)(param_2 * 0xc) + 0xb);
  }
  else {
    uVar1 = *(uint *)(param_1 + (long)(int)((param_2 * 4 + (*(uint *)(param_1 + 0x13) >> 1)) * 4 +
                                           0x10) + 7);
  }
  return param_1 & 0xffffffff00000000 | (ulong)uVar1;
}

