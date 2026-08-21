
/* v8::internal::OrderedHashTableHandler<v8::internal::SmallOrderedHashMap,
   v8::internal::OrderedHashMap>::HasKey(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>, v8::internal::Handle<v8::internal::Object>) */

bool v8::internal::
     OrderedHashTableHandler<v8::internal::SmallOrderedHashMap,v8::internal::OrderedHashMap>::HasKey
               (undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  bool bVar1;
  int iVar2;
  ulong local_18;
  
  local_18 = *param_2;
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x92) {
    iVar2 = SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::FindEntry
                      ((SmallOrderedHashTable<v8::internal::SmallOrderedHashMap> *)&local_18,param_1
                       ,*param_3);
    bVar1 = iVar2 == 0xff;
  }
  else {
    iVar2 = OrderedHashTable<v8::internal::OrderedHashMap,2>::FindEntry
                      ((OrderedHashTable<v8::internal::OrderedHashMap,2> *)&local_18,param_1,
                       *param_3);
    bVar1 = iVar2 == -1;
  }
  return !bVar1;
}

