
void FUN_010a95c0(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  pIVar2 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar5 = (ulong)pIVar2 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar2 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar2);
    }
    *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar2 | 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  if ((uint)param_3 < (*(int *)(uVar5 + 3) >> 1) - 2U) {
    uVar6 = *(ulong *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20) + 0xa8);
    lVar1 = uVar5 + (long)(int)((uint)param_3 * 4 + 8);
    *(int *)(lVar1 + 7) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar5,lVar1,uVar6);
        uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar5,lVar1,uVar6);
        return;
      }
    }
    return;
  }
  FUN_010a72a8(param_2,puVar3,param_3);
  return;
}

