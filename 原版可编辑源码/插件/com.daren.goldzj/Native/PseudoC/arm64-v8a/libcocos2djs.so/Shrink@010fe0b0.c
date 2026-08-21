
/* v8::internal::HashTable<v8::internal::GlobalDictionary,
   v8::internal::GlobalDictionaryShape>::Shrink(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::GlobalDictionary>, int) */

ulong * v8::internal::HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape>
        ::Shrink(long param_1,ulong *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulong *puVar5;
  ulong local_28;
  
  iVar2 = *(int *)(*param_2 + 0xf);
  iVar1 = *(int *)(*param_2 + 7) >> 1;
  puVar5 = param_2;
  if (iVar1 <= iVar2 >> 3) {
    iVar1 = iVar1 + param_3;
    iVar4 = base::bits::RoundUpToPowerOfTwo32(iVar1 + (iVar1 >> 1));
    if (iVar4 < 5) {
      iVar4 = 4;
    }
    if ((0xf < iVar4) && (iVar4 != iVar2 >> 1)) {
      if (iVar1 < 0x101) {
        bVar3 = false;
      }
      else {
        bVar3 = (*(byte *)((*param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0;
      }
      if (0x7fffff8 < iVar4) {
                    /* WARNING: Subroutine does not return */
        Heap::FatalProcessOutOfMemory((Heap *)(param_1 + 0x8850),"invalid table size");
      }
      puVar5 = (ulong *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                                  (param_1,0x2e,iVar4 + 5,bVar3);
      *(undefined4 *)(*puVar5 + 7) = 0;
      *(undefined4 *)(*puVar5 + 0xb) = 0;
      *(int *)(*puVar5 + 0xf) = iVar4 << 1;
      local_28 = *param_2;
      Rehash((HashTable<v8::internal::GlobalDictionary,v8::internal::GlobalDictionaryShape> *)
             &local_28,param_1 + 0x80,*puVar5);
    }
  }
  return puVar5;
}

