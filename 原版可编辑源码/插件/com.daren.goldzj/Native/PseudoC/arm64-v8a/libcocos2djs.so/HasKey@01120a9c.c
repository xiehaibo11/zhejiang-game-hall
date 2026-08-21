
/* v8::internal::OrderedHashTable<v8::internal::OrderedHashMap, 2>::HasKey(v8::internal::Isolate*,
   v8::internal::OrderedHashMap, v8::internal::Object) */

bool v8::internal::OrderedHashTable<v8::internal::OrderedHashMap,2>::HasKey
               (undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  
  local_18 = param_2;
  iVar1 = FindEntry((OrderedHashTable<v8::internal::OrderedHashMap,2> *)&local_18,param_1);
  return iVar1 != -1;
}

