
/* v8::internal::MapUpdater::FindTargetMap() */

void __thiscall v8::internal::MapUpdater::FindTargetMap(MapUpdater *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined4 uVar6;
  Isolate *pIVar7;
  ulong *puVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  ulong local_90;
  ulong *puStack_88;
  ulong local_80;
  ulong local_78;
  int local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar16 = *(ulong **)(this + 0x18);
  *(ulong **)(this + 0x20) = puVar16;
  uVar13 = *puVar16;
  iVar11 = *(int *)(this + 0x30);
  uVar15 = (ulong)(*(uint *)(uVar13 + 0xb) >> 10) & 0x3ff;
  if (uVar15 != (long)iVar11) {
    lVar17 = uVar15 * 0xc00000000 + 0x1000000000;
    do {
      uVar13 = lVar17 >> 0x20;
      if (uVar15 == *(ulong *)(this + 0x58)) {
        if ((*(int *)(this + 0x38) == 4) || (*(int *)(this + 0x38) == 5)) {
          uVar10 = *(uint *)(**(long **)(this + 0x10) + (uVar13 | 3)) >> 4 & 7;
        }
        else {
          uVar10 = *(uint *)(this + 100);
        }
        uVar10 = *(uint *)(this + 0x60) | uVar10 << 3 | *(int *)(this + 0x6c) << 1 |
                 *(int *)(this + 0x68) << 2 | (uint)(byte)this[0x70] << 6;
      }
      else {
        uVar10 = *(int *)(**(long **)(this + 0x10) + (uVar13 | 3)) >> 1;
      }
      local_90 = *(ulong *)this;
      local_80 = *puVar16;
      local_78 = *(uint *)(local_80 + 0x23) + local_90;
      iVar12 = 1;
      puStack_88 = puVar16;
      if (((local_78 & 1) != 0) && ((int)local_78 != 3)) {
        uVar14 = local_78 & 3;
        iVar12 = (int)uVar14;
        if (uVar14 != 3) {
          if (uVar14 != 1) goto LAB_015285c4;
          uVar14 = local_78 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar14 + *(uint *)(local_78 - 1)) == 0x98) {
            iVar12 = 4;
          }
          else {
            iVar12 = (uint)(*(short *)(uVar14 + *(uint *)(local_78 - 1)) != 100) << 1;
          }
        }
      }
      local_70 = iVar12;
      uVar14 = TransitionsAccessor::SearchTransition
                         ((TransitionsAccessor *)&local_90,
                          **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                          (ulong)*(uint *)(uVar13 + **(ulong **)(this + 0x10) + -1),uVar10 & 1,
                          uVar10 >> 3 & 7);
      if ((int)uVar14 == 0) break;
      pIVar7 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar16 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar16 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar16 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar16 + 1;
        *puVar16 = uVar14;
      }
      else {
        puVar16 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar14);
        uVar14 = *puVar16;
      }
      pIVar7 = *(Isolate **)this;
      uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0x17);
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar14;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar14);
        uVar14 = *puVar8;
      }
      uVar1 = *(uint *)(uVar14 + (uVar13 | 3));
      if ((uVar10 & 1) != 0) {
        if (uVar15 == *(ulong *)(this + 0x58)) {
          iVar12 = (int)**(undefined8 **)(this + 0x80);
        }
        else {
          iVar12 = *(int *)(uVar13 + 7 + **(long **)(this + 0x10));
        }
        if (*(int *)(uVar13 + 7 + uVar14) != iVar12) goto LAB_015284f8;
      }
      if (((uVar10 >> 1 & 1) == 0) && ((uVar1 >> 2 & 1) != 0)) break;
      uVar2 = uVar1 >> 7 & 7;
      uVar3 = uVar10 >> 6 & 7;
      bVar5 = (uVar10 >> 6 & 7) == 0;
      if (uVar2 != 3) {
        bVar5 = uVar3 < uVar2;
      }
      if ((uVar2 != uVar3) && (!bVar5)) break;
      if ((uVar1 >> 2 & 1) == 0) {
        uVar9 = GetOrComputeFieldType(this,uVar15,uVar10 >> 1 & 1,uVar2);
        Map::GeneralizeField(*(undefined8 *)this,puVar16,uVar15,uVar10 >> 2 & 1,uVar2,uVar9);
      }
      else {
        if (uVar15 == *(ulong *)(this + 0x58)) {
          iVar12 = (int)**(undefined8 **)(this + 0x80);
        }
        else {
          iVar12 = *(int *)(uVar13 + 7 + **(long **)(this + 0x10));
        }
        if (*(int *)(uVar13 + 7 + uVar14) != iVar12) break;
      }
      uVar15 = uVar15 + 1;
      lVar17 = lVar17 + 0xc00000000;
      *(ulong **)(this + 0x20) = puVar16;
    } while ((long)iVar11 != uVar15);
    iVar11 = *(int *)(this + 0x30);
    uVar13 = **(ulong **)(this + 0x20);
  }
  uVar15 = (ulong)(*(uint *)(uVar13 + 0xb) >> 10) & 0x3ff;
  if ((int)uVar15 == iVar11) {
    uVar14 = **(ulong **)(this + 8);
    if (((int)uVar13 != (int)uVar14) &&
       (uVar9 = *(undefined8 *)this, (*(uint *)(uVar14 + 0xb) >> 0x19 & 1) == 0)) {
      *(uint *)(uVar14 + 0xb) = *(uint *)(uVar14 + 0xb) | 0x2000000;
      local_90 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0x1b);
      DependentCode::DeoptimizeDependentCodeGroup(&local_90,uVar9,1);
    }
    if (this[0x34] == (MapUpdater)0x0) {
      uVar6 = 4;
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(this + 0x20);
      goto LAB_01528570;
    }
    puStack_88 = *(ulong **)(this + 0x20);
    local_90 = *(ulong *)this;
    local_80 = *puStack_88;
    local_78 = *(uint *)(local_80 + 0x23) + local_90;
    if (((local_78 & 1) == 0) || ((int)local_78 == 3)) {
      local_70 = 1;
    }
    else if ((local_78 & 3) == 1) {
      uVar13 = local_78 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar13 + *(uint *)(local_78 - 1)) == 0x98) {
        local_70 = 4;
      }
      else if (*(short *)(uVar13 + *(uint *)(local_78 - 1)) == 100) {
        local_70 = 0;
      }
      else {
        local_70 = 2;
      }
    }
    else {
      if ((local_78 & 3) != 3) {
LAB_015285c4:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_70 = 3;
    }
    uVar13 = TransitionsAccessor::SearchSpecial
                       ((TransitionsAccessor *)&local_90,**(undefined8 **)(this + 0x40));
    if ((int)uVar13 != 0) {
      pIVar7 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar16 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar16 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar16 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar16 + 1;
        *puVar16 = uVar13;
      }
      else {
        puVar16 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar13);
      }
      *(ulong **)(this + 0x28) = puVar16;
      uVar6 = 4;
      goto LAB_01528570;
    }
    iVar11 = *(int *)(this + 0x30);
  }
  if (uVar15 == (long)iVar11) {
    uVar6 = 2;
  }
  else {
    lVar17 = uVar15 * 0xc00000000 + 0x1000000000;
    do {
      uVar13 = lVar17 >> 0x20;
      if (uVar15 == *(ulong *)(this + 0x58)) {
        if ((*(int *)(this + 0x38) == 4) || (*(int *)(this + 0x38) == 5)) {
          uVar10 = *(uint *)(**(long **)(this + 0x10) + (uVar13 | 3)) >> 4 & 7;
        }
        else {
          uVar10 = *(uint *)(this + 100);
        }
        uVar10 = *(uint *)(this + 0x60) | uVar10 << 3 | *(int *)(this + 0x6c) << 1 |
                 *(int *)(this + 0x68) << 2;
      }
      else {
        uVar10 = *(int *)(**(long **)(this + 0x10) + (uVar13 | 3)) >> 1;
      }
      puStack_88 = *(ulong **)(this + 0x20);
      local_90 = *(ulong *)this;
      local_80 = *puStack_88;
      local_78 = *(uint *)(local_80 + 0x23) + local_90;
      iVar12 = 1;
      if (((local_78 & 1) != 0) && ((int)local_78 != 3)) {
        uVar14 = local_78 & 3;
        iVar12 = (int)uVar14;
        if (uVar14 != 3) {
          if (uVar14 != 1) goto LAB_015285c4;
          uVar14 = local_78 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar14 + *(uint *)(local_78 - 1)) == 0x98) {
            iVar12 = 4;
          }
          else {
            iVar12 = (uint)(*(short *)(uVar14 + *(uint *)(local_78 - 1)) != 100) << 1;
          }
        }
      }
      local_70 = iVar12;
      uVar14 = TransitionsAccessor::SearchTransition
                         ((TransitionsAccessor *)&local_90,
                          **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                          (ulong)*(uint *)(uVar13 + **(ulong **)(this + 0x10) + -1),uVar10 & 1,
                          uVar10 >> 3 & 7);
      if ((int)uVar14 == 0) break;
      pIVar7 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar16 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar16 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar16 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar16 + 1;
        *puVar16 = uVar14;
      }
      else {
        puVar16 = (ulong *)CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar14);
        uVar14 = *puVar16;
      }
      pIVar7 = *(Isolate **)this;
      uVar14 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 + 0x17);
      if (*(CanonicalHandleScope **)(pIVar7 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)(pIVar7 + 0x95a0);
        if (puVar8 == *(ulong **)(pIVar7 + 0x95a8)) {
          puVar8 = (ulong *)HandleScope::Extend(pIVar7);
        }
        *(ulong **)(pIVar7 + 0x95a0) = puVar8 + 1;
        *puVar8 = uVar14;
      }
      else {
        puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar7 + 0x95b8),uVar14);
      }
      if ((uVar10 & 1) != 0) {
        if (uVar15 == *(ulong *)(this + 0x58)) {
          iVar12 = (int)**(undefined8 **)(this + 0x80);
        }
        else {
          iVar12 = *(int *)(uVar13 + 7 + **(long **)(this + 0x10));
        }
        if (*(int *)(uVar13 + 7 + *puVar8) != iVar12) goto LAB_015284f8;
      }
      uVar15 = uVar15 + 1;
      lVar17 = lVar17 + 0xc00000000;
      *(ulong **)(this + 0x20) = puVar16;
    } while ((long)iVar11 != uVar15);
    uVar6 = 2;
  }
LAB_01528570:
  *(undefined4 *)(this + 0x50) = uVar6;
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_015284f8:
  uVar9 = Map::Normalize(*(undefined8 *)this,*(undefined8 *)(this + 8),this[0x54],0,
                         "Normalize_Incompatible");
  *(undefined8 *)(this + 0x28) = uVar9;
  uVar6 = 4;
  goto LAB_01528570;
}

