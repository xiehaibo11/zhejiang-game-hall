
/* v8::internal::SmallOrderedHashSet::Delete(v8::internal::Isolate*,
   v8::internal::SmallOrderedHashSet, v8::internal::Object) */

void v8::internal::SmallOrderedHashSet::Delete(void)

{
  SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Delete();
  return;
}

