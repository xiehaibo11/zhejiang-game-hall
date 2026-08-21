
/* v8::internal::WasmScript::AddBreakpointToInfo(v8::internal::Handle<v8::internal::Script>, int,
   v8::internal::Handle<v8::internal::BreakPoint>) */

void v8::internal::WasmScript::AddBreakpointToInfo(ulong *param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  Isolate *this;
  
  uVar10 = *param_1;
  this = (Isolate *)(uVar10 & 0xffffffff00000000);
  if (((*(uint *)(uVar10 + 0x17) & 0xfffffffe) == 6) &&
     (uVar10 = (ulong)this | (ulong)*(uint *)(uVar10 + 0x23), 1 < *(int *)(uVar10 + 3))) {
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar8 = *(ulong **)(this + 0x95a0);
      if (puVar8 == *(ulong **)(this + 0x95a8)) {
        puVar8 = (ulong *)HandleScope::Extend(this);
      }
      *(ulong **)(this + 0x95a0) = puVar8 + 1;
      *puVar8 = uVar10;
    }
    else {
      puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar10);
    }
  }
  else {
    puVar8 = (ulong *)Factory::NewFixedArray((Factory *)this,4,1);
    uVar13 = *param_1;
    uVar10 = *puVar8;
    *(int *)(uVar13 + 0x23) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x23,uVar10);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x23,uVar10);
      }
    }
  }
  uVar13 = *puVar8;
  uVar14 = 0;
  uVar5 = *(uint *)(uVar13 + 3);
  uVar10 = uVar13 & 0xffffffff00000000;
  lVar16 = uVar13 + 7;
  uVar4 = (int)uVar5 >> 1;
  uVar7 = uVar4;
  uVar6 = uVar4;
  if (3 < (int)uVar5) {
    do {
      uVar2 = uVar14 + (uVar6 >> 1);
      uVar6 = *(uint *)(lVar16 + (int)(uVar2 * 4));
      if (((uVar6 & 1) == 0) || (uVar6 != *(uint *)(this + 0xa0))) {
        iVar15 = *(int *)((uVar10 | uVar6) + 3) >> 1;
      }
      else {
        iVar15 = 0x7fffffff;
      }
      if (iVar15 <= param_2) {
        uVar14 = uVar2;
        uVar2 = uVar7;
      }
      uVar7 = uVar2;
      uVar6 = uVar2 - uVar14;
    } while (1 < (int)(uVar2 - uVar14));
  }
  uVar7 = *(uint *)(lVar16 + (int)(uVar14 << 2));
  if (((uVar7 & 1) == 0) || (uVar7 != *(uint *)(this + 0xa0))) {
    iVar15 = *(int *)((uVar10 | uVar7) + 3) >> 1;
  }
  else {
    iVar15 = 0x7fffffff;
  }
  if (iVar15 < param_2) {
    uVar14 = uVar14 + 1;
  }
  iVar15 = uVar14 << 2;
  if ((int)uVar14 < (int)uVar4) {
    uVar7 = *(uint *)(lVar16 + iVar15);
    if (((uVar7 & 1) == 0) || (uVar7 != *(uint *)(this + 0xa0))) {
      if (*(int *)((uVar10 | uVar7) + 3) >> 1 == param_2) goto LAB_01207a18;
    }
    else if (param_2 == 0x7fffffff) {
LAB_01207a18:
      uVar10 = uVar10 | *(uint *)(iVar15 + lVar16);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(this + 0x95a0);
        if (puVar8 == *(ulong **)(this + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar10;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar10);
      }
      BreakPointInfo::SetBreakPoint(this,puVar8,param_3);
      return;
    }
  }
  uVar4 = *(uint *)(lVar16 + (int)(uVar4 * 4 + -4));
  if (((uVar4 & 1) == 0) || (puVar9 = puVar8, uVar4 != *(uint *)(this + 0xa0))) {
    puVar9 = (ulong *)Factory::NewFixedArray((Factory *)this,uVar5 & 0xfffffffe,1);
    uVar13 = *param_1;
    uVar10 = *puVar9;
    *(int *)(uVar13 + 0x23) = (int)uVar10;
    if ((uVar10 & 1) != 0) {
      uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar11 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar13,uVar13 + 0x23,uVar10);
        uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar13,uVar13 + 0x23,uVar10);
      }
    }
    if (0 < (int)uVar14) {
      lVar16 = 0;
      do {
        uVar10 = *puVar8;
        uVar13 = *puVar9;
        lVar1 = (long)(int)lVar16 + 7;
        uVar4 = *(uint *)(uVar10 + lVar1);
        puVar3 = (uint *)(uVar13 + lVar1);
        *puVar3 = uVar4;
        if ((uVar4 & 1) != 0) {
          uVar10 = uVar10 & 0xffffffff00000000;
          uVar17 = uVar10 | uVar4;
          uVar10 = uVar10 | (ulong)uVar4 & 0xfffffffffffc0000;
          uVar11 = *(ulong *)(uVar10 + 8);
          if (((uint)uVar11 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,puVar3,uVar17);
            uVar11 = *(ulong *)(uVar10 | 8);
          }
          if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar13,puVar3,uVar17);
          }
        }
        lVar16 = lVar16 + 4;
      } while ((ulong)uVar14 * 4 - lVar16 != 0);
    }
  }
  uVar10 = *puVar8;
  iVar12 = *(int *)(uVar10 + 3) >> 1;
  if ((int)uVar14 < iVar12) {
    lVar16 = (long)iVar12;
    iVar12 = iVar12 << 2;
    while( true ) {
      lVar16 = lVar16 + -1;
      uVar4 = *(uint *)(uVar10 + (long)(iVar12 + -4) + 7);
      if (((uVar4 & 1) == 0) || (uVar4 != *(uint *)(this + 0xa0))) {
        uVar13 = *puVar9;
        *(uint *)(uVar13 + (long)iVar12 + 7) = uVar4;
        if ((uVar4 & 1) != 0) {
          uVar17 = uVar10 & 0xffffffff00000000 | (ulong)uVar4;
          uVar11 = uVar10 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000;
          uVar10 = *(ulong *)(uVar11 + 8);
          lVar1 = uVar13 + (long)iVar12 + 7;
          if (((uint)uVar10 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar13,lVar1,uVar17);
            uVar10 = *(ulong *)(uVar11 | 8);
          }
          if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            Heap_GenerationalBarrierSlow(uVar13,lVar1,uVar17);
          }
        }
      }
      if (lVar16 <= (int)uVar14) break;
      uVar10 = *puVar8;
      iVar12 = iVar12 + -4;
    }
  }
  puVar8 = (ulong *)Factory::NewBreakPointInfo((Factory *)this,param_2);
  BreakPointInfo::SetBreakPoint(this,puVar8,param_3);
  uVar13 = *puVar9;
  uVar10 = *puVar8;
  *(int *)(uVar13 + (long)iVar15 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar11 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar16 = uVar13 + (long)iVar15 + 7;
    if (((uint)uVar11 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar13,lVar16,uVar10);
      uVar11 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar11 & 0x18) != 0) && ((*(byte *)((uVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar13,lVar16,uVar10);
      return;
    }
  }
  return;
}

