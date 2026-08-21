
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::NextEnumerationIndex() */

int __thiscall
v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
::NextEnumerationIndex
          (BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
           *this)

{
  return *(int *)(*(long *)this + 0x13) >> 1;
}

