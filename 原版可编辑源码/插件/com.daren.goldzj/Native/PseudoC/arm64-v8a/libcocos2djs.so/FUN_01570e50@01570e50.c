
void FUN_01570e50(long param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_3 != (ulong *)0x0) {
    uVar4 = *param_2;
    uVar3 = *param_3;
    *(int *)(uVar4 + 3) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar1 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar1 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 3,uVar3);
        uVar1 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar1 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 3,uVar3);
      }
    }
    if (v8::internal::FLAG_trace_creation_allocation_sites != '\0') {
      puVar2 = *(ulong **)(param_1 + 8);
      if (puVar2 != param_2) {
        if ((param_2 == (ulong *)0x0) || (puVar2 == (ulong *)0x0)) {
          uVar3 = *puVar2;
        }
        else {
          uVar3 = *puVar2;
          if (uVar3 == *param_2) goto LAB_01570f0c;
        }
        v8::internal::PrintF
                  ("*** Setting AllocationSite (%p, %p) transition_info %p\n",uVar3,*param_2,
                   *param_3);
        return;
      }
LAB_01570f0c:
      v8::internal::PrintF("*** Setting AllocationSite %p transition_info %p\n",*param_2,*param_3);
      return;
    }
  }
  return;
}

