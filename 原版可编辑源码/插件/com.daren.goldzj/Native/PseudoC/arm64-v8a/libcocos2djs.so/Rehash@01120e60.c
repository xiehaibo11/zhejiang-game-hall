
/* v8::internal::OrderedNameDictionary::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedNameDictionary>, int) */

void v8::internal::OrderedNameDictionary::Rehash(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)OrderedHashTable<v8::internal::OrderedNameDictionary,3>::Rehash();
  if (plVar1 != (long *)0x0) {
    *(uint *)(*plVar1 + 7) = *(uint *)(*param_2 + 7) & 0xfffffffe;
  }
  return;
}

