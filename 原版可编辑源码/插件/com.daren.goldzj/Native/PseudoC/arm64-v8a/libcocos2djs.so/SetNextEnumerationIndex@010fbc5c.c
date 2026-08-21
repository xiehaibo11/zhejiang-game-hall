
/* v8::internal::BaseNameDictionary<v8::internal::NameDictionary,
   v8::internal::NameDictionaryShape>::SetNextEnumerationIndex(int) */

void __thiscall
v8::internal::BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::
SetNextEnumerationIndex
          (BaseNameDictionary<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *this,
          int param_1)

{
  *(int *)(*(long *)this + 0x13) = param_1 << 1;
  return;
}

