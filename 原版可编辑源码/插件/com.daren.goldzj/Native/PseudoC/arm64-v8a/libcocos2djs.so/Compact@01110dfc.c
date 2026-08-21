
/* v8::internal::PrototypeUsers::Compact(v8::internal::Handle<v8::internal::WeakArrayList>,
   v8::internal::Heap*, void (*)(v8::internal::HeapObject, int, int), v8::internal::AllocationType)
    */

ulong v8::internal::PrototypeUsers::Compact
                (ulong *param_1,long param_2,code *param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar6 = *param_1;
  uVar4 = *(uint *)(uVar6 + 7);
  if ((int)uVar4 >> 1 != 0) {
    if ((int)uVar4 < 2) {
      iVar11 = 0;
    }
    else {
      iVar8 = 0;
      uVar9 = 0;
      iVar11 = 0;
      do {
        uVar5 = *(uint *)(uVar6 + 0xb + (long)iVar8);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 4;
        iVar11 = iVar11 + (uint)(uVar5 != 3 && ((uVar5 ^ 0xffffffff) & 3) == 0);
      } while (uVar9 < uVar4 >> 1);
    }
    iVar8 = iVar11 + 1;
    if (iVar8 != (int)uVar4 >> 1) {
      uVar6 = *(ulong *)(param_2 + -0x8428);
      if (*(CanonicalHandleScope **)(param_2 + 0xd68) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)(param_2 + 0xd50);
        if (puVar7 == *(ulong **)(param_2 + 0xd58)) {
          puVar7 = (ulong *)HandleScope::Extend((Isolate *)(param_2 + -0x8850));
        }
        *(ulong **)(param_2 + 0xd50) = puVar7 + 1;
        *puVar7 = uVar6;
      }
      else {
        puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_2 + 0xd68),uVar6);
      }
      iVar2 = *(int *)(*puVar7 + 3) >> 1;
      if (iVar2 <= iVar11) {
        iVar3 = iVar8;
        if (iVar8 < 0) {
          iVar3 = iVar11 + 2;
        }
        iVar3 = iVar3 >> 1;
        if (iVar3 < 3) {
          iVar3 = 2;
        }
        puVar7 = (ulong *)Factory::CopyWeakArrayListAndGrow
                                    ((Factory *)(param_2 + -0x8850),puVar7,(iVar3 + iVar8) - iVar2,
                                     param_4);
      }
      uVar6 = *param_1;
      if (*(int *)(uVar6 + 7) < 4) {
        iVar11 = 1;
      }
      else {
        uVar9 = 1;
        iVar8 = 4;
        iVar11 = 1;
        do {
          uVar4 = *(uint *)(uVar6 + (long)iVar8 + 0xb);
          uVar13 = (ulong)uVar4;
          if ((uVar4 != 3) && ((uVar13 & 3) == 3)) {
            uVar10 = uVar6 & 0xffffffff00000000 | uVar13 & 0xfffffffffffffffd;
            (*param_3)(uVar10,uVar9 & 0xffffffff,iVar11);
            uVar12 = *puVar7;
            iVar2 = iVar11 << 2;
            iVar11 = iVar11 + 1;
            lVar1 = uVar12 + (long)iVar2;
            *(uint *)(lVar1 + 0xb) = uVar4;
            if ((uVar4 & 1) != 0) {
              uVar6 = uVar6 & 0xffffffff00000000 | uVar13 & 0xfffffffffffc0000;
              lVar1 = lVar1 + 0xb;
              if ((*(byte *)(uVar6 + 10) >> 2 & 1) != 0) {
                Heap_MarkingBarrierSlow(uVar12,lVar1,uVar10);
              }
              if (((*(byte *)(uVar6 + 8) & 0x18) != 0) &&
                 ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
                Heap_GenerationalBarrierSlow(uVar12,lVar1,uVar10);
              }
            }
          }
          uVar6 = *param_1;
          uVar9 = uVar9 + 1;
          iVar8 = iVar8 + 4;
        } while ((long)uVar9 < (long)(*(int *)(uVar6 + 7) >> 1));
      }
      *(int *)(*puVar7 + 7) = iVar11 << 1;
      *(undefined4 *)(*puVar7 + 0xb) = 0;
      uVar6 = *puVar7;
    }
  }
  return uVar6;
}

