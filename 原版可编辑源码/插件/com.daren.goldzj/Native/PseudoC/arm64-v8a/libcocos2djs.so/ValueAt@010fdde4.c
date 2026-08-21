
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::ValueAt(v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
ValueAt(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
       int param_2)

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + (long)(param_2 * 4 + 0x18) + 7);
}

