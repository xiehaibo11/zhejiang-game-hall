
/* v8::internal::OrderedNameDictionaryHandler::DeleteEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>, int) */

ulong * v8::internal::OrderedNameDictionaryHandler::DeleteEntry(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong local_28;
  
  local_28 = *param_2;
  if (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) == 0x94) {
    SmallOrderedNameDictionary::SetEntry((SmallOrderedNameDictionary *)&local_28);
    *(char *)(*param_2 + 7) = *(char *)(*param_2 + 7) + -1;
    *(char *)(*param_2 + 8) = *(char *)(*param_2 + 8) + '\x01';
    puVar1 = param_2;
    if (*(byte *)(*param_2 + 7) < *(byte *)(*param_2 + 9) >> 1) {
      puVar1 = (ulong *)SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Rehash
                                  (param_1,param_2);
      *(undefined4 *)(*puVar1 + 3) = *(undefined4 *)(*param_2 + 3);
    }
    return puVar1;
  }
  puVar1 = (ulong *)OrderedNameDictionary::DeleteEntry(param_1,param_2);
  return puVar1;
}

