
/* v8::internal::HashTable<v8::internal::ObjectHashTable,
   v8::internal::ObjectHashTableShape>::IndexToEntry(int) */

long v8::internal::HashTable<v8::internal::ObjectHashTable,v8::internal::ObjectHashTableShape>::
     IndexToEntry(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 2;
  if (-1 < (int)(param_1 - 3U)) {
    uVar1 = param_1 - 3U;
  }
  return (long)((ulong)uVar1 << 0x20) >> 0x21;
}

