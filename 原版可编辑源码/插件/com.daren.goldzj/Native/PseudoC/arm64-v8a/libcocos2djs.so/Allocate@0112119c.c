
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Allocate(v8::internal::Isolate*,
   int, v8::internal::AllocationType) */

void v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Allocate(void)

{
  Factory::NewSmallOrderedHashSet();
  return;
}

