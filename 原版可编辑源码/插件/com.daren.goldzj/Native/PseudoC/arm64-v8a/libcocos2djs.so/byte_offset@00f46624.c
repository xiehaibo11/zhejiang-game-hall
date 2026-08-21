
/* v8::internal::FrameSummary::WasmCompiledFrameSummary::byte_offset() const */

void __thiscall
v8::internal::FrameSummary::WasmCompiledFrameSummary::byte_offset(WasmCompiledFrameSummary *this)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  SourcePositionTableIterator aSStack_78 [24];
  int local_60;
  int local_58;
  undefined8 local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(this + 0x28);
  SourcePositionTableIterator::SourcePositionTableIterator
            (aSStack_78,*(undefined8 *)(*(long *)(this + 0x20) + 0x20),
             *(undefined8 *)(*(long *)(this + 0x20) + 0x28),0);
  if ((local_60 == -1) || (iVar3 <= local_58)) {
    iVar3 = 0;
  }
  else {
    do {
      uVar2 = local_50;
      SourcePositionTableIterator::Advance(aSStack_78);
      if (local_60 == -1) break;
    } while (local_58 < iVar3);
    iVar3 = ((uint)uVar2 >> 1 & 0x3fffffff) - 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}

