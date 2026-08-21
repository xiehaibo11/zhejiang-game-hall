
void FUN_010a62fc(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_28;
  
  pIVar3 = (Isolate *)(*param_2 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar3 | (ulong)*(uint *)(*param_2 + 7);
  if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar8);
    uVar8 = *puVar4;
  }
  uVar2 = (*(int *)(uVar8 + 3) >> 1) - 2;
  uVar6 = (uint)param_3;
  if (uVar6 < uVar2) {
    param_3 = 0xffffffffffffffff;
  }
  local_28 = param_3;
  FUN_010a6df4(param_2,puVar4,&local_28);
  FUN_010a72a8(param_2,puVar4,local_28);
  if (uVar6 < uVar2) {
    uVar8 = *puVar4;
    uVar7 = *(ulong *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20) + 0xa8);
    lVar1 = uVar8 + (long)(int)(uVar6 * 4 + 8);
    *(int *)(lVar1 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar8,lVar1,uVar7);
        uVar5 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar7);
        return;
      }
    }
  }
  return;
}

