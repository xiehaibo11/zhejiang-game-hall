
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::ValueAt(v8::internal::Isolate const*,
   v8::internal::InternalIndex) */

long __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
ValueAt(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
       long param_1,int param_3)

{
  return (ulong)*(uint *)(*(long *)this + (long)(param_3 * 4 + 0x18) + 7) + param_1;
}

