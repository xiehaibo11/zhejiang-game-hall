
/* v8::internal::SmallOrderedNameDictionary::DeleteEntry(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedNameDictionary>, int) */

long * v8::internal::SmallOrderedNameDictionary::DeleteEntry(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long local_28;
  
  local_28 = *param_2;
  SetEntry((SmallOrderedNameDictionary *)&local_28);
  *(char *)(*param_2 + 7) = *(char *)(*param_2 + 7) + -1;
  *(char *)(*param_2 + 8) = *(char *)(*param_2 + 8) + '\x01';
  plVar1 = param_2;
  if (*(byte *)(*param_2 + 7) < *(byte *)(*param_2 + 9) >> 1) {
    plVar1 = (long *)SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Rehash
                               (param_1,param_2);
    *(undefined4 *)(*plVar1 + 3) = *(undefined4 *)(*param_2 + 3);
  }
  return plVar1;
}

