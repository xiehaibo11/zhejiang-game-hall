
/* v8::internal::ScavengerCollector::MergeSurvivingNewLargeObjects(std::__ndk1::unordered_map<v8::internal::HeapObject,
   v8::internal::Map, v8::internal::Object::Hasher, std::__ndk1::equal_to<v8::internal::HeapObject>,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::HeapObject const, v8::internal::Map> > >
   const&) */

void __thiscall
v8::internal::ScavengerCollector::MergeSurvivingNewLargeObjects
          (ScavengerCollector *this,unordered_map *param_1)

{
  long *plVar1;
  long local_30;
  long local_28;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    do {
      local_30 = plVar1[2];
      local_28 = plVar1[3];
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
      ::
      __emplace_unique_key_args<v8::internal::HeapObject,std::__ndk1::pair<v8::internal::HeapObject,v8::internal::Map>&>
                ((__hash_table<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::__unordered_map_hasher<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,v8::internal::Object::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::HeapObject,std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>,std::__ndk1::equal_to<v8::internal::HeapObject>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::HeapObject,v8::internal::Map>>>
                  *)(this + 0x20),(HeapObject *)&local_30,(pair *)&local_30);
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}

