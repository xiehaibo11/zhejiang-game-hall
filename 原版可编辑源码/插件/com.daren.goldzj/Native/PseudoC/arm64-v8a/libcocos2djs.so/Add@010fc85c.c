
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::NameDictionary>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::PropertyDetails,
   v8::internal::InternalIndex*) */

void v8::internal::
     BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Add
               (undefined8 param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(*param_2 + 0x13);
  plVar2 = (long *)Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Add()
  ;
  *(uint *)(*plVar2 + 0x13) = iVar1 + 2U & 0xfffffffe;
  return;
}

