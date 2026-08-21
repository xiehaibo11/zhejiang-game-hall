
/* void 
   v8::internal::WeakListVisitor<v8::internal::Context>::DoWeakList<v8::internal::Code>(v8::internal::Heap*,
   v8::internal::Context, v8::internal::WeakObjectRetainer*, int) */

void v8::internal::WeakListVisitor<v8::internal::Context>::DoWeakList<v8::internal::Code>
               (long param_1,ulong param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = param_2 + (long)(param_4 << 2);
  uVar2 = lVar1 + 7;
  uVar3 = VisitWeakList<v8::internal::Code>
                    (param_1,param_2 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + 7));
  *(int *)(lVar1 + 7) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar4 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(param_2,uVar2,uVar3);
      uVar4 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(param_2,uVar2,uVar3);
    }
  }
  if (((*(int *)(param_1 + 0x178) == 2) && (*(char *)(*(long *)(param_1 + 0x800) + 0x4e) != '\0'))
     && (((uint)*(undefined8 *)((uVar3 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0)) {
    uVar3 = *(ulong *)((MemoryChunk *)(param_2 & 0xfffffffffffc0000) + 8);
    if ((((uint)uVar3 >> 0xf & 1) != 0) || ((uVar3 & 0x58) == 0)) {
      RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                ((MemoryChunk *)(param_2 & 0xfffffffffffc0000),uVar2);
      return;
    }
  }
  return;
}

