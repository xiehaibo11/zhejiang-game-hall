
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::EntryToIndex(v8::internal::InternalIndex) */

int v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
    EntryToIndex(int param_1)

{
  return param_1 * 2 + 3;
}

