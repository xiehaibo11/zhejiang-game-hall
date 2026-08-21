
/* v8::internal::FrameSummary::WasmFrameSummary::SourcePosition() const */

void __thiscall v8::internal::FrameSummary::WasmFrameSummary::SourcePosition(WasmFrameSummary *this)

{
  long lVar1;
  undefined8 uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  SourcePositionTableIterator aSStack_88 [24];
  int local_70;
  int local_68;
  undefined8 local_60;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pIVar3 = *(Isolate **)this;
  uVar8 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
          (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x6f);
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar8;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar8);
  }
  if (*(int *)(this + 8) == 1) {
    lVar6 = *(long *)(this + 0x20);
    iVar5 = *(int *)(this + 0x28);
    uVar7 = *(undefined4 *)(lVar6 + 0x38);
    SourcePositionTableIterator::SourcePositionTableIterator
              (aSStack_88,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),0);
    if ((local_70 == -1) || (iVar5 <= local_68)) {
      iVar5 = 0;
    }
    else {
      do {
        uVar2 = local_60;
        SourcePositionTableIterator::Advance(aSStack_88);
        if (local_70 == -1) break;
      } while (local_68 < iVar5);
      iVar5 = ((uint)uVar2 >> 1 & 0x3fffffff) - 1;
    }
  }
  else {
    uVar7 = *(undefined4 *)(this + 0x1c);
    iVar5 = *(int *)(this + 0x20);
  }
  WasmModuleObject::GetSourcePosition(puVar4,uVar7,iVar5,this[0x18]);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

