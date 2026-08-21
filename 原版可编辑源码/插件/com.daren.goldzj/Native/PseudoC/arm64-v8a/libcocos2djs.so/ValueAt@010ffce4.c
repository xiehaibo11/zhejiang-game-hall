
/* v8::internal::Dictionary<v8::internal::NumberDictionary,
   v8::internal::NumberDictionaryShape>::ValueAt(v8::internal::Isolate const*,
   v8::internal::InternalIndex) */

long __thiscall
v8::internal::Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::
ValueAt(Dictionary<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *this,
       long param_1,long param_3)

{
  return (ulong)*(uint *)(*(long *)this + (param_3 * 0xc00000000 + 0x1400000000 >> 0x20) + 7) +
         param_1;
}

