
/* v8::internal::OrderedHashTableHandler<v8::internal::SmallOrderedHashMap,
   v8::internal::OrderedHashMap>::Delete(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::HeapObject>, v8::internal::Handle<v8::internal::Object>) */

void v8::internal::
     OrderedHashTableHandler<v8::internal::SmallOrderedHashMap,v8::internal::OrderedHashMap>::Delete
               (undefined8 param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (*(short *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x92) {
    SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Delete();
    return;
  }
  OrderedHashTable<v8::internal::OrderedHashMap,2>::Delete(param_1,uVar1,*param_3);
  return;
}

