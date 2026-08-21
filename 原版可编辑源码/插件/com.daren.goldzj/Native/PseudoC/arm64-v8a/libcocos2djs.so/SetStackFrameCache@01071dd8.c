
/* v8::internal::AbstractCode::SetStackFrameCache(v8::internal::Handle<v8::internal::AbstractCode>,
   v8::internal::Handle<v8::internal::SimpleNumberDictionary>) */

void v8::internal::AbstractCode::SetStackFrameCache(ulong *param_1,ulong *param_2)

{
  CanonicalHandleScope *this;
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  uVar10 = *param_1;
  pIVar8 = (Isolate *)(uVar10 & 0xffffffff00000000);
  puVar11 = (undefined8 *)((ulong)pIVar8 | 0x95b8);
  this = (CanonicalHandleScope *)*puVar11;
  if (*(short *)(((ulong)pIVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x9a) {
    if (this == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar10;
      pIVar5 = pIVar8;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup(this,uVar10);
      uVar10 = *puVar1;
      pIVar5 = (Isolate *)(uVar10 & 0xffffffff00000000);
    }
    uVar4 = *(uint *)(uVar10 + 0xb);
    uVar10 = (ulong)pIVar5 | (ulong)uVar4;
    if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar10;
      if ((uVar4 & 1) != 0) goto LAB_01071f30;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar11,uVar10);
      uVar10 = *puVar2;
      if ((uVar10 & 1) != 0) {
LAB_01071f30:
        if ((int)uVar10 == *(int *)(pIVar8 + 0x180)) {
          return;
        }
        if ((int)uVar10 == *(int *)((uVar10 & 0xffffffff00000000) + 0xa0)) {
          return;
        }
        if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x69) {
LAB_0107203c:
          uVar9 = *param_2;
          *(int *)(uVar10 + 7) = (int)uVar9;
          if ((uVar9 & 1) == 0) {
            return;
          }
          uVar7 = *(ulong *)((uVar9 & 0xfffffffffffc0000) + 8);
          lVar3 = uVar10 + 7;
          if (((uint)uVar7 >> 0x12 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar10,lVar3,uVar9);
            uVar7 = *(ulong *)(uVar9 & 0xfffffffffffc0000 | 8);
          }
          if ((uVar7 & 0x18) == 0) {
            return;
          }
          if ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
            return;
          }
          goto LAB_01071fc4;
        }
      }
    }
    puVar2 = (ulong *)Factory::NewSourcePositionTableWithFrameCache
                                ((Factory *)pIVar8,puVar2,param_2);
    uVar10 = *puVar1;
    uVar9 = *puVar2;
    *(int *)(uVar10 + 0xb) = (int)uVar9;
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar7 = uVar9 & 0xfffffffffffc0000;
    uVar6 = *(ulong *)(uVar7 + 8);
    lVar3 = uVar10 + 0xb;
    uVar4 = (uint)uVar6;
  }
  else {
    if (this == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar1 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar10;
      pIVar5 = pIVar8;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup(this,uVar10);
      uVar10 = *puVar1;
      pIVar5 = (Isolate *)(uVar10 & 0xffffffff00000000);
    }
    uVar4 = *(uint *)(uVar10 + 0xf);
    uVar10 = (ulong)pIVar5 | (ulong)uVar4;
    if ((CanonicalHandleScope *)*puVar11 == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar8 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar8 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar8);
      }
      *(ulong **)(pIVar8 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar10;
      if ((uVar4 & 1) != 0) goto LAB_0107200c;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup((CanonicalHandleScope *)*puVar11,uVar10);
      uVar10 = *puVar2;
      if ((uVar10 & 1) != 0) {
LAB_0107200c:
        if ((int)uVar10 == *(int *)(pIVar8 + 0x180)) {
          return;
        }
        if ((int)uVar10 == *(int *)((uVar10 & 0xffffffff00000000) + 0xa0)) {
          return;
        }
        if (*(short *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0x69)
        goto LAB_0107203c;
      }
    }
    puVar2 = (ulong *)Factory::NewSourcePositionTableWithFrameCache
                                ((Factory *)pIVar8,puVar2,param_2);
    uVar10 = *puVar1;
    uVar9 = *puVar2;
    *(int *)(uVar10 + 0xf) = (int)uVar9;
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar7 = uVar9 & 0xfffffffffffc0000;
    uVar6 = *(ulong *)(uVar7 + 8);
    lVar3 = uVar10 + 0xf;
    uVar4 = (uint)uVar6;
  }
  if ((uVar4 >> 0x12 & 1) != 0) {
    Heap_MarkingBarrierSlow(uVar10,lVar3,uVar9);
    uVar6 = *(ulong *)(uVar7 | 8);
  }
  if (((uVar6 & 0x18) == 0) || ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
    return;
  }
LAB_01071fc4:
  Heap_GenerationalBarrierSlow(uVar10,lVar3,uVar9);
  return;
}

