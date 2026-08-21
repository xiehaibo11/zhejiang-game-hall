
/* v8::internal::JSStackFrame::GetMethodName() */

ulong * __thiscall v8::internal::JSStackFrame::GetMethodName(JSStackFrame *this)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong *puVar7;
  Isolate *pIVar8;
  ulong *puVar9;
  undefined8 uVar10;
  ulong *puVar11;
  Isolate *pIVar12;
  ulong uVar13;
  Isolate *pIVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  Isolate *pIVar20;
  int iVar21;
  ulong *local_f8;
  ulong *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  ulong *local_a8;
  undefined4 local_a0;
  char local_9c;
  undefined4 local_98;
  ulong local_90;
  ulong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  long local_68;
  int iVar22;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar15 = *(long *)(this + 8);
  puVar7 = *(ulong **)(this + 0x10);
  uVar13 = *puVar7;
  if ((uVar13 & 1) == 0) {
LAB_00f5b9fc:
    puVar7 = (ulong *)Object::ToObjectImpl(lVar15,puVar7,0);
  }
  else {
    puVar9 = (ulong *)(lVar15 + 0xb0);
    if (((int)uVar13 == *(int *)puVar9) || ((int)uVar13 == *(int *)(lVar15 + 0xa0)))
    goto LAB_00f5bfdc;
    if (*(ushort *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xa9)
    goto LAB_00f5b9fc;
  }
  if (puVar7 == (ulong *)0x0) {
    *(undefined8 *)(*(long *)(this + 8) + 0x2bd8) = *(undefined8 *)(*(long *)(this + 8) + 0xa8);
    *(undefined1 *)(*(long *)(this + 8) + 0x2c19) = 0;
    puVar9 = (ulong *)(*(long *)(this + 8) + 0xb0);
    goto LAB_00f5bfdc;
  }
  uVar17 = **(ulong **)(this + 0x18) & 0xffffffff00000000;
  uVar18 = uVar17 | *(uint *)(**(ulong **)(this + 0x18) + 0xb);
  uVar4 = *(uint *)(uVar18 + 7);
  uVar13 = uVar17 | uVar4;
  if (((uVar4 & 1) == 0) || (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x83)) {
    if (uVar4 != 0) goto joined_r0x00f5baa8;
LAB_00f5bb08:
    uVar13 = *(ulong *)(uVar17 + 200);
  }
  else {
    local_90 = uVar13;
    uVar13 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_90);
    if ((uVar13 & 1) == 0) goto LAB_00f5bb08;
    uVar4 = *(uint *)(uVar18 + 7);
    uVar13 = uVar17 | uVar4;
joined_r0x00f5baa8:
    if (((uVar4 & 1) != 0) && (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x83)) {
      local_90 = uVar13;
      uVar18 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_90);
      if ((uVar18 & 1) == 0) goto LAB_00f5bb08;
      local_90 = uVar13;
      uVar13 = ScopeInfo::FunctionName((ScopeInfo *)&local_90);
    }
  }
  pIVar8 = *(Isolate **)(this + 8);
  if (*(CanonicalHandleScope **)(pIVar8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar9 = *(ulong **)(pIVar8 + 0x95a0);
    if (puVar9 == *(ulong **)(pIVar8 + 0x95a8)) {
      puVar9 = (ulong *)HandleScope::Extend(pIVar8);
    }
    *(ulong **)(pIVar8 + 0x95a0) = puVar9 + 1;
    *puVar9 = uVar13;
  }
  else {
    puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar8 + 0x95b8),uVar13);
  }
  puVar9 = (ulong *)String::Flatten(*(undefined8 *)(this + 8),puVar9,0);
  local_90 = *puVar9;
  uVar10 = __strlen_chk("<static_fields_initializer>",0x1c);
  uVar13 = String::HasOneBytePrefix(&local_90,"<static_fields_initializer>",uVar10);
  if ((uVar13 & 1) != 0) goto LAB_00f5bfdc;
  local_90 = *puVar9;
  uVar10 = __strlen_chk(&DAT_0189f8a5,5);
  uVar13 = String::HasOneBytePrefix(&local_90,&DAT_0189f8a5,uVar10);
  if ((uVar13 & 1) == 0) {
    local_b8 = *puVar9;
    uVar10 = __strlen_chk(&DAT_019b0c3f,5);
    uVar13 = String::HasOneBytePrefix(&local_b8,&DAT_019b0c3f,uVar10);
    if ((uVar13 & 1) != 0) goto LAB_00f5bbf8;
  }
  else {
LAB_00f5bbf8:
    puVar9 = (ulong *)Factory::NewProperSubString
                                (*(Factory **)(this + 8),puVar9,4,*(undefined4 *)(*puVar9 + 7));
  }
  uVar13 = FUN_00f5c014(*(undefined8 *)(this + 8),puVar7,puVar9,*(undefined8 *)(this + 0x18),2);
  if ((uVar13 & 1) == 0) {
    pIVar14 = *(Isolate **)(this + 8);
    pIVar8 = pIVar14 + 0x95a0;
    lVar15 = *(long *)pIVar8;
    *(int *)(pIVar14 + 0x95b0) = *(int *)(pIVar14 + 0x95b0) + 1;
    local_b8 = *(ulong *)(this + 8);
    lVar16 = *(long *)(pIVar14 + 0x95a8);
    local_b0 = 0;
    local_a0 = 0;
    local_9c = '\0';
    local_c0 = (ulong *)0x0;
    local_98 = 0;
    uVar13 = *puVar7;
    local_a8 = puVar7;
    if ((uVar13 & 1) != 0) {
      local_c0 = (ulong *)0x0;
      while( true ) {
        puVar7 = local_a8;
        uVar17 = uVar13 & 0xffffffff00000000;
        if (*(ushort *)((uVar17 | 7) + (ulong)*(uint *)(uVar13 - 1)) < 0xaa) break;
        if (*(short *)((uVar17 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0xab) {
          local_90 = *(ulong *)(uVar17 + 0x2bc8);
          iVar6 = Context::global_object((Context *)&local_90);
          local_80 = 0;
          local_78 = 0;
          local_74 = 0;
          local_70 = 0;
          local_90 = uVar17;
          local_88 = uVar13;
          PrototypeIterator::Advance((PrototypeIterator *)&local_90);
          if ((int)local_88 != iVar6) break;
        }
        else if ((*(byte *)((uVar17 | 9) + (ulong)*(uint *)(uVar13 - 1)) >> 5 & 1) != 0) break;
        puVar11 = (ulong *)KeyAccumulator::GetOwnEnumPropertyKeys(*(undefined8 *)(this + 8),puVar7);
        if (1 < *(int *)(*puVar11 + 3)) {
          iVar6 = 0;
          lVar19 = 0;
          do {
            pIVar20 = *(Isolate **)(this + 8);
            pIVar1 = pIVar20 + 0x95a0;
            lVar2 = *(long *)pIVar1;
            lVar3 = *(long *)(pIVar20 + 0x95a8);
            *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + 1;
            uVar13 = *puVar11;
            uVar4 = *(uint *)((long)iVar6 + 7 + uVar13);
            if (((uVar4 & 1) == 0) ||
               (uVar17 = uVar13 & 0xffffffff00000000,
               0x40 < *(ushort *)((uVar17 | 7) + (ulong)*(uint *)((uVar17 | uVar4) - 1)))) {
LAB_00f5be70:
              iVar22 = 7;
              iVar21 = 7;
joined_r0x00f5be74:
              if (pIVar20 != (Isolate *)0x0) {
                *(long *)pIVar1 = lVar2;
                *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + -1;
                iVar21 = iVar22;
                if (*(long *)(pIVar20 + 0x95a8) != lVar3) {
                  *(long *)(pIVar20 + 0x95a8) = lVar3;
                  HandleScope::DeleteExtensions(pIVar20);
                }
              }
              puVar9 = local_f8;
              if (iVar21 != 7) goto joined_r0x00f5bf64;
            }
            else {
              pIVar12 = *(Isolate **)(this + 8);
              uVar17 = uVar17 | *(uint *)(uVar13 + (long)iVar6 + 7);
              if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar9 = *(ulong **)(pIVar12 + 0x95a0);
                if (puVar9 == *(ulong **)(pIVar12 + 0x95a8)) {
                  puVar9 = (ulong *)HandleScope::Extend(pIVar12);
                }
                *(ulong **)(pIVar12 + 0x95a0) = puVar9 + 1;
                *puVar9 = uVar17;
              }
              else {
                puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar17);
              }
              uVar13 = FUN_00f5c014(*(undefined8 *)(this + 8),puVar7,puVar9,
                                    *(undefined8 *)(this + 0x18),0);
              if ((uVar13 & 1) == 0) goto LAB_00f5be70;
              if (local_c0 != (ulong *)0x0) {
                iVar22 = 1;
                iVar21 = 1;
                local_f8 = (ulong *)(*(long *)(this + 8) + 0xb0);
                goto joined_r0x00f5be74;
              }
              uVar13 = *puVar9;
              *(long *)pIVar1 = lVar2;
              *(int *)(pIVar20 + 0x95b0) = *(int *)(pIVar20 + 0x95b0) + -1;
              if (*(long *)(pIVar20 + 0x95a8) != lVar3) {
                *(long *)(pIVar20 + 0x95a8) = lVar3;
                HandleScope::DeleteExtensions(pIVar20);
              }
              if (*(CanonicalHandleScope **)(pIVar20 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                local_c0 = *(ulong **)pIVar1;
                if (local_c0 == *(ulong **)(pIVar20 + 0x95a8)) {
                  local_c0 = (ulong *)HandleScope::Extend(pIVar20);
                }
                *(ulong **)pIVar1 = local_c0 + 1;
                *local_c0 = uVar13;
              }
              else {
                local_c0 = (ulong *)CanonicalHandleScope::Lookup
                                              (*(CanonicalHandleScope **)(pIVar20 + 0x95b8),uVar13);
              }
            }
            lVar19 = lVar19 + 1;
            iVar6 = iVar6 + 4;
          } while (lVar19 < *(int *)(*puVar11 + 3) >> 1);
        }
        PrototypeIterator::Advance((PrototypeIterator *)&local_b8);
        if ((local_9c != '\0') || (uVar13 = *local_a8, (uVar13 & 1) == 0)) break;
      }
    }
    if (local_c0 == (ulong *)0x0) {
      puVar9 = (ulong *)(*(long *)(this + 8) + 0xb0);
joined_r0x00f5bf64:
      if (pIVar14 != (Isolate *)0x0) {
        *(long *)pIVar8 = lVar15;
        *(int *)(pIVar14 + 0x95b0) = *(int *)(pIVar14 + 0x95b0) + -1;
        if (*(long *)(pIVar14 + 0x95a8) != lVar16) {
          *(long *)(pIVar14 + 0x95a8) = lVar16;
          HandleScope::DeleteExtensions(pIVar14);
        }
      }
    }
    else {
      uVar13 = *local_c0;
      *(long *)pIVar8 = lVar15;
      *(int *)(pIVar14 + 0x95b0) = *(int *)(pIVar14 + 0x95b0) + -1;
      if (*(long *)(pIVar14 + 0x95a8) != lVar16) {
        *(long *)(pIVar14 + 0x95a8) = lVar16;
        HandleScope::DeleteExtensions(pIVar14);
      }
      if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar9 = *(ulong **)pIVar8;
        if (puVar9 == *(ulong **)(pIVar14 + 0x95a8)) {
          puVar9 = (ulong *)HandleScope::Extend(pIVar14);
        }
        *(ulong **)pIVar8 = puVar9 + 1;
        *puVar9 = uVar13;
      }
      else {
        puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar13);
      }
    }
  }
LAB_00f5bfdc:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar9;
}

