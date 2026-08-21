
/* v8::internal::SmallOrderedHashMap::HasKey(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

bool __thiscall
v8::internal::SmallOrderedHashMap::HasKey
          (SmallOrderedHashMap *this,undefined8 param_1,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::FindEntry
                    ((SmallOrderedHashTable<v8::internal::SmallOrderedHashMap> *)this,param_1,
                     *param_3);
  return iVar1 != 0xff;
}

