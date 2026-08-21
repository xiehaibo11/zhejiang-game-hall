
/* bool v8::internal::wasm::ThreadImpl::DoSimdLoadSplat<v8::internal::wasm::int4, int,
   int>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*,
   v8::internal::MachineRepresentation) */

bool v8::internal::wasm::ThreadImpl::DoSimdLoadSplat<v8::internal::wasm::int4,int,int>
               (ulong param_1)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined7 uStack_87;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar3 = ExecuteLoad<int,int>();
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
    uVar1 = *(undefined4 *)((ulong)&local_70 | 1);
    local_50 = CONCAT44(uVar1,uVar1);
    uStack_48 = CONCAT44(uVar1,uVar1);
    uStack_7f = (undefined7)uStack_48;
    uStack_78 = (undefined1)((uint)uVar1 >> 0x18);
    uStack_87 = (undefined7)local_50;
    uStack_68 = CONCAT71(uStack_7f,uStack_78);
    local_70 = CONCAT71(uStack_87,5);
    local_60 = uStack_78;
    StackValue::StackValue
              ((StackValue *)&local_50,&local_70,param_1,
               (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x18)) * -0xf0f0f0f0f0f0f0f);
    puVar5 = *(undefined8 **)(param_1 + 0x28);
    bVar3 = true;
    *(long *)(param_1 + 0x28) = (long)puVar5 + 0x11;
    *(undefined1 *)(puVar5 + 2) = local_40;
    puVar5[1] = uStack_48;
    *puVar5 = local_50;
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

