
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::AddNoUpdateNextEnumerationIndex(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails,
   v8::internal::InternalIndex*) */

void v8::internal::
     BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
     AddNoUpdateNextEnumerationIndex(void)

{
  Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Add();
  return;
}

