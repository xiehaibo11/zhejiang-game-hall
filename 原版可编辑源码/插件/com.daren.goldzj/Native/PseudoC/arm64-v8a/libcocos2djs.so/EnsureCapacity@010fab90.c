
/* v8::internal::HashTable<v8::internal::EphemeronHashTable,
   v8::internal::EphemeronHashTableShape>::EnsureCapacity(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::EphemeronHashTable>, int, v8::internal::AllocationType) */

ulong * v8::internal::
        HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>::
        EnsureCapacity(long param_1,ulong *param_2,int param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong local_38;
  
  uVar4 = *param_2;
  iVar2 = *(int *)(uVar4 + 0xf) >> 1;
  param_3 = param_3 + (*(int *)(uVar4 + 7) >> 1);
  if (((iVar2 - param_3 == 0 || iVar2 < param_3) ||
      (iVar2 - param_3 >> 1 < *(int *)(uVar4 + 0xb) >> 1)) ||
     (puVar3 = param_2, iVar2 < param_3 + (param_3 >> 1))) {
    if (param_4 == '\x01') {
      bVar1 = true;
    }
    else if (*(int *)(uVar4 + 0xf) < 0x202) {
      bVar1 = false;
    }
    else {
      bVar1 = (*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0;
    }
    iVar2 = base::bits::RoundUpToPowerOfTwo32(param_3 + (param_3 >> 1));
    if (iVar2 < 5) {
      iVar2 = 4;
    }
    else if (0x3fffffd < iVar2) {
                    /* WARNING: Subroutine does not return */
      Heap::FatalProcessOutOfMemory((Heap *)(param_1 + 0x8850),"invalid table size");
    }
    puVar3 = (ulong *)Factory::NewFixedArrayWithMap<v8::internal::FixedArray>
                                (param_1,0x49,iVar2 * 2 + 3,bVar1);
    *(undefined4 *)(*puVar3 + 7) = 0;
    *(undefined4 *)(*puVar3 + 0xb) = 0;
    *(int *)(*puVar3 + 0xf) = iVar2 * 2;
    local_38 = *param_2;
    Rehash((HashTable<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape> *)
           &local_38,param_1 + 0x80,*puVar3);
  }
  return puVar3;
}

