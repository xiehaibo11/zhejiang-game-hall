
/* void 
   v8::internal::PrototypeInfo::BodyDescriptor::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::IterateAndScavengePromotedObjectsVisitor*) */

void v8::internal::PrototypeInfo::BodyDescriptor::
     IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
               (undefined8 param_1,ulong param_2,int param_3,long *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  MemoryChunk *pMVar7;
  
  puVar1 = (uint *)(param_2 + 3);
  puVar2 = (uint *)(param_2 + 0x13);
  if (puVar1 < puVar2) {
    pMVar7 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    uVar4 = *puVar1;
    while( true ) {
      if ((uVar4 & 1) != 0) {
        uVar6 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar6 + 8) >> 3 & 1) == 0) {
          if (((char)param_4[2] != '\0') && ((*(byte *)(uVar6 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar7,(ulong)puVar1);
          }
        }
        else {
          iVar5 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            ((Scavenger *)param_4[1],puVar1);
          if (iVar5 == 0) {
            if (*(long *)(pMVar7 + 0x70) == 0) {
              RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                        (pMVar7,(ulong)puVar1);
            }
            else {
              RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar7,(ulong)puVar1);
            }
          }
        }
      }
      puVar1 = puVar1 + 1;
      if (puVar2 <= puVar1) break;
      uVar4 = *puVar1;
    }
  }
  puVar3 = (uint *)(param_2 + 0x17);
  (**(code **)(*param_4 + 0x18))(param_4,param_2,puVar2,puVar3);
  puVar1 = (uint *)((param_2 - 1) + (long)param_3);
  if (puVar3 < puVar1) {
    pMVar7 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    uVar4 = *puVar3;
    while( true ) {
      if ((uVar4 & 1) != 0) {
        uVar6 = (ulong)puVar3 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar6 + 8) >> 3 & 1) == 0) {
          if (((char)param_4[2] != '\0') && ((*(byte *)(uVar6 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar7,(ulong)puVar3);
          }
        }
        else {
          iVar5 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            ((Scavenger *)param_4[1],puVar3);
          if (iVar5 == 0) {
            if (*(long *)(pMVar7 + 0x70) == 0) {
              RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                        (pMVar7,(ulong)puVar3);
            }
            else {
              RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar7,(ulong)puVar3);
            }
          }
        }
      }
      puVar3 = puVar3 + 1;
      if (puVar1 <= puVar3) break;
      uVar4 = *puVar3;
    }
  }
  return;
}

