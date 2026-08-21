
/* v8::internal::wasm::ThreadImpl::DoReturnCall(v8::internal::wasm::Decoder*,
   v8::internal::wasm::InterpreterCode*, unsigned long*, unsigned long*) */

undefined8 __thiscall
v8::internal::wasm::ThreadImpl::DoReturnCall
          (ThreadImpl *this,Decoder *param_1,InterpreterCode *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  EnsureStackSpace(this,(*(long *)(param_2 + 0x18) +
                        (long)*(int *)(*(long *)(param_2 + 0x50) + 0x20)) -
                        *(long *)(param_2 + 0x10));
  lVar4 = *(long *)(this + 0x40);
  *(long *)(this + 0x70) = *(long *)(this + 0x70) + 1;
  uVar3 = *(ulong *)(**(long **)param_2 + 8);
  DoStackTransfer(this,(*(int *)(this + 0x28) - *(int *)(this + 0x18)) * -0xf0f0f0f -
                       *(int *)(lVar4 + -8),uVar3);
  *param_4 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
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
  *(InterpreterCode **)(lVar4 + -0x18) = param_2;
  *(undefined8 *)(lVar4 + -0x10) = 0;
  *(ulong *)(lVar4 + -8) =
       (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f - uVar3;
  uVar3 = InitLocals(this,param_2);
  *(ulong *)(lVar4 + -0x10) = uVar3;
  *param_3 = uVar3;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

