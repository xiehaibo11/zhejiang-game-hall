
/* v8::internal::OrderedHashMap::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashMap>, int) */

void v8::internal::OrderedHashMap::Rehash(void)

{
  OrderedHashTable<v8::internal::OrderedHashMap,2>::Rehash();
  return;
}

