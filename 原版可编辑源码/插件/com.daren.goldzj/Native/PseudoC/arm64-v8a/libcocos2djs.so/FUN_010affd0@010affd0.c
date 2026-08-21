
ulong * FUN_010affd0(undefined8 param_1,Factory *param_2,ulong *param_3,uint param_4)

{
  long lVar1;
  ulong *puVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  puVar2 = (ulong *)v8::internal::Factory::NewFixedArray(param_2,param_4,0);
  if (param_4 != 0) {
    iVar8 = 0;
    uVar9 = 0;
    do {
      uVar5 = *param_3;
      pIVar3 = (Isolate *)(uVar5 & 0xffffffff00000000);
      uVar5 = (ulong)*(byte *)(*(long *)(uVar5 + 0x27) + (ulong)*(uint *)(uVar5 + 0x2f) + uVar9) <<
              1;
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
      *(int *)(uVar7 + (long)iVar8 + 7) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar6 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar7 + (long)iVar8 + 7;
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar7,lVar1,uVar5);
          uVar6 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar5);
        }
      }
      uVar9 = uVar9 + 1;
      iVar8 = iVar8 + 4;
    } while (param_4 != uVar9);
  }
  return puVar2;
}

