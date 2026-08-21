
/* v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Shrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SmallOrderedNameDictionary>) */

long * v8::internal::SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::Shrink
                 (undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  if (*(byte *)(*param_2 + 7) < *(byte *)(*param_2 + 9) >> 1) {
    plVar1 = (long *)Rehash(param_1,param_2);
    *(undefined4 *)(*plVar1 + 3) = *(undefined4 *)(*param_2 + 3);
  }
  return plVar1;
}

