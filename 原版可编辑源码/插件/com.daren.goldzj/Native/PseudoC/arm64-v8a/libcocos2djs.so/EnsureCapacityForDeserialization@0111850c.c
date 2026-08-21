
/* v8::internal::StringTable::EnsureCapacityForDeserialization(v8::internal::Isolate*, int) */

void v8::internal::StringTable::EnsureCapacityForDeserialization(Isolate *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::EnsureCapacity
                     (param_1,param_1 + 0xfd0,param_2,0);
  *(undefined8 *)(param_1 + 0xfd0) = *puVar1;
  return;
}

