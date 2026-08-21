
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::AddNoUpdateNextEnumerationIndex(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails,
   v8::internal::InternalIndex*) */

void v8::internal::
     BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
     AddNoUpdateNextEnumerationIndex(void)

{
  Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Add();
  return;
}

