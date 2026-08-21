
/* v8::internal::OrderedNameDictionaryHandler::SetEntry(v8::internal::Isolate*,
   v8::internal::HeapObject, int, v8::internal::Object, v8::internal::Object,
   v8::internal::PropertyDetails) */

void v8::internal::OrderedNameDictionaryHandler::SetEntry(undefined8 param_1,ulong param_2)

{
  ulong local_18;
  
  local_18 = param_2;
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x94) {
    SmallOrderedNameDictionary::SetEntry((SmallOrderedNameDictionary *)&local_18);
  }
  else {
    OrderedNameDictionary::SetEntry((OrderedNameDictionary *)&local_18);
  }
  return;
}

