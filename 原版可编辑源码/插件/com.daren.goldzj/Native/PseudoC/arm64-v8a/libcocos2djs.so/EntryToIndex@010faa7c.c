
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::EntryToIndex(v8::internal::InternalIndex) */

int v8::internal::HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
    ::EntryToIndex(int param_1)

{
  return param_1 * 2 + 3;
}

