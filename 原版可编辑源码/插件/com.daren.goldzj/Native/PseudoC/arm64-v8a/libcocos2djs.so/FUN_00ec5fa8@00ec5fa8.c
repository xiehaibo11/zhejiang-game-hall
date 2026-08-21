
void FUN_00ec5fa8(Isolate *param_1,ulong param_2,int param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_68;
  
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = param_2;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),param_2);
    param_2 = *puVar5;
  }
  iVar10 = (*(int *)(param_2 + 0xb) >> 1) + (*(int *)(param_2 + 7) >> 1);
  iVar8 = 1;
  if (param_4 - 0x413 < 2 && (param_4 | 1) == 0x413) {
    iVar8 = 2;
  }
  puVar6 = (ulong *)v8::internal::Factory::NewFixedArray
                              ((Factory *)param_1,(iVar10 - param_3) * iVar8,0);
  iVar8 = iVar10 - param_3;
  if (iVar8 != 0 && param_3 <= iVar10) {
    uVar2 = *(uint *)(param_1 + 0xa8);
    param_3 = param_3 * 3;
    iVar10 = 0;
    do {
      param_3 = param_3 + 3;
      uVar7 = *puVar5;
      uVar3 = *(uint *)(uVar7 + (long)(int)((param_3 + (*(uint *)(uVar7 + 0xf) >> 1)) * 4) + 7);
      if (uVar3 != uVar2) {
        if ((param_4 | 1) == 0x413) {
          uVar12 = *puVar6;
          iVar4 = iVar10 << 2;
          iVar10 = iVar10 + 1;
          lVar1 = uVar12 + (long)iVar4;
          *(uint *)(lVar1 + 7) = uVar3;
          if ((uVar3 & 1) != 0) {
            uVar11 = uVar7 & 0xffffffff00000000 | (ulong)uVar3;
            uVar9 = uVar7 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
            uVar7 = *(ulong *)(uVar9 + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar7 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar12,lVar1,uVar11);
              uVar7 = *(ulong *)(uVar9 | 8);
            }
            if (((uVar7 & 0x18) != 0) &&
               ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar11);
            }
          }
        }
        if (param_4 - 0x413 < 2) {
          uVar7 = *puVar5;
          uVar12 = *puVar6;
          iVar4 = iVar10 + 1;
          uVar3 = *(uint *)(uVar7 + (long)(int)((param_3 + (*(uint *)(uVar7 + 0xf) >> 1)) * 4 + 4) +
                           7);
          lVar1 = uVar12 + (long)(iVar10 << 2);
          *(uint *)(lVar1 + 7) = uVar3;
          iVar10 = iVar4;
          if ((uVar3 & 1) != 0) {
            uVar11 = uVar7 & 0xffffffff00000000 | (ulong)uVar3;
            uVar9 = uVar7 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
            uVar7 = *(ulong *)(uVar9 + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar7 >> 0x12 & 1) != 0) {
              v8::internal::Heap_MarkingBarrierSlow(uVar12,lVar1,uVar11);
              uVar7 = *(ulong *)(uVar9 | 8);
            }
            if (((uVar7 & 0x18) != 0) &&
               ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              v8::internal::Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar11);
            }
          }
        }
      }
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (iVar10 != 0) {
      local_68 = *puVar6;
      v8::internal::FixedArray::Shrink((FixedArray *)&local_68,param_1,iVar10);
      v8::internal::Factory::NewJSArrayWithElements(param_1,puVar6,2,iVar10,0);
      return;
    }
  }
  v8::internal::Factory::NewJSArray((Factory *)param_1,3,0,0,1,0);
  return;
}

