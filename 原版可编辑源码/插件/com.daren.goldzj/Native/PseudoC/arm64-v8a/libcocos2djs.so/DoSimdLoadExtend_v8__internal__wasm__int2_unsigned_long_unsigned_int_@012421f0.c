
/* bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int2, unsigned long,
   unsigned int>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long,
   int*, v8::internal::MachineRepresentation) */

bool v8::internal::wasm::ThreadImpl::
     DoSimdLoadExtend<v8::internal::wasm::int2,unsigned_long,unsigned_int>(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  ulong *puVar5;
  uint7 uStack_87;
  undefined1 local_70;
  uint7 uStack_6f;
  undefined1 uStack_68;
  uint7 uStack_67;
  undefined1 local_60;
  ulong local_50;
  ulong uStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar3 = ExecuteLoad<unsigned_long,unsigned_long>();
  if (bVar3) {
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + -0x11;
    local_40 = *(undefined1 *)(lVar4 + -1);
    uStack_48 = *(undefined8 *)(lVar4 + -9);
    local_50 = *(undefined8 *)(lVar4 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_50,param_1);
    if (local_50._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(param_1 + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(param_1 + 0x30) + 3)) +
        (long)((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(param_1 + 8) + 0xa8);
    }
    uVar2 = CONCAT17(uStack_68,uStack_6f);
    local_50 = (ulong)uStack_6f & 0xffffffff;
    uStack_48 = uVar2 >> 0x20;
    uStack_87 = (uint7)local_50;
    uStack_68 = 0;
    uStack_67 = (uint7)(uint)(uVar2 >> 0x20);
    local_70 = 5;
    uStack_6f = uStack_87;
    local_60 = 0;
    StackValue::StackValue
              ((StackValue *)&local_50,&local_70,param_1,
               (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x18)) * -0xf0f0f0f0f0f0f0f);
    puVar5 = *(ulong **)(param_1 + 0x28);
    bVar3 = true;
    *(long *)(param_1 + 0x28) = (long)puVar5 + 0x11;
    *(undefined1 *)(puVar5 + 2) = local_40;
    puVar5[1] = uStack_48;
    *puVar5 = local_50;
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

