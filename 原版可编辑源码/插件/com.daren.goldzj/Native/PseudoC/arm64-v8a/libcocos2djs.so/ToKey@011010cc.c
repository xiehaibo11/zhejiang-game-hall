
/* v8::internal::HashTable<v8::internal::SimpleNumberDictionary,
   v8::internal::SimpleNumberDictionaryShape>::ToKey(v8::internal::Isolate*,
   v8::internal::InternalIndex, v8::internal::Object*) */

undefined8 __thiscall
v8::internal::
HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::ToKey
          (HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
           *this,long param_1,int param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  
  lVar1 = (ulong)*(uint *)(*(long *)this + (long)(param_3 * 8 + 0xc) + 7) + param_1;
  iVar2 = (int)lVar1;
  if (iVar2 == *(int *)(param_1 + 0xa8)) {
    return 0;
  }
  if (iVar2 == *(int *)(param_1 + 0xa0)) {
    return 0;
  }
  *param_4 = lVar1;
  return 1;
}

