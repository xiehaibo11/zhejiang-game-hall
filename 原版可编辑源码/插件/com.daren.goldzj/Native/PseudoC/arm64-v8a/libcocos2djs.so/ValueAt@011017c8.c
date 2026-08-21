
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::ValueAt(v8::internal::InternalIndex) */

ulong __thiscall
v8::internal::
Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::ValueAt
          (Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,int param_2)

{
  return *(ulong *)this & 0xffffffff00000000 |
         (ulong)*(uint *)(*(ulong *)this + ((long)(param_2 * 8 + 0x10) | 7U));
}

