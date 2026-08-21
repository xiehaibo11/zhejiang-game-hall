
/* v8::internal::wasm::ThreadImpl::DoCall(v8::internal::wasm::Decoder*,
   v8::internal::wasm::InterpreterCode*, unsigned long*, unsigned long*) */

void __thiscall
v8::internal::wasm::ThreadImpl::DoCall
          (ThreadImpl *this,Decoder *param_1,InterpreterCode *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  *(ulong *)(*(long *)(this + 0x40) + -0x10) = *param_3;
  PushFrame(this,param_2);
  lVar5 = *(long *)(this + 0x40);
  if ((ulong)((long)FLAG_stack_size * 0x400) <
      (ulong)(((*(long *)(this + 0x28) - *(long *)(this + 0x18)) + lVar5) - *(long *)(this + 0x38)))
  {
    *(undefined8 *)(lVar5 + -0x10) = 0;
    Isolate::StackOverflow(*(Isolate **)(this + 8));
    iVar2 = HandleException(this,*(Isolate **)(this + 8));
    if (iVar2 != 0) {
      uVar3 = 0;
      goto LAB_01223158;
    }
    lVar5 = *(long *)(this + 0x40);
  }
  *param_3 = *(ulong *)(lVar5 + -0x10);
  *param_4 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
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
  uVar3 = 1;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x31) = 0;
LAB_01223158:
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

