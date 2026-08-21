
/* v8::internal::Map::AsLanguageMode(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Map>, v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

ulong * v8::internal::Map::AsLanguageMode(Isolate *param_1,ulong *param_2,long *param_3)

{
  Isolate *pIVar1;
  byte bVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  Isolate *local_90;
  ulong *puStack_88;
  ulong local_80;
  Isolate *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar4 = param_2;
  if ((*(uint *)(*param_3 + 0x1b) >> 6 & 1) != 0) {
    pIVar1 = param_1 + 0x95a0;
    uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
      uVar5 = *puVar4;
    }
    uVar5 = uVar5 & 0xffffffff00000000 |
            (ulong)*(uint *)(((ulong)(*(uint *)(*param_3 + 0x1b) >> 0xd) & 0x7c) + uVar5 + 0x2ab);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    local_80 = *param_2;
    local_78 = param_1 + *(uint *)(local_80 + 0x23);
    if ((((ulong)local_78 & 1) == 0) || ((int)local_78 == 3)) {
      local_70 = 1;
    }
    else if (((ulong)local_78 & 3) == 1) {
      uVar5 = (ulong)local_78 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar5 + *(uint *)(local_78 + -1)) == 0x98) {
        local_70 = 4;
      }
      else if (*(short *)(uVar5 + *(uint *)(local_78 + -1)) == 100) {
        local_70 = 0;
      }
      else {
        local_70 = 2;
      }
    }
    else {
      if (((ulong)local_78 & 3) != 3) goto LAB_010efdfc;
      local_70 = 3;
    }
    local_90 = param_1;
    puStack_88 = param_2;
    uVar5 = TransitionsAccessor::SearchSpecial
                      ((TransitionsAccessor *)&local_90,*(undefined8 *)(param_1 + 0xbf0));
    if ((int)uVar5 == 0) {
      uVar5 = *param_2;
      if ((*(uint *)(uVar5 + 0xb) >> 0x19 & 1) == 0) {
        *(uint *)(uVar5 + 0xb) = *(uint *)(uVar5 + 0xb) | 0x2000000;
        local_90 = (Isolate *)(uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x1b));
        DependentCode::DeoptimizeDependentCodeGroup(&local_90,param_1,1);
        uVar5 = *param_2;
      }
      bVar2 = *(byte *)(uVar5 + 5);
      uVar6 = (uint)bVar2;
      if (2 < bVar2) {
        uVar6 = (uint)*(byte *)(uVar5 + 3) - (uint)bVar2;
      }
      puVar4 = (ulong *)CopyInitialMap(param_1,puVar4,(ulong)*(byte *)(uVar5 + 3) << 2,
                                       (uint)*(byte *)(uVar5 + 3) - (uint)*(byte *)(uVar5 + 4),uVar6
                                      );
      uVar7 = *puVar4;
      uVar6 = *(uint *)(*param_2 + 0x13);
      uVar5 = *param_2 & 0xffffffff00000000;
      uVar8 = uVar5 | uVar6;
      if ((uVar6 & 1) != 0) {
        do {
          if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0xa2) break;
          puVar10 = (uint *)(uVar8 + 0x13);
          uVar8 = uVar5 | *puVar10;
        } while ((*puVar10 & 1) != 0);
      }
      puVar10 = (uint *)(uVar7 + 0x13);
      if (((*puVar10 & 1) != 0) &&
         (*(short *)((uVar7 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*puVar10) - 1)) == 0xa2))
      {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","!constructor_or_backpointer().IsMap()");
      }
      *puVar10 = (uint)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar5 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,puVar10,uVar8);
          uVar5 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,puVar10,uVar8);
        }
      }
      uVar5 = *param_2;
      uVar7 = *puVar4;
      uVar6 = *(uint *)(uVar5 + 0xf);
      *(uint *)(uVar7 + 0xf) = uVar6;
      if ((uVar6 & 1) != 0) {
        uVar5 = uVar5 & 0xffffffff00000000;
        uVar9 = uVar5 | uVar6;
        uVar5 = uVar5 | (ulong)uVar6 & 0xfffffffffffc0000;
        uVar8 = *(ulong *)(uVar5 + 8);
        if (((uint)uVar8 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xf,uVar9);
          uVar8 = *(ulong *)(uVar5 | 8);
        }
        if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xf,uVar9);
        }
      }
      *(uint *)(*puVar4 + 0xb) =
           *(uint *)(*param_2 + 0xb) & 0xe0000000 | *(uint *)(*puVar4 + 0xb) & 0x1fffffff;
      local_80 = *param_2;
      local_78 = param_1 + *(uint *)(local_80 + 0x23);
      if ((((ulong)local_78 & 1) == 0) || ((int)local_78 == 3)) {
        local_70 = 1;
      }
      else if (((ulong)local_78 & 3) == 1) {
        uVar5 = (ulong)local_78 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar5 + *(uint *)(local_78 + -1)) == 0x98) {
          local_70 = 4;
        }
        else if (*(short *)(uVar5 + *(uint *)(local_78 + -1)) == 100) {
          local_70 = 0;
        }
        else {
          local_70 = 2;
        }
      }
      else {
        if (((ulong)local_78 & 3) != 3) {
LAB_010efdfc:
          local_90 = param_1;
          puStack_88 = param_2;
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
        local_70 = 3;
      }
      local_90 = param_1;
      puStack_88 = param_2;
      uVar5 = TransitionsAccessor::CanHaveMoreTransitions((TransitionsAccessor *)&local_90);
      if ((uVar5 & 1) != 0) {
        ConnectTransition(param_1,param_2,puVar4,param_1 + 0xbf0,2);
      }
    }
    else if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)pIVar1;
      if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar4 + 1;
      *puVar4 = uVar5;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}

