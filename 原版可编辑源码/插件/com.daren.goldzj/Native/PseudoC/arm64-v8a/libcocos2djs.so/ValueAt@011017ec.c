
/* v8::internal::Dictionary<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::ValueAt(v8::internal::Isolate const*,
   v8::internal::InternalIndex) */

long __thiscall
v8::internal::
Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::ValueAt
          (Dictionary<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,long param_1,int param_3)

{
  return (ulong)*(uint *)(*(long *)this + ((long)(param_3 * 8 + 0x10) | 7U)) + param_1;
}

