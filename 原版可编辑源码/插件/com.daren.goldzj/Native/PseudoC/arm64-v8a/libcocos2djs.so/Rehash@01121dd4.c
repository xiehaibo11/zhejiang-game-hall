
/* v8::internal::SmallOrderedNameDictionary::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedNameDictionary>, int) */

void v8::internal::SmallOrderedNameDictionary::Rehash(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Rehash();
  *(undefined4 *)(*plVar1 + 3) = *(undefined4 *)(*param_2 + 3);
  return;
}

