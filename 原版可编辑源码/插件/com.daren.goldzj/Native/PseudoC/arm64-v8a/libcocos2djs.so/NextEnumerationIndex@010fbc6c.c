
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::NextEnumerationIndex() */

int __thiscall
v8::internal::BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
NextEnumerationIndex
          (BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this)

{
  return *(int *)(*(long *)this + 0x13) >> 1;
}

