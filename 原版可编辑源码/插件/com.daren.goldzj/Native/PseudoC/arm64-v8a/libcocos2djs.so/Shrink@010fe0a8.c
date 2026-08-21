
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::Shrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>) */

void v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
     Shrink(undefined8 param_1,undefined8 param_2)

{
  HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Shrink
            (param_1,param_2,0);
  return;
}

