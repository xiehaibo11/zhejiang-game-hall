
/* v8::internal::WasmCompiledFrame::at_to_number_conversion() const */

void __thiscall v8::internal::WasmCompiledFrame::at_to_number_conversion(WasmCompiledFrame *this)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  SourcePositionTableIterator aSStack_78 [24];
  int local_60;
  int local_58;
  ulong local_50;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((*(ulong **)(this + 0x30) != (ulong *)0x0) && (uVar5 = **(ulong **)(this + 0x30), uVar5 != 0))
  {
    piVar4 = (int *)wasm::WasmCodeManager::LookupCode
                              (*(WasmCodeManager **)(*(long *)(this + 0x10) + 0xc770),uVar5);
    bVar3 = false;
    if (piVar4 == (int *)0x0) goto LAB_00f486e0;
    if (piVar4[0xf] == 2) {
      if (*(undefined8 **)(this + 0x30) == (undefined8 *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (int)**(undefined8 **)(this + 0x30);
      }
      iVar1 = *piVar4;
      SourcePositionTableIterator::SourcePositionTableIterator
                (aSStack_78,*(undefined8 *)(piVar4 + 8),*(undefined8 *)(piVar4 + 10),0);
      if ((local_60 != -1) && (local_58 < iVar6 - iVar1)) {
        do {
          uVar5 = local_50;
          SourcePositionTableIterator::Advance(aSStack_78);
          if (local_60 == -1) break;
        } while (local_58 < iVar6 - iVar1);
        bVar3 = (uVar5 & 0x7ffffffe) != 2;
        goto LAB_00f486e0;
      }
    }
  }
  bVar3 = false;
LAB_00f486e0:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}

