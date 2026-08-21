
/* void 
   v8::internal::FeedbackVector::BodyDescriptor::IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::IterateAndScavengePromotedObjectsVisitor*) */

void v8::internal::FeedbackVector::BodyDescriptor::
     IterateBody<v8::internal::IterateAndScavengePromotedObjectsVisitor>
               (undefined8 param_1,ulong param_2,int param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint *puVar4;
  MemoryChunk *pMVar5;
  uint *puVar6;
  
  (**(code **)(*param_4 + 0x10))(param_4,param_2,param_2 + 3,param_2 + 7);
  (**(code **)(*param_4 + 0x18))(param_4,param_2,param_2 + 7,param_2 + 0xb);
  (**(code **)(*param_4 + 0x10))(param_4,param_2,param_2 + 0xb,param_2 + 0xf);
  puVar4 = (uint *)(param_2 + 0x1f);
  puVar6 = (uint *)(param_2 + (long)param_3 + -1);
  if (puVar4 < puVar6) {
    pMVar5 = (MemoryChunk *)(param_2 & 0xfffffffffffc0000);
    do {
      uVar1 = *puVar4;
      if ((uVar1 != 3) && ((uVar1 & 1) != 0)) {
        uVar3 = (ulong)uVar1 & 0xfffffffffffc0000 | (ulong)puVar4 & 0xffffffff00000000;
        if ((*(byte *)(uVar3 + 8) >> 3 & 1) == 0) {
          if (((char)param_4[2] != '\0') && ((*(byte *)(uVar3 + 8) >> 6 & 1) != 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      (pMVar5,(ulong)puVar4);
          }
        }
        else {
          iVar2 = Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                            ((Scavenger *)param_4[1],puVar4);
          if (iVar2 == 0) {
            if (*(long *)(pMVar5 + 0x70) == 0) {
              RememberedSet<(v8::internal::RememberedSetType)0>::Insert<(v8::internal::AccessMode)0>
                        (pMVar5,(ulong)puVar4);
            }
            else {
              RememberedSetSweeping::Insert<(v8::internal::AccessMode)0>(pMVar5,(ulong)puVar4);
            }
          }
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 < puVar6);
  }
  return;
}

