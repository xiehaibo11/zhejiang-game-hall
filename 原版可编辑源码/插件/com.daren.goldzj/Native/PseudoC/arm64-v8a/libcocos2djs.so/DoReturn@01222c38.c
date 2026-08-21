
/* v8::internal::wasm::ThreadImpl::DoReturn(v8::internal::wasm::Decoder*,
   v8::internal::wasm::InterpreterCode**, unsigned long*, unsigned long*, unsigned long) */

undefined4 __thiscall
v8::internal::wasm::ThreadImpl::DoReturn
          (ThreadImpl *this,Decoder *param_1,InterpreterCode **param_2,ulong *param_3,ulong *param_4
          ,ulong param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  InterpreterCode *pIVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x28);
  lVar1 = *(long *)(this + 0x40);
  iVar2 = *(int *)(this + 0x28);
  iVar3 = *(int *)(this + 0x18);
  iVar4 = *(int *)(lVar1 + -8);
  *(long *)(this + 0x40) = lVar1 + -0x18;
  lVar8 = ((lVar1 + -0x18) - *(long *)(this + 0x38) >> 3) * -0x5555555555555555;
  if (*(long *)(this + 0x78) != *(long *)(this + 0x80)) {
    lVar8 = lVar8 - (ulong)*(uint *)(*(long *)(this + 0x80) + -0x10);
  }
  if (lVar8 == 0) {
    uVar10 = 0;
    *(undefined4 *)(this + 0x58) = 3;
  }
  else {
    pIVar9 = *(InterpreterCode **)(lVar1 + -0x30);
    *param_2 = pIVar9;
    uVar12 = *(undefined8 *)(pIVar9 + 0x48);
    uVar11 = *(undefined8 *)(pIVar9 + 0x40);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 8) = uVar11;
    *(undefined8 *)(param_1 + 0x18) = uVar12;
    *(undefined8 *)(param_1 + 0x10) = uVar11;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (((byte)param_1[0x30] & 1) == 0) {
      *(undefined2 *)(param_1 + 0x30) = 0;
    }
    else {
      **(undefined1 **)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (((byte)param_1[0x30] & 1) != 0) {
        operator_delete(*(void **)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
    }
    param_1[0x30] = (Decoder)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x31) = 0;
    uVar6 = ReturnPc(this,param_1,*param_2,*(ulong *)(lVar1 + -0x28));
    *param_3 = uVar6;
    *param_4 = *(long *)(*(long *)(lVar1 + -0x30) + 0x48) -
               *(long *)(*(long *)(lVar1 + -0x30) + 0x40);
    uVar10 = 1;
  }
  DoStackTransfer(this,(iVar2 - iVar3) * -0xf0f0f0f - iVar4,param_5);
  if (*(long *)(lVar5 + 0x28) == lVar7) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

