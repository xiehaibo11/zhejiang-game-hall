
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Allocate(v8::internal::Isolate*,
   int, v8::internal::AllocationType) */

void v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Allocate(void)

{
  Factory::NewSmallOrderedNameDictionary();
  return;
}

