
/* v8::internal::MapUpdater::ConstructNewMap() */

void __thiscall v8::internal::MapUpdater::ConstructNewMap(MapUpdater *this)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  Isolate *pIVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined8 local_a0;
  ulong local_98;
  long local_90;
  ulong *puStack_88;
  ulong local_80;
  ulong local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar5 = (ulong *)BuildDescriptorArray(this);
  puVar6 = (ulong *)FindSplitMap(this,puVar5);
  uVar18 = (ulong)(*(uint *)(*puVar6 + 0xb) >> 10) & 0x3ff;
  if (*(int *)(this + 0x30) == (int)uVar18) {
    if (this[0x34] != (MapUpdater)0x1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","has_integrity_level_transition_");
    }
    uVar17 = 3;
  }
  else {
    if (*(ulong *)(this + 0x58) == uVar18) {
      if ((*(int *)(this + 0x38) == 4) || (*(int *)(this + 0x38) == 5)) {
        uVar13 = *(uint *)(**(long **)(this + 0x10) +
                          (uVar18 * 0xc00000000 + 0x1000000000 >> 0x20 | 3)) >> 4 & 7;
      }
      else {
        uVar13 = *(uint *)(this + 100);
      }
      uVar13 = *(uint *)(this + 0x60) | uVar13 << 3 | *(int *)(this + 0x6c) << 1 |
               *(int *)(this + 0x68) << 2;
    }
    else {
      uVar13 = *(int *)(**(long **)(this + 0x10) + (uVar18 * 0xc00000000 + 0x1000000000 >> 0x20 | 3)
                       ) >> 1;
    }
    local_90 = *(long *)this;
    local_80 = *puVar6;
    local_78 = (ulong)*(uint *)(local_80 + 0x23) + local_90;
    puStack_88 = puVar6;
    if (((local_78 & 1) == 0) || ((int)local_78 == 3)) {
      local_70 = 1;
    }
    else if ((local_78 & 3) == 1) {
      uVar7 = local_78 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar7 + *(uint *)(local_78 - 1)) == 0x98) {
        local_70 = 4;
      }
      else if (*(short *)(uVar7 + *(uint *)(local_78 - 1)) == 100) {
        local_70 = 0;
      }
      else {
        local_70 = 2;
      }
    }
    else {
      if ((local_78 & 3) != 3) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      local_70 = 3;
    }
    local_a0 = TransitionsAccessor::SearchTransition
                         ((TransitionsAccessor *)&local_90,
                          **(ulong **)(this + 0x10) & 0xffffffff00000000 |
                          (ulong)*(uint *)(**(ulong **)(this + 0x10) +
                                           (uVar18 * 0xc00000000 + 0x1000000000 >> 0x20) + -1),
                          uVar13 & 1,uVar13 >> 3 & 7);
    if ((int)local_a0 != 0) {
      Map::DeprecateTransitionTree((Map *)&local_a0,*(Isolate **)this);
    }
    if (((int)local_a0 == 0) &&
       (uVar7 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_90),
       (uVar7 & 1) == 0)) {
      uVar12 = Map::Normalize(*(undefined8 *)this,*(undefined8 *)(this + 8),this[0x54],0,
                              "Normalize_CantHaveMoreTransitions");
      *(undefined8 *)(this + 0x28) = uVar12;
      uVar17 = 4;
    }
    else {
      uVar12 = *(undefined8 *)this;
      uVar7 = **(ulong **)(this + 8);
      if ((*(uint *)(uVar7 + 0xb) >> 0x19 & 1) == 0) {
        *(uint *)(uVar7 + 0xb) = *(uint *)(uVar7 + 0xb) | 0x2000000;
        local_98 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0x1b);
        DependentCode::DeoptimizeDependentCodeGroup(&local_98,uVar12,1);
      }
      if ((FLAG_trace_generalization != '\0') && (*(long *)(this + 0x58) != -1)) {
        uVar15 = **(ulong **)(this + 0x10);
        uVar7 = *(long *)(this + 0x58) * 0xc00000000 + 0x1000000000 >> 0x20;
        uVar16 = uVar7 | 3;
        uVar2 = *(uint *)(uVar16 + uVar15);
        uVar13 = *(uint *)(uVar16 + *puVar5);
        uVar7 = uVar15 & 0xffffffff00000000 | (ulong)*(uint *)(uVar15 + uVar7 + 7);
        if ((uVar2 >> 2 & 1) == 0) {
          uVar7 = Map::UnwrapFieldType(uVar7);
          pIVar14 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar8 = *(ulong **)(pIVar14 + 0x95a0);
            if (puVar8 == *(ulong **)(pIVar14 + 0x95a8)) {
              puVar8 = (ulong *)HandleScope::Extend(pIVar14);
            }
            puVar19 = (ulong *)0x0;
            *(ulong **)(pIVar14 + 0x95a0) = puVar8 + 1;
            *puVar8 = uVar7;
          }
          else {
            puVar8 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar7);
            puVar19 = (ulong *)0x0;
          }
        }
        else {
          pIVar14 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar19 = *(ulong **)(pIVar14 + 0x95a0);
            if (puVar19 == *(ulong **)(pIVar14 + 0x95a8)) {
              puVar19 = (ulong *)HandleScope::Extend(pIVar14);
            }
            puVar8 = (ulong *)0x0;
            *(ulong **)(pIVar14 + 0x95a0) = puVar19 + 1;
            *puVar19 = uVar7;
          }
          else {
            puVar19 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar7);
            puVar8 = (ulong *)0x0;
          }
        }
        uVar7 = *puVar5 & 0xffffffff00000000 |
                (ulong)*(uint *)(*puVar5 + (*(long *)(this + 0x58) * 0xc00000000 + 0x1000000000 >>
                                           0x20) + 7);
        if ((uVar13 >> 2 & 1) == 0) {
          uVar7 = Map::UnwrapFieldType(uVar7);
          pIVar14 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar9 = *(ulong **)(pIVar14 + 0x95a0);
            if (puVar9 == *(ulong **)(pIVar14 + 0x95a8)) {
              puVar9 = (ulong *)HandleScope::Extend(pIVar14);
            }
            puVar10 = (ulong *)0x0;
            *(ulong **)(pIVar14 + 0x95a0) = puVar9 + 1;
            *puVar9 = uVar7;
          }
          else {
            puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar7);
            puVar10 = (ulong *)0x0;
          }
        }
        else {
          pIVar14 = *(Isolate **)this;
          if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar10 = *(ulong **)(pIVar14 + 0x95a0);
            if (puVar10 == *(ulong **)(pIVar14 + 0x95a8)) {
              puVar10 = (ulong *)HandleScope::Extend(pIVar14);
            }
            puVar9 = (ulong *)0x0;
            *(ulong **)(pIVar14 + 0x95a0) = puVar10 + 1;
            *puVar10 = uVar7;
          }
          else {
            puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar7);
            puVar9 = (ulong *)0x0;
          }
        }
        local_98 = **(ulong **)(this + 8);
        uVar13 = (int)uVar13 >> 1;
        if ((uVar2 >> 2 & 1) == 0) {
          bVar4 = false;
        }
        else {
          bVar4 = *(int *)(this + 0x6c) == 0;
        }
        Map::PrintGeneralization
                  ((Map *)&local_98,*(undefined8 *)this,waitpid,&DAT_0189703a,
                   *(undefined8 *)(this + 0x58),uVar18,*(undefined4 *)(this + 0x30),bVar4,
                   (uint)((int)uVar2 >> 1) >> 6 & 7,uVar13 >> 6 & 7,(uint)((int)uVar2 >> 1) >> 2 & 1
                   ,uVar13 >> 2 & 1,puVar8,puVar19,puVar9,puVar10);
      }
      puVar11 = (undefined8 *)
                LayoutDescriptor::New
                          (*(undefined8 *)this,puVar6,puVar5,*(undefined4 *)(this + 0x30));
      uVar12 = Map::AddMissingTransitions(*(undefined8 *)this,puVar6,puVar5,puVar11);
      local_98 = *puVar6;
      Map::ReplaceDescriptors(&local_98,*(undefined8 *)this,*puVar5,*puVar11);
      lVar1 = 0x28;
      if (this[0x34] != (MapUpdater)0x0) {
        lVar1 = 0x20;
      }
      uVar17 = 3;
      if (this[0x34] == (MapUpdater)0x0) {
        uVar17 = 4;
      }
      *(undefined8 *)(this + lVar1) = uVar12;
    }
  }
  *(undefined4 *)(this + 0x50) = uVar17;
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

