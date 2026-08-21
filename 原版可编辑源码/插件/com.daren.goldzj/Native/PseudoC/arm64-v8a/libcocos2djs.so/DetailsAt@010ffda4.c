
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::DetailsAt(v8::internal::InternalIndex) */

int __thiscall
v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
DetailsAt(Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
         long param_2)

{
  return *(int *)(*(long *)this + (param_2 * 0xc00000000 + 0x1800000000 >> 0x20) + 7) >> 1;
}

