
/* v8::internal::compiler::WasmGraphBuilder::GetSafeLoadOperator(int, v8::internal::wasm::ValueType)
    */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::GetSafeLoadOperator
          (WasmGraphBuilder *this,int param_1,byte param_3)

{
  int iVar1;
  MachineOperatorBuilder *pMVar2;
  int iVar3;
  
  iVar3 = 4;
  switch(param_3) {
  case 2:
  case 4:
  case 6:
  case 7:
  case 9:
    iVar3 = 8;
  case 1:
  case 3:
    if (param_3 - 1 < 9) {
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = param_1 / iVar3;
      }
                    /* WARNING: Could not emulate address calculation at 0x0131da94 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_0131daa8 + (ulong)(byte)(&DAT_01a048d1)[param_3 - 1] * 4))
                (param_1 - iVar1 * iVar3);
      return;
    }
    break;
  case 5:
    pMVar2 = *(MachineOperatorBuilder **)(*(long *)(this + 8) + 0x10);
    if (param_1 % 0x10 == 0) goto LAB_0131db74;
    if ((byte)(param_3 - 1) < 9) {
      iVar3 = *(int *)(pMVar2 + 0x18);
      if (iVar3 == 0) {
LAB_0131db68:
        MachineOperatorBuilder::UnalignedLoad(pMVar2,0xd);
        return;
      }
      if (iVar3 == 1) {
        if ((*(uint *)(pMVar2 + 0x1c) >>
             (ulong)(*(uint *)(&DAT_01a062bc + (long)(char)(param_3 - 1) * 4) & 0x1f) & 1) != 0)
        goto LAB_0131db68;
      }
      else if (iVar3 != 2) break;
LAB_0131db74:
      MachineOperatorBuilder::Load(pMVar2,0xd);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

