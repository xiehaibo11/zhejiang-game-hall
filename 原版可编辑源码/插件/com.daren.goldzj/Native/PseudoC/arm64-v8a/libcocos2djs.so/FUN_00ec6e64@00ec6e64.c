
void FUN_00ec6e64(Isolate *param_1,ulong param_2,int param_3,int param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong local_68;
  
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(param_1 + 0x95a0);
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
    *puVar6 = param_2;
  }
  else {
    puVar6 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_2);
    param_2 = *puVar6;
  }
  iVar2 = *(int *)(param_2 + 7) >> 1;
  iVar3 = *(int *)(param_2 + 0xb) >> 1;
  iVar15 = iVar3 + iVar2;
  iVar10 = 1;
  if (param_4 == 0x415) {
    iVar10 = 2;
  }
  iVar10 = (iVar15 - param_3) * iVar10;
  if ((iVar10 != 0) &&
     (puVar7 = (ulong *)v8::internal::Factory::NewFixedArray((Factory *)param_1,iVar10,0),
     param_3 < iVar15)) {
    uVar4 = *(uint *)(param_1 + 0xa8);
    iVar15 = param_3 * 2 + 3;
    iVar10 = 0;
    param_3 = (iVar3 + iVar2) - param_3;
    do {
      uVar8 = *puVar6;
      uVar5 = *(uint *)(uVar8 + (long)(int)((iVar15 + (*(uint *)(uVar8 + 0xf) >> 1)) * 4) + 7);
      uVar14 = (ulong)uVar5;
      iVar2 = iVar10;
      if (uVar5 != uVar4) {
        uVar12 = *puVar7;
        uVar8 = uVar8 & 0xffffffff00000000;
        uVar13 = uVar8 | uVar14;
        lVar1 = uVar12 + (long)(iVar10 << 2);
        *(uint *)(lVar1 + 7) = uVar5;
        if ((uVar5 & 1) != 0) {
          uVar11 = uVar8 | uVar14 & 0xfffffffffffc0000;
          uVar9 = *(ulong *)(uVar11 + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar12,lVar1,uVar13);
            uVar9 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            v8::internal::Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar13);
          }
        }
        iVar2 = iVar10 + 1;
        if (param_4 == 0x415) {
          uVar12 = *puVar7;
          iVar2 = iVar10 + 2;
          lVar1 = uVar12 + (long)((iVar10 + 1) * 4);
          *(uint *)(lVar1 + 7) = uVar5;
          if ((uVar5 & 1) != 0) {
            uVar8 = uVar8 | uVar14 & 0xfffffffffffc0000;
            uVar14 = *(ulong *)(uVar8 + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar14 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar12,lVar1,uVar13);
              uVar14 = *(ulong *)(uVar8 | 8);
            }
            if (((uVar14 & 0x18) != 0) &&
               ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar13);
            }
          }
        }
      }
      iVar10 = iVar2;
      param_3 = param_3 + -1;
      iVar15 = iVar15 + 2;
    } while (param_3 != 0);
    if (iVar10 != 0) {
      local_68 = *puVar7;
      v8::internal::FixedArray::Shrink((FixedArray *)&local_68,param_1,iVar10);
      v8::internal::Factory::NewJSArrayWithElements(param_1,puVar7,2,iVar10,0);
      return;
    }
  }
  v8::internal::Factory::NewJSArray((Factory *)param_1,3,0,0,1,0);
  return;
}

