
/* void v8::internal::CallIterateBody::apply<v8::internal::FlexibleBodyDescriptor<8>,
   v8::internal::IterateAndScavengePromotedObjectsVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::IterateAndScavengePromotedObjectsVisitor*) */

void v8::internal::CallIterateBody::
     apply<v8::internal::FlexibleBodyDescriptor<8>,v8::internal::IterateAndScavengePromotedObjectsVisitor>
               (undefined8 param_1,ulong param_2,int param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  MemoryChunk *pMVar5;
  uint *puVar6;
  
  puVar1 = (uint *)(param_2 + 7);
  puVar6 = (uint *)(param_2 + (long)param_3 + -1);
  if (puVar1 < puVar6) {
    pMVar5 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    uVar2 = *puVar1;
    while( true ) {
      if ((uVar2 & 1) != 0) {
        uVar4 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar4 + 8) >> 3 & 1) == 0) {
          if ((*(char *)(param_4 + 0x10) != '\0') && ((*(byte *)(uVar4 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar5,(ulong)puVar1);
          }
        }
        else {
          iVar3 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            (*(Scavenger **)(param_4 + 8),puVar1);
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
      if (puVar6 <= puVar1) break;
      uVar2 = *puVar1;
    }
  }
  return;
}

