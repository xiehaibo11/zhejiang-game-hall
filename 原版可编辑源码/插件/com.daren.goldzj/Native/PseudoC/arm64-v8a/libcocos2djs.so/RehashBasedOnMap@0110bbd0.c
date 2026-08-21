
/* v8::internal::HeapObject::RehashBasedOnMap(v8::internal::ReadOnlyRoots) */

void v8::internal::HeapObject::RehashBasedOnMap(ulong *param_1)

{
  short sVar1;
  ulong local_18;
  
  local_18 = *param_1;
  sVar1 = *(short *)((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7);
  switch(sVar1) {
  case 0x79:
    HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>::Rehash
              ((HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *)
               &local_18);
    break;
  case 0x7a:
    HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape>::Rehash
              ((HashTable<v8::internal::NameDictionary,v8::internal::NameDictionaryShape> *)
               &local_18);
    break;
  case 0x7b:
    HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape>::Rehash
              ((HashTable<v8::internal::NumberDictionary,v8::internal::NumberDictionaryShape> *)
               &local_18);
    break;
  case 0x7f:
    HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>::
    Rehash((HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
            *)&local_18);
    break;
  case 0x80:
    HashTable<v8::internal::StringTable,v8::internal::StringTableShape>::Rehash
              ((HashTable<v8::internal::StringTable,v8::internal::StringTableShape> *)&local_18);
    break;
  case 0x92:
  case 0x93:
  case 0x94:
    break;
  case 0x98:
    TransitionArray::Sort((TransitionArray *)&local_18);
    break;
  case 0x9c:
    DescriptorArray::Sort((DescriptorArray *)&local_18);
    break;
  default:
    if ((sVar1 == 0) || (sVar1 == 8)) {
      if ((*(byte *)(local_18 + 3) & 1) == 0) {
        return;
      }
      String::ComputeAndSetHash((String *)&local_18);
      return;
    }
  case 0x77:
  case 0x78:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x8f:
  case 0x90:
  case 0x91:
  case 0x95:
  case 0x96:
  case 0x97:
  case 0x99:
  case 0x9a:
  case 0x9b:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return;
}

