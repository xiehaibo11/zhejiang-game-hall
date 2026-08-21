
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::Shrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>) */

void v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
     Shrink(undefined8 param_1,undefined8 param_2)

{
  HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Shrink
            (param_1,param_2,0);
  return;
}

