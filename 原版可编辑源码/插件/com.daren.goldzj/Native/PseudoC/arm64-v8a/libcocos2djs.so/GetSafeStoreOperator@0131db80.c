
/* v8::internal::compiler::WasmGraphBuilder::GetSafeStoreOperator(int,
   v8::internal::wasm::ValueType) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GetSafeStoreOperator
          (WasmGraphBuilder *this,int param_1,byte param_3)

{
  int iVar1;
  MachineOperatorBuilder *pMVar2;
  
  switch(param_3) {
  case 2:
  case 4:
  case 6:
  case 7:
  case 9:
  case 1:
  case 3:
    if (param_3 - 1 < 9) {
                    /* WARNING: Could not emulate address calculation at 0x0131dbdc */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0131dbf0 + (ulong)(byte)(&DAT_01a048e3)[param_3 - 1] * 4))(5);
      return;
    }
  default:
switchD_0131dbb0_caseD_8:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
    break;
  }
  pMVar2 = *(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10);
  if (param_1 % 0x10 != 0) {
    iVar1 = *(int *)(pMVar2 + 0x18);
    if (iVar1 == 0) {
LAB_0131dc60:
      MachineOperatorBuilder::UnalignedStore(pMVar2,0xd);
      return;
    }
    if (iVar1 == 1) {
      if ((*(uint *)(pMVar2 + 0x20) >> 0xd & 1) != 0) goto LAB_0131dc60;
    }
    else if (iVar1 != 2) goto switchD_0131dbb0_caseD_8;
  }
  MachineOperatorBuilder::Store(pMVar2,0xd);
  return;
}

