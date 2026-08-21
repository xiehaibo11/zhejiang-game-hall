
/* void v8::internal::SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4, 24, 24>,
   v8::internal::FixedBodyDescriptor<24, 72, 72>
   >::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::IterateAndScavengePromotedObjectsVisitor*) */

void v8::internal::
     SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<24,72,72>>
     ::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
               (undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  MemoryChunk *pMVar6;
  
  puVar1 = (uint *)(param_2 + 3);
  puVar2 = (uint *)(param_2 + 0x17);
  if (puVar1 < puVar2) {
    pMVar6 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    uVar3 = *puVar1;
    while( true ) {
      if ((uVar3 & 1) != 0) {
        uVar5 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar5 + 8) >> 3 & 1) == 0) {
          if ((*(char *)(param_4 + 0x10) != '\0') && ((*(byte *)(uVar5 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar6,(ulong)puVar1);
          }
        }
        else {
          iVar4 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            (*(Scavenger **)(param_4 + 8),puVar1);
          if (iVar4 == 0) {
            if (*(long *)(pMVar6 + 0x70) == 0) {
              RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                        (pMVar6,(ulong)puVar1);
            }
            else {
              RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar6,(ulong)puVar1);
            }
          }
        }
      }
      puVar1 = puVar1 + 1;
      if (puVar2 <= puVar1) break;
      uVar3 = *puVar1;
    }
  }
  if (puVar2 < (uint *)(param_2 + 0x47)) {
    pMVar6 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    uVar3 = *puVar2;
    while( true ) {
      if ((uVar3 & 1) != 0) {
        uVar5 = (ulong)puVar2 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar5 + 8) >> 3 & 1) == 0) {
          if ((*(char *)(param_4 + 0x10) != '\0') && ((*(byte *)(uVar5 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar6,(ulong)puVar2);
          }
        }
        else {
          iVar4 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            (*(Scavenger **)(param_4 + 8),puVar2);
          if (iVar4 == 0) {
            if (*(long *)(pMVar6 + 0x70) == 0) {
              RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                        (pMVar6,(ulong)puVar2);
            }
            else {
              RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar6,(ulong)puVar2);
            }
          }
        }
      }
      puVar2 = puVar2 + 1;
      if ((uint *)(param_2 + 0x47) <= puVar2) break;
      uVar3 = *puVar2;
    }
  }
  return;
}

