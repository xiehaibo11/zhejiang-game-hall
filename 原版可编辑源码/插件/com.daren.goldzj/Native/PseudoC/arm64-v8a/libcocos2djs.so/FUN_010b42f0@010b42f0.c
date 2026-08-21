
ulong * FUN_010b42f0(undefined8 param_1,Factory *param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  
  puVar2 = (ulong *)v8::internal::Factory::NewFixedArray(param_2,param_4,0);
  if (param_4 != 0) {
    lVar8 = 0;
    iVar9 = 0;
    do {
      uVar5 = *param_3;
      pIVar3 = (Isolate *)(uVar5 & 0xffffffff00000000);
      uVar5 = (ulong)*(ushort *)(*(long *)(uVar5 + 0x27) + (ulong)*(uint *)(uVar5 + 0x2f) + lVar8)
              << 1;
      if (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar3 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
          puVar4 = (ulong *)v8::internal::HandleScope::Extend(pIVar3);
        }
        *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar5;
      }
      else {
        puVar4 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)((ulong)pIVar3 | 0x95b8),uVar5);
        uVar5 = *puVar4;
      }
      uVar7 = *puVar2;
      *(int *)(uVar7 + (long)iVar9 + 7) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar7 + (long)iVar9 + 7;
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar7,lVar1,uVar5);
          uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar5);
        }
      }
      lVar8 = lVar8 + 2;
      iVar9 = iVar9 + 4;
    } while ((ulong)param_4 * 2 - lVar8 != 0);
  }
  return puVar2;
}

