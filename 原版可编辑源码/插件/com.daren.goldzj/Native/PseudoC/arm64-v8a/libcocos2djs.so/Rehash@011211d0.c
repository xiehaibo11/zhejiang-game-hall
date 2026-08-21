
/* v8::internal::SmallOrderedHashSet::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashSet>, int) */

void v8::internal::SmallOrderedHashSet::Rehash(void)

{
  SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Rehash();
  return;
}

