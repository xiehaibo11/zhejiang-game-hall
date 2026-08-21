
/* v8::internal::JSWeakCollection::GetEntries(v8::internal::Handle<v8::internal::JSWeakCollection>,
   int) */

void v8::internal::JSWeakCollection::GetEntries(ulong *param_1,int param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  CanonicalHandleScope *pCVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  int iVar10;
  ulong uVar11;
  Isolate *pIVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  ulong local_68;
  
  pIVar12 = (Isolate *)(*param_1 & 0xffffffff00000000);
  pCVar6 = *(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8);
  uVar14 = (ulong)pIVar12 | (ulong)*(uint *)(*param_1 + 0xb);
  if (pCVar6 == (CanonicalHandleScope *)0x0) {
    puVar7 = *(ulong **)(pIVar12 + 0x95a0);
    if (puVar7 == *(ulong **)(pIVar12 + 0x95a8)) {
      puVar7 = (ulong *)HandleScope::Extend(pIVar12);
    }
    *(ulong **)(pIVar12 + 0x95a0) = puVar7 + 1;
    *puVar7 = uVar14;
    uVar14 = *puVar7;
  }
  else {
    puVar7 = (ulong *)CanonicalHandleScope::Lookup(pCVar6,uVar14);
    uVar14 = *puVar7;
  }
  if ((param_2 == 0) || (*(int *)(uVar14 + 7) >> 1 < param_2)) {
    param_2 = *(int *)(uVar14 + 7) >> 1;
  }
  sVar4 = *(short *)((*param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_1 - 1));
  iVar10 = 1;
  if (sVar4 == 0x41e) {
    iVar10 = 2;
  }
  puVar8 = (ulong *)Factory::NewFixedArray((Factory *)pIVar12,iVar10 * param_2,0);
  uVar14 = *puVar7;
  iVar2 = *(int *)(uVar14 + 7) >> 1;
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  if ((0 < iVar2) && (1 < *(int *)(uVar14 + 0xf))) {
    iVar16 = 0;
    lVar17 = 0;
    iVar18 = 0xc;
    do {
      uVar3 = *(uint *)(uVar14 + (long)iVar18 + 7);
      iVar5 = iVar16;
      if ((uVar3 != *(uint *)(pIVar12 + 0xa8)) && (uVar3 != *(uint *)(pIVar12 + 0xa0))) {
        uVar15 = *puVar8;
        uVar13 = uVar14 & 0xffffffff00000000 | (ulong)uVar3;
        lVar1 = uVar15 + (long)(iVar16 << 2);
        *(uint *)(lVar1 + 7) = uVar3;
        if ((uVar3 & 1) != 0) {
          uVar11 = uVar14 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          uVar14 = *(ulong *)(uVar11 + 8);
          lVar1 = lVar1 + 7;
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar15,lVar1,uVar13);
            uVar14 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar14 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar15,lVar1,uVar13);
          }
        }
        iVar5 = iVar16 + 1;
        if (sVar4 == 0x41e) {
          local_68 = *puVar7;
          pCVar6 = *(CanonicalHandleScope **)((ulong)pIVar12 | 0x95b8);
          if (pCVar6 == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(pIVar12 + 0x95a0);
            if (puVar9 == *(ulong **)(pIVar12 + 0x95a8)) {
              puVar9 = (ulong *)HandleScope::Extend(pIVar12);
            }
            *(ulong **)(pIVar12 + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar13;
          }
          else {
            puVar9 = (ulong *)CanonicalHandleScope::Lookup(pCVar6,uVar13);
          }
          uVar14 = ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                   ::Lookup((ObjectHashTableBase<v8::internal::EphemeronHashTable,v8::internal::EphemeronHashTableShape>
                             *)&local_68,puVar9);
          iVar5 = iVar16 + 2;
          uVar13 = *puVar8;
          lVar1 = uVar13 + (long)((iVar16 + 1) * 4);
          *(int *)(lVar1 + 7) = (int)uVar14;
          if ((uVar14 & 1) != 0) {
            uVar15 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
            lVar1 = lVar1 + 7;
            if (((uint)uVar15 >> 0x12 & 1) != 0) {
              Heap_MarkingBarrierSlow(uVar13,lVar1,uVar14);
              uVar15 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
            }
            if (((uVar15 & 0x18) != 0) &&
               ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
              Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar14);
            }
          }
        }
      }
      iVar16 = iVar5;
      iVar5 = 0;
      if (iVar10 != 0) {
        iVar5 = iVar16 / iVar10;
      }
      if (iVar2 <= iVar5) break;
      uVar14 = *puVar7;
      lVar17 = lVar17 + 1;
      iVar18 = iVar18 + 8;
    } while (lVar17 < *(int *)(uVar14 + 0xf) >> 1);
  }
  Factory::NewJSArrayWithElements(pIVar12,puVar8,3,*(int *)(*puVar8 + 3) >> 1,0);
  return;
}

