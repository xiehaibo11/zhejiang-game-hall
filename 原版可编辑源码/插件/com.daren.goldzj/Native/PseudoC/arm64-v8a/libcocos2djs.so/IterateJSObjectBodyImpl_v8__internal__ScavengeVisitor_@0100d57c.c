
/* void 
   v8::internal::BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::ScavengeVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, int, v8::internal::ScavengeVisitor*) */

void v8::internal::BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::ScavengeVisitor>
               (long param_1,long param_2,int param_3,int param_4,long *param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(short *)(param_1 + 7) == 0x421) {
    iVar2 = 0xc;
  }
  else {
    iVar2 = JSObject::GetHeaderSize(*(short *)(param_1 + 7),*(char *)(param_1 + 9) < '\0');
  }
  lVar4 = (ulong)*(byte *)(param_1 + 4) * 4;
  iVar3 = (int)lVar4;
  if (iVar2 < iVar3) {
    lVar5 = (long)iVar2;
    for (puVar1 = (uint *)(param_2 + -1 + (long)param_3); puVar1 < (uint *)(param_2 + -1 + lVar5);
        puVar1 = puVar1 + 1) {
      if (((*puVar1 & 1) != 0) &&
         ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000) + 8)
          & 0x18) != 0)) {
        Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                  ((Scavenger *)param_5[1],puVar1);
      }
    }
    do {
      (**(code **)(*param_5 + 0x10))(param_5,param_2,param_2 + lVar5 + -1,param_2 + lVar5 + 3);
      lVar5 = lVar5 + 8;
      param_3 = iVar3;
    } while (lVar5 < lVar4);
  }
  for (puVar1 = (uint *)(param_2 + -1 + (long)param_3);
      puVar1 < (uint *)(param_2 + -1 + (long)param_4); puVar1 = puVar1 + 1) {
    if (((*puVar1 & 1) != 0) &&
       ((*(byte *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1 & 0xfffffffffffc0000) + 8) &
        0x18) != 0)) {
      Scavenger::ScavengeObject<v8::internal::CompressedHeapObjectSlot>
                ((Scavenger *)param_5[1],puVar1);
    }
  }
  return;
}

