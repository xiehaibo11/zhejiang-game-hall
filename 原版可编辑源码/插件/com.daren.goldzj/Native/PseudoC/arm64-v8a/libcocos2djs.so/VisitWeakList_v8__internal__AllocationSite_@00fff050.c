
/* v8::internal::Object
   v8::internal::VisitWeakList<v8::internal::AllocationSite>(v8::internal::Heap*,
   v8::internal::Object, v8::internal::WeakObjectRetainer*) */

ulong v8::internal::VisitWeakList<v8::internal::AllocationSite>
                (long param_1,ulong param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = *(ulong *)(param_1 + -0x87b0);
  uVar4 = (uint)uVar5;
  if (*(int *)(param_1 + 0x178) == 2) {
    bVar2 = *(char *)(*(long *)(param_1 + 0x800) + 0x4e) != '\0';
  }
  else {
    bVar2 = false;
  }
  uVar3 = uVar5;
  if ((uint)param_2 != uVar4) {
    uVar6 = uVar5;
    uVar8 = 0;
    do {
      while( true ) {
        uVar3 = (**(code **)(*param_3 + 0x10))(param_3,param_2);
        uVar1 = *(uint *)(param_2 + 0x17);
        param_2 = param_2 & 0xffffffff00000000 | (ulong)uVar1;
        uVar7 = uVar8;
        if ((int)uVar3 != 0) break;
LAB_00fff0bc:
        uVar3 = uVar6;
        uVar8 = uVar7;
        if (uVar1 == uVar4) goto LAB_00fff188;
      }
      uVar7 = uVar3;
      if ((uint)uVar6 != uVar4) {
        *(int *)(uVar8 + 0x17) = (int)uVar3;
        if ((((uVar3 & 1) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
           ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar8,uVar8 + 0x17,uVar3);
        }
        if ((bVar2) && (((uint)*(undefined8 *)((uVar3 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0)) {
          uVar3 = *(ulong *)((MemoryChunk *)(uVar8 & 0xfffffffffffc0000) + 8);
          if ((((uint)uVar3 >> 0xf & 1) != 0) || ((uVar3 & 0x58) == 0)) {
            RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                      ((MemoryChunk *)(uVar8 & 0xfffffffffffc0000),uVar8 + 0x17);
          }
        }
        goto LAB_00fff0bc;
      }
      uVar6 = uVar3;
      uVar8 = uVar3;
    } while (uVar1 != uVar4);
LAB_00fff188:
    if ((((int)uVar7 != 0) && (*(uint *)(uVar7 + 0x17) = uVar4, (uVar5 & 1) != 0)) &&
       (((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0 &&
        ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)))) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x17,uVar5);
    }
  }
  return uVar3;
}

