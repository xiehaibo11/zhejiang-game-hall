
/* v8::internal::SmallOrderedHashMap::Delete(v8::internal::Isolate*,
   v8::internal::SmallOrderedHashMap, v8::internal::Object) */

void v8::internal::SmallOrderedHashMap::Delete(void)

{
  SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::Delete();
  return;
}

