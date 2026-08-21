
/* v8::internal::Dictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::ValueAt(v8::internal::Isolate const*,
   v8::internal::InternalIndex) */

long __thiscall
v8::internal::Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::ValueAt
          (Dictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this,
          long param_1,long param_3)

{
  return (ulong)*(uint *)(*(long *)this + (param_3 * 0xc00000000 + 0x1800000000 >> 0x20) + 7) +
         param_1;
}

