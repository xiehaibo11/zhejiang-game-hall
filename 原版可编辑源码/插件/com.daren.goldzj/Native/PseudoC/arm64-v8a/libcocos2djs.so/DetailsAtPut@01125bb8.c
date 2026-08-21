
/* v8::internal::OrderedNameDictionaryHandler::DetailsAtPut(v8::internal::HeapObject, int,
   v8::internal::PropertyDetails) */

void v8::internal::OrderedNameDictionaryHandler::DetailsAtPut(ulong param_1,int param_2,int param_3)

{
  long lVar1;
  
  if (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x94) {
    param_2 = param_2 * 0xc;
    lVar1 = 0x13;
  }
  else {
    param_2 = (param_2 * 4 + (*(uint *)(param_1 + 0x13) >> 1)) * 4 + 0x18;
    lVar1 = 7;
  }
  *(int *)(lVar1 + param_1 + (long)param_2) = param_3 << 1;
  return;
}

