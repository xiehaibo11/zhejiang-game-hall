
/* v8::internal::Dictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::DetailsAt(v8::internal::InternalIndex) */

int __thiscall
v8::internal::Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::
DetailsAt(Dictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this,
         int param_2)

{
  return *(int *)((*(ulong *)this & 0xffffffff00000000 |
                  (ulong)*(uint *)(*(ulong *)this + (long)(param_2 * 4 + 0x14) + 7)) + 7) >> 1;
}

