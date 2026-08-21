
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Allocate(v8::internal::Isolate*,
   int, v8::internal::AllocationType) */

void v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Allocate(void)

{
  Factory::NewSmallOrderedHashMap();
  return;
}

