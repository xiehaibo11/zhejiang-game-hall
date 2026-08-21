
/* bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int2, long,
   int>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*,
   v8::internal::MachineRepresentation) */

bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int2,long,int>
               (ulong param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  int7 iStack_87;
  char cStack_80;
  int7 iStack_7f;
  char cStack_78;
  undefined1 local_70;
  int7 iStack_6f;
  char cStack_68;
  int7 iStack_67;
  char local_60;
  long local_50;
  long lStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar2 = ExecuteLoad<unsigned_long,unsigned_long>();
  if (bVar2) {
    lVar4 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar4 + -0x11;
    local_40 = *(undefined1 *)(lVar4 + -1);
    lStack_48 = *(undefined8 *)(lVar4 + -9);
    local_50 = *(undefined8 *)(lVar4 + -0x11);
    StackValue::ExtractValue((ThreadImpl *)&local_50,param_1);
    if (local_50._0_1_ == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(param_1 + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(param_1 + 0x30) + 3)) +
        (long)((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(param_1 + 8) + 0xa8);
    }
    iVar3 = (int)iStack_6f;
    local_50 = (long)iVar3;
    lStack_48 = CONCAT17(cStack_68,iStack_6f) >> 0x20;
    iStack_7f = (int7)(int)((ulong)CONCAT17(cStack_68,iStack_6f) >> 0x20);
    cStack_78 = cStack_68 >> 7;
    iStack_87 = (int7)iVar3;
    cStack_80 = (char)(iVar3 >> 0x1f);
    cStack_68 = cStack_80;
    iStack_67 = iStack_7f;
    local_70 = 5;
    iStack_6f = iStack_87;
    local_60 = cStack_78;
    StackValue::StackValue
              ((StackValue *)&local_50,&local_70,param_1,
               (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x18)) * -0xf0f0f0f0f0f0f0f);
    plVar5 = *(long **)(param_1 + 0x28);
    bVar2 = true;
    *(long *)(param_1 + 0x28) = (long)plVar5 + 0x11;
    *(undefined1 *)(plVar5 + 2) = local_40;
    plVar5[1] = lStack_48;
    *plVar5 = local_50;
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

