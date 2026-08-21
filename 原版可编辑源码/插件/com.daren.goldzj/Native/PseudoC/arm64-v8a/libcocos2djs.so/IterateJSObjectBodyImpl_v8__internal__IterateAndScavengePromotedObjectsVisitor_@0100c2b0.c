
/* void 
   v8::internal::BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::IterateAndScavengePromotedObjectsVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, int, v8::internal::IterateAndScavengePromotedObjectsVisitor*) */

void v8::internal::BodyDescriptorBase::
     IterateJSObjectBodyImpl<v8::internal::IterateAndScavengePromotedObjectsVisitor>
               (long param_1,ulong param_2,int param_3,int param_4,long *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  MemoryChunk *pMVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if (*(short *)(param_1 + 7) == 0x421) {
    iVar3 = 0xc;
  }
  else {
    iVar3 = JSObject::GetHeaderSize(*(short *)(param_1 + 7),*(char *)(param_1 + 9) < '\0');
  }
  lVar6 = param_2 - 1;
  lVar8 = (ulong)*(byte *)(param_1 + 4) * 4;
  iVar7 = (int)lVar8;
  if (iVar3 < iVar7) {
    lVar9 = (long)iVar3;
    puVar1 = (uint *)(lVar6 + param_3);
    if (puVar1 < (uint *)(lVar6 + lVar9)) {
      pMVar5 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
      uVar2 = *puVar1;
      while( true ) {
        if ((uVar2 & 1) != 0) {
          uVar4 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar4 + 8) >> 3 & 1) == 0) {
            if (((char)param_5[2] != '\0') && ((*(byte *)(uVar4 + 8) >> 6 & 1) != 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        (pMVar5,(ulong)puVar1);
            }
          }
          else {
            iVar3 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                              ((Scavenger *)param_5[1],puVar1);
            if (iVar3 == 0) {
              if (*(long *)(pMVar5 + 0x70) == 0) {
                RememberedSet<(v8::internal::RememberedSetType)0>::
                Insert<(v8::internal::AccessMode)0>(pMVar5,(ulong)puVar1);
              }
              else {
                RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar5,(ulong)puVar1);
              }
            }
          }
        }
        puVar1 = puVar1 + 1;
        if ((uint *)(lVar6 + lVar9) <= puVar1) break;
        uVar2 = *puVar1;
      }
    }
    do {
      (**(code **)(*param_5 + 0x10))(param_5,param_2,param_2 + lVar9 + -1,param_2 + lVar9 + 3);
      lVar9 = lVar9 + 8;
      param_3 = iVar7;
    } while (lVar9 < lVar8);
  }
  puVar1 = (uint *)(lVar6 + param_3);
  if (puVar1 < (uint *)(lVar6 + param_4)) {
    pMVar5 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    uVar2 = *puVar1;
    while( true ) {
      if ((uVar2 & 1) != 0) {
        uVar4 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar4 + 8) >> 3 & 1) == 0) {
          if (((char)param_5[2] != '\0') && ((*(byte *)(uVar4 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar5,(ulong)puVar1);
          }
        }
        else {
          iVar3 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            ((Scavenger *)param_5[1],puVar1);
          if (iVar3 == 0) {
            if (*(long *)(pMVar5 + 0x70) == 0) {
              RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                        (pMVar5,(ulong)puVar1);
            }
            else {
              RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar5,(ulong)puVar1);
            }
          }
        }
      }
      puVar1 = puVar1 + 1;
      if ((uint *)(lVar6 + param_4) <= puVar1) break;
      uVar2 = *puVar1;
    }
  }
  return;
}

