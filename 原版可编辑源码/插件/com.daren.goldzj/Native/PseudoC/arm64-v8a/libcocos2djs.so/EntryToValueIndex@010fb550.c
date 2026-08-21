
/* v8::internal::ObjectHashTableBase<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::EntryToValueIndex(v8::internal::InternalIndex) */

int v8::internal::
    ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
    EntryToValueIndex(int param_1)

{
  return param_1 * 2 + 4;
}

