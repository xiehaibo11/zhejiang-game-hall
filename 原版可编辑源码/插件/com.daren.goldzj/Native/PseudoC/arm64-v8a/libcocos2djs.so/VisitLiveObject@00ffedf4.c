
/* v8::internal::WeakListVisitor<v8::internal::Context>::VisitLiveObject(v8::internal::Heap*,
   v8::internal::Context, v8::internal::WeakObjectRetainer*) */

void v8::internal::WeakListVisitor<v8::internal::Context>::VisitLiveObject
               (long param_1,ulong param_2,undefined8 param_3)

{
  uint *puVar1;
  MemoryChunk *pMVar2;
  
  if (*(int *)(param_1 + 0x178) == 2) {
    puVar1 = (uint *)(param_2 + 0x417);
    pMVar2 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    if ((((uint)*(undefined8 *)
                 (((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffc0000) + 8) >> 6 & 1)
         != 0) &&
       ((((uint)*(ulong *)(pMVar2 + 8) >> 0xf & 1) != 0 || ((*(ulong *)(pMVar2 + 8) & 0x58) == 0))))
    {
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                (pMVar2,(ulong)puVar1);
    }
    puVar1 = (uint *)(param_2 + 0x41b);
    if ((((uint)*(undefined8 *)
                 (((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffc0000) + 8) >> 6 & 1)
         != 0) &&
       ((((uint)*(ulong *)(pMVar2 + 8) >> 0xf & 1) != 0 || ((*(ulong *)(pMVar2 + 8) & 0x58) == 0))))
    {
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                (pMVar2,(ulong)puVar1);
    }
    puVar1 = (uint *)(param_2 + 0x41f);
    if ((((uint)*(undefined8 *)
                 (((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffc0000) + 8) >> 6 & 1)
         != 0) &&
       ((((uint)*(ulong *)(pMVar2 + 8) >> 0xf & 1) != 0 || ((*(ulong *)(pMVar2 + 8) & 0x58) == 0))))
    {
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                (pMVar2,(ulong)puVar1);
    }
    DoWeakList<v8::internal::Code>(param_1,param_2,param_3,0x104);
    DoWeakList<v8::internal::Code>(param_1,param_2,param_3,0x105);
    return;
  }
  return;
}

