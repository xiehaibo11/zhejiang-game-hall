
/* bool v8::internal::wasm::ThreadImpl::DoSimdLoadSplat<v8::internal::wasm::int2, long,
   long>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*,
   v8::internal::MachineRepresentation) */

bool v8::internal::wasm::ThreadImpl::DoSimdLoadSplat<v8::internal::wasm::int2,long,long>
               (ulong param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = ExecuteLoad<long,long>();
  if (bVar2) {
    lVar3 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar3 + -0x11;
    local_40 = *(undefined1 *)(lVar3 + -1);
    uStack_48 = *(undefined8 *)(lVar3 + -9);
    local_50 = *(undefined8 *)(lVar3 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_50,param_1);
    if (local_50._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(param_1 + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(param_1 + 0x30) + 3)) +
        (long)((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(param_1 + 8) + 0xa8);
    }
    local_50 = CONCAT17(uStack_68,uStack_6f);
    local_70 = 5;
    local_60 = uStack_68;
    uStack_48 = local_50;
    StackValue::StackValue
              ((StackValue *)&local_50,&local_70,param_1,
               (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x18)) * -0xf0f0f0f0f0f0f0f);
    puVar4 = *(undefined8 **)(param_1 + 0x28);
    bVar2 = true;
    *(long *)(param_1 + 0x28) = (long)puVar4 + 0x11;
    *(undefined1 *)(puVar4 + 2) = local_40;
    puVar4[1] = uStack_48;
    *puVar4 = local_50;
  }
  else {
    bVar2 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

