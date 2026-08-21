
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::ValueAt(v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
ValueAt(Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
       long param_2)

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + (param_2 * 0xc00000000 + 0x1400000000 >> 0x20) + 7);
}

