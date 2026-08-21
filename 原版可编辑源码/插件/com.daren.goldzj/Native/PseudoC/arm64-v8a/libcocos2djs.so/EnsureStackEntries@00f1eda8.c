
/* v8::internal::MaterializedObjectStore::EnsureStackEntries(int) */

ulong * __thiscall
v8::internal::MaterializedObjectStore::EnsureStackEntries(MaterializedObjectStore *this,int param_1)

{
  uint *puVar1;
  uint uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  
  pIVar3 = *(Isolate **)this;
  uVar9 = *(ulong *)(pIVar3 + 0xf60);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar9;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar9);
    uVar9 = *puVar4;
  }
  puVar5 = puVar4;
  if ((int)*(uint *)(uVar9 + 3) >> 1 < param_1) {
    uVar6 = param_1;
    if (param_1 < 0xb) {
      uVar6 = 10;
    }
    uVar2 = *(uint *)(uVar9 + 3) & 0xfffffffe;
    if ((int)uVar2 <= (int)uVar6) {
      uVar2 = uVar6;
    }
    puVar5 = (ulong *)Factory::NewFixedArray(*(Factory **)this,uVar2,1);
    uVar9 = *puVar4;
    if (*(int *)(uVar9 + 3) < 2) {
      iVar7 = *(int *)(uVar9 + 3) >> 1;
    }
    else {
      iVar12 = 0;
      lVar13 = 0;
      do {
        uVar10 = *puVar5;
        uVar6 = *(uint *)((long)iVar12 + 7 + uVar9);
        puVar1 = (uint *)(uVar10 + (long)iVar12 + 7);
        *puVar1 = uVar6;
        if ((uVar6 & 1) != 0) {
          uVar11 = uVar9 & 0xffffffff00000000 | (ulong)uVar6;
          uVar8 = uVar9 & 0xffffffff00000000 | (ulong)uVar6 & 0xfffffffffffc0000;
          uVar9 = *(ulong *)(uVar8 + 8);
          if (((uint)uVar9 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,puVar1,uVar11);
            uVar9 = *(ulong *)(uVar8 | 8);
          }
          if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,puVar1,uVar11);
          }
        }
        uVar9 = *puVar4;
        lVar13 = lVar13 + 1;
        iVar12 = iVar12 + 4;
        iVar7 = *(int *)(uVar9 + 3) >> 1;
      } while (lVar13 < iVar7);
    }
    lVar13 = *(long *)this;
    if (iVar7 < param_1) {
      uVar9 = *(ulong *)(lVar13 + 0xa0);
      iVar12 = iVar7 << 2;
      iVar7 = param_1 - iVar7;
      puVar4 = (ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
      do {
        uVar10 = *puVar5;
        *(int *)(uVar10 + (long)iVar12 + 7) = (int)uVar9;
        if ((uVar9 & 1) != 0) {
          uVar8 = *puVar4;
          lVar13 = uVar10 + (long)iVar12 + 7;
          if (((uint)uVar8 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,lVar13,uVar9);
            uVar8 = *puVar4;
          }
          if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
          {
            Heap_GenerationalBarrierSlow(uVar10,lVar13,uVar9);
          }
        }
        iVar7 = iVar7 + -1;
        iVar12 = iVar12 + 4;
      } while (iVar7 != 0);
      lVar13 = *(long *)this;
    }
    *(ulong *)(lVar13 + 0xf60) = *puVar5;
  }
  return puVar5;
}

