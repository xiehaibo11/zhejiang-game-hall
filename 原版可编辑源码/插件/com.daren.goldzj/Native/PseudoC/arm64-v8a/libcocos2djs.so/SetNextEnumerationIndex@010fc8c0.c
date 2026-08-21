
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::SetNextEnumerationIndex(int) */

void __thiscall
v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
::SetNextEnumerationIndex
          (BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
           *this,int param_1)

{
  *(int *)(*(long *)this + 0x13) = param_1 << 1;
  return;
}

