
/* v8::internal::SmallOrderedHashMap::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashMap>, int) */

void v8::internal::SmallOrderedHashMap::Rehash(void)

{
  SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Rehash();
  return;
}

