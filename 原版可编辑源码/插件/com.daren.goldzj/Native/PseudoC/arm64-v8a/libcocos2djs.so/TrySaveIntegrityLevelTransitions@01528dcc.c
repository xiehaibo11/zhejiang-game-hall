
/* v8::internal::MapUpdater::TrySaveIntegrityLevelTransitions() */

void __thiscall v8::internal::MapUpdater::TrySaveIntegrityLevelTransitions(MapUpdater *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_b0;
  long local_a8;
  ulong *puStack_a0;
  ulong local_98;
  ulong local_90;
  int local_88;
  long local_80;
  ulong *puStack_78;
  ulong local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(**(ulong **)(this + 8) + 0x13);
  uVar8 = **(ulong **)(this + 8) & 0xffffffff00000000;
  if (((uVar1 & 1) == 0) ||
     (uVar9 = uVar8 | uVar1, *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar9 - 1)) != 0xa2)) {
    uVar9 = *(ulong *)(uVar8 + 0xa0);
  }
  pIVar4 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar9;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
  }
  local_b0 = 0;
  local_80 = *(long *)this;
  local_70 = *puVar5;
  local_68 = (ulong)*(uint *)(local_70 + 0x23) + local_80;
  puStack_78 = puVar5;
  if (((local_68 & 1) == 0) || ((int)local_68 == 3)) {
    local_60 = 1;
  }
  else if ((local_68 & 3) == 1) {
    uVar8 = local_68 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar8 + *(uint *)(local_68 - 1)) == 0x98) {
      local_60 = 4;
    }
    else if (*(short *)(uVar8 + *(uint *)(local_68 - 1)) == 100) {
      local_60 = 0;
    }
    else {
      local_60 = 2;
    }
  }
  else {
    if ((local_68 & 3) != 3) {
LAB_01529148:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    local_60 = 3;
  }
  uVar9 = TransitionsAccessor::HasIntegrityLevelTransitionTo
                    ((TransitionsAccessor *)&local_80,**(undefined8 **)(this + 8),&local_b0,
                     this + 0x38);
  uVar8 = local_b0;
  if ((uVar9 & 1) == 0) {
LAB_015290c4:
    uVar7 = 0;
  }
  else {
    pIVar4 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar8;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),local_b0);
    }
    *(ulong **)(this + 0x40) = puVar6;
    *(ulong **)(this + 0x48) = puVar5;
    uVar8 = *puVar5;
    uVar1 = *(uint *)(uVar8 + 0xb);
    while ((uVar1 >> 0x1b & 1) == 0) {
      uVar9 = uVar8 & 0xffffffff00000000;
      if (((*(uint *)(uVar8 + 0x13) & 1) == 0) ||
         (uVar8 = uVar9 | *(uint *)(uVar8 + 0x13),
         *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2)) {
        uVar8 = *(ulong *)(uVar9 + 0xa0);
      }
      pIVar4 = *(Isolate **)this;
      if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar5 = *(ulong **)(pIVar4 + 0x95a0);
        if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
          puVar5 = (ulong *)HandleScope::Extend(pIVar4);
        }
        *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
        *puVar5 = uVar8;
      }
      else {
        puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
      }
      local_a8 = *(long *)this;
      local_98 = *puVar5;
      local_90 = (ulong)*(uint *)(local_98 + 0x23) + local_a8;
      iVar3 = 1;
      puStack_a0 = puVar5;
      if (((local_90 & 1) != 0) && ((int)local_90 != 3)) {
        uVar8 = local_90 & 3;
        iVar3 = (int)uVar8;
        if (uVar8 != 3) {
          if (uVar8 != 1) goto LAB_01529148;
          uVar8 = local_90 & 0xffffffff00000000 | 7;
          if (*(short *)(uVar8 + *(uint *)(local_90 - 1)) == 0x98) {
            iVar3 = 4;
          }
          else {
            iVar3 = (uint)(*(short *)(uVar8 + *(uint *)(local_90 - 1)) != 100) << 1;
          }
        }
      }
      local_88 = iVar3;
      uVar8 = TransitionsAccessor::HasIntegrityLevelTransitionTo
                        ((TransitionsAccessor *)&local_a8,**(undefined8 **)(this + 0x48),0,0);
      if ((uVar8 & 1) == 0) goto LAB_015290c4;
      *(ulong **)(this + 0x48) = puVar5;
      uVar8 = *puVar5;
      uVar1 = *(uint *)(uVar8 + 0xb);
    }
    if (((*(uint *)(uVar8 + 0xb) ^ *(uint *)(**(long **)(this + 8) + 0xb)) & 0xffc00) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "old_map_->NumberOfOwnDescriptors() == integrity_source_map_->NumberOfOwnDescriptors()"
              );
    }
    this[0x34] = (MapUpdater)0x1;
    pIVar4 = *(Isolate **)this;
    uVar8 = *puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0x17);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar8;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar8);
    }
    *(ulong **)(this + 0x10) = puVar5;
    uVar7 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

