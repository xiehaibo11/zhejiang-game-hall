
/* v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::Hash() const */

int __thiscall
v8::internal::BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
::Hash(BaseNameDictionary<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *this)

{
  return *(int *)(*(long *)this + 0x17) >> 1;
}

