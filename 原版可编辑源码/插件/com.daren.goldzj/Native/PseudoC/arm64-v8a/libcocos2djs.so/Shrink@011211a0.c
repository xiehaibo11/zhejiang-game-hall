
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Shrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedHashSet>) */

long * v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::Shrink
                 (undefined8 param_1,long *param_2)

{
  if (*(byte *)(*param_2 + 3) < *(byte *)(*param_2 + 5) >> 1) {
    param_2 = (long *)Rehash();
  }
  return param_2;
}

