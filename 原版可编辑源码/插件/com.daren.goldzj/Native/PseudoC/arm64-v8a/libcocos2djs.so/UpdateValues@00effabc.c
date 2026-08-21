
/* v8::internal::DebugEvaluate::ContextBuilder::UpdateValues() */

void __thiscall v8::internal::DebugEvaluate::ContextBuilder::UpdateValues(ContextBuilder *this)

{
  ScopeIterator *this_00;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  uint local_c8;
  int local_c4;
  undefined8 local_bc;
  long local_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  this_00 = (ScopeIterator *)(this + 0x78);
  ScopeIterator::Restart(this_00);
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10);
  if (lVar1 != lVar2) {
    lVar3 = *(long *)(lVar1 + 8);
    while( true ) {
      if (lVar3 != 0) {
        puVar4 = (ulong *)KeyAccumulator::GetKeys(lVar3,0,0x12,1,0,0);
        if (puVar4 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        uVar8 = *puVar4;
        if (1 < *(int *)(uVar8 + 3)) {
          iVar10 = 0;
          lVar3 = 0;
          do {
            uVar8 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + (long)iVar10 + 7);
            pIVar5 = *(Isolate **)(this + 0x20);
            if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar6 = *(ulong **)(pIVar5 + 0x95a0);
              if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
                puVar6 = (ulong *)HandleScope::Extend(pIVar5);
              }
              *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
              *puVar6 = uVar8;
            }
            else {
              puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar8);
              uVar8 = *puVar6;
            }
            lVar9 = *(long *)(lVar1 + 8);
            local_b0 = (ulong)*(uint *)(lVar9 + 4) << 0x20;
            if (*(short *)(((ulong)*(uint *)(lVar9 + 4) << 0x20 | 7) + (ulong)*(uint *)(uVar8 - 1))
                == 0x40) {
              local_c8 = (*(int *)(uVar8 + 7) << 1 ^ 0xffffffffU) & 2;
            }
            else {
              local_c8 = 2;
            }
            local_bc = 0xc000000000;
            puVar7 = puVar6;
            if ((*(ushort *)((*puVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar6 - 1)) &
                0xffe0) == 0x20) {
              puVar7 = (ulong *)StringTable::LookupString(local_b0,puVar6);
            }
            uStack_a0 = 0;
            uStack_90 = 0;
            local_80 = 0xffffffffffffffff;
            uStack_78 = 0xffffffffffffffff;
            local_a8 = puVar7;
            local_98 = lVar9;
            local_88 = lVar9;
            LookupIterator::Start<false>((LookupIterator *)&local_c8);
            if (local_c4 == 4) {
              lVar9 = local_b0 + 0xa0;
            }
            else {
              lVar9 = JSReceiver::GetDataProperty((LookupIterator *)&local_c8);
            }
            ScopeIterator::SetVariableValue(this_00,puVar6,lVar9);
            uVar8 = *puVar4;
            lVar3 = lVar3 + 1;
            iVar10 = iVar10 + 4;
          } while (lVar3 < *(int *)(uVar8 + 3) >> 1);
        }
      }
      ScopeIterator::Next(this_00);
      if (lVar1 + 0x18 == lVar2) break;
      lVar3 = *(long *)(lVar1 + 0x20);
      lVar1 = lVar1 + 0x18;
    }
  }
  return;
}

