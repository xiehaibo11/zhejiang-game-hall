
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::DetailsAtPut(v8::internal::Isolate*,
   v8::internal::InternalIndex, v8::internal::PropertyDetails) */

void __thiscall
v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
DetailsAtPut(Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
            undefined8 param_2,long param_3,int param_4)

{
  *(int *)(*(long *)this + (param_3 * 0xc00000000 + 0x1800000000 >> 0x20) + 7) = param_4 << 1;
  return;
}

