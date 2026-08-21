
/* v8::internal::wasm::ThreadImpl::InitFrame(v8::internal::wasm::WasmFunction const*,
   v8::internal::wasm::WasmValue*) */

void __thiscall
v8::internal::wasm::ThreadImpl::InitFrame(ThreadImpl *this,WasmFunction *param_1,WasmValue *param_2)

{
  long lVar1;
  Zone *this_00;
  SideTable *this_01;
  undefined8 *puVar2;
  InterpreterCode *pIVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  WasmValue local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)this;
  pIVar3 = (InterpreterCode *)(puVar2[2] + (ulong)*(uint *)(param_1 + 8) * 0x58);
  if ((*(long *)(pIVar3 + 0x50) == 0) &&
     (*(long *)(puVar2[2] + (ulong)*(uint *)(param_1 + 8) * 0x58 + 0x40) != 0)) {
    this_00 = (Zone *)*puVar2;
    this_01 = *(SideTable **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x28) {
      this_01 = (SideTable *)Zone::NewExpand(this_00,0x28);
    }
    else {
      *(SideTable **)(this_00 + 0x10) = this_01 + 0x28;
    }
    SideTable::SideTable(this_01,(Zone *)*puVar2,(WasmModule *)puVar2[1],pIVar3);
    *(SideTable **)(pIVar3 + 0x50) = this_01;
  }
  uVar4 = *(ulong *)(*(long *)param_1 + 8);
  EnsureStackSpace(this,uVar4);
  if (uVar4 != 0) {
    lVar5 = uVar4 * 0x11;
    do {
      local_80 = param_2[0x10];
      uStack_88 = *(undefined8 *)(param_2 + 8);
      local_90 = *(undefined8 *)param_2;
      StackValue::StackValue
                ((StackValue *)&local_70,&local_90,this,
                 (*(long *)(this + 0x28) - *(long *)(this + 0x18)) * -0xf0f0f0f0f0f0f0f);
      puVar2 = *(undefined8 **)(this + 0x28);
      lVar5 = lVar5 + -0x11;
      *(long *)(this + 0x28) = (long)puVar2 + 0x11;
      *(undefined1 *)(puVar2 + 2) = local_60;
      puVar2[1] = uStack_68;
      *puVar2 = local_70;
      param_2 = param_2 + 0x11;
    } while (lVar5 != 0);
  }
  PushFrame(this,pIVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

