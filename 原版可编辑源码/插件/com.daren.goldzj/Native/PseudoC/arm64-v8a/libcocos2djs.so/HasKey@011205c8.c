
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashSet, 1>::HasKey(v8::internal::Isolate*,
   v8::internal::OrderedHashSet, v8::internal::Object) */

bool v8::internal::OrderedHashTable<v8::internal::OrderedHashSet,1>::HasKey
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = param_2;
  iVar1 = FindEntry((OrderedHashTable<v8::internal::OrderedHashSet,1> *)&local_18,param_1);
  return iVar1 != -1;
}

