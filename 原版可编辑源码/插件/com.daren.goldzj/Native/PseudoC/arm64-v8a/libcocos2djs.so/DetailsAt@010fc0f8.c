
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::DetailsAt(v8::internal::InternalIndex) */

int __thiscall
v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::DetailsAt
          (Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this,
          long param_2)

{
  return *(int *)(*(long *)this + (param_2 * 0xc00000000 + 0x1c00000000 >> 0x20) + 7) >> 1;
}

