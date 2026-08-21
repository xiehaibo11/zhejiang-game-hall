
/* v8::internal::Genesis::CreateInitialMapForArraySubclass(int, int) */

ulong * __thiscall
v8::internal::Genesis::CreateInitialMapForArraySubclass(Genesis *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  ulong local_90;
  ulong local_88 [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pIVar4 = *(Isolate **)this;
  uVar14 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
           (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x2f);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar14;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar14);
  }
  pIVar4 = *(Isolate **)this;
  uVar14 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
           (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0xe7);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar14;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar14);
  }
  puVar7 = (ulong *)Factory::NewMap(*(Factory **)this,0x423,param_1,3,param_2);
  uVar15 = *puVar7;
  uVar14 = *puVar5;
  puVar16 = (uint *)(uVar15 + 0x13);
  if (((*puVar16 & 1) != 0) &&
     (*(short *)((uVar15 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar15 & 0xffffffff00000000 | (ulong)*puVar16) - 1)) == 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
  }
  *puVar16 = (uint)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar10 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar10 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar15,puVar16,uVar14);
      uVar10 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar10 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar15,puVar16,uVar14);
    }
  }
  *(byte *)(*puVar7 + 9) = *(byte *)(*puVar7 + 9) & 0xfe;
  Map::SetPrototype(*(undefined8 *)this,puVar7,puVar6,1);
  Map::EnsureDescriptorSlack(*(undefined8 *)this,puVar7,param_2 + 1);
  uVar14 = **(ulong **)(this + 0x10) & 0xffffffff00000000;
  pIVar4 = *(Isolate **)this;
  uVar15 = uVar14 | *(uint *)(**(ulong **)(this + 0x10) + 0x2f);
  local_88[0] = uVar14 | *(uint *)((uVar14 | *(uint *)(uVar15 + 0x1b)) + 0x17);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = local_88[0];
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),local_88[0]);
    local_88[0] = *puVar5;
  }
  pIVar8 = *(Isolate **)this;
  uVar1 = *(uint *)(uVar15 + 0x1b);
  uVar10 = *(ulong *)(pIVar8 + 0x7b8);
  pIVar4 = pIVar8 + 0x7b8;
  uVar15 = (ulong)(*(uint *)((uVar14 | uVar1) + 0xb) >> 10) & 0x3ff;
  if ((uint)uVar15 == 0) {
    uVar14 = 4;
    goto LAB_0103b040;
  }
  lVar17 = *(long *)(pIVar8 + 0x9598);
  uVar12 = (ulong)((*(uint *)(uVar10 + 3) ^ uVar1 >> 2) & 0x3f);
  if ((uVar1 == *(uint *)(lVar17 + uVar12 * 0x10)) &&
     (*(int *)(lVar17 + uVar12 * 0x10 + 8) == (int)uVar10)) {
    iVar9 = *(int *)(lVar17 + uVar12 * 4 + 0x400);
    if (iVar9 == -2) goto LAB_0103afb0;
  }
  else {
LAB_0103afb0:
    if ((uint)uVar15 < 9) {
      uVar11 = 0;
      lVar13 = 0x1000000000;
      do {
        if (*(int *)((local_88[0] - 1) + (lVar13 >> 0x20)) == (int)uVar10) goto LAB_0103b018;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 0xc00000000;
      } while (uVar15 != uVar11);
      uVar11 = 0xffffffff;
    }
    else {
      uVar3 = BinarySearch<(v8::internal::SearchMode)1,v8::internal::DescriptorArray>
                        (local_88,uVar10,uVar15,0);
      uVar11 = (ulong)uVar3;
      uVar12 = (ulong)((*(uint *)(uVar10 + 3) ^ uVar1 >> 2) & 0x3f);
    }
LAB_0103b018:
    puVar6 = (ulong *)(lVar17 + uVar12 * 0x10);
    *puVar6 = uVar14 | uVar1;
    puVar6[1] = uVar10;
    iVar9 = (int)uVar11;
    *(int *)(lVar17 + uVar12 * 4 + 0x400) = iVar9;
    pIVar8 = *(Isolate **)this;
  }
  uVar14 = (long)iVar9 * 0xc00000000 + 0x1000000000 >> 0x20;
LAB_0103b040:
  uVar15 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + *puVar5 + 7);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar15;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar15);
  }
  Descriptor::AccessorConstant
            ((Descriptor *)local_88,pIVar4,puVar6,*(uint *)(*puVar5 + (uVar14 | 3)) >> 4 & 7);
  local_90 = *puVar7;
  Map::AppendDescriptor((Map *)&local_90,*(Isolate **)this,(Descriptor *)local_88);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

