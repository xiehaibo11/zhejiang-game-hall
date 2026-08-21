
/* v8::internal::OrderedHashSet::Rehash(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::OrderedHashSet>, int) */

void v8::internal::OrderedHashSet::Rehash(void)

{
  OrderedHashTable<v8::internal::OrderedHashSet,1>::Rehash();
  return;
}

