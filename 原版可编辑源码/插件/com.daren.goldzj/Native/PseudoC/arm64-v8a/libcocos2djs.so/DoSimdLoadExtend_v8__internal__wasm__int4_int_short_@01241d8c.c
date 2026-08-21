
/* bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int4, int,
   short>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*,
   v8::internal::MachineRepresentation) */

bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int4,int,short>
               (ulong param_1)

{
  long lVar1;
  short sVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined7 uStack_87;
  char cStack_80;
  undefined7 uStack_7f;
  char cStack_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  char cStack_68;
  undefined7 uStack_67;
  char local_60;
  undefined8 local_50;
  undefined8 uStack_48;
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
    sVar2 = (short)(CONCAT17(cStack_68,uStack_6f) >> 0x30);
    local_50 = CONCAT44((int)uStack_6f >> 0x10,(int)(short)uStack_6f);
    uStack_48 = CONCAT44((int)sVar2,(int)((uint7)uStack_6f >> 0x10) >> 0x10);
    uStack_7f = (undefined7)uStack_48;
    cStack_78 = (char)(sVar2 >> 0xf);
    uStack_87 = (undefined7)local_50;
    cStack_80 = (char)((uint7)uStack_6f >> 0x18) >> 7;
    cStack_68 = cStack_80;
    uStack_67 = uStack_7f;
    local_70 = 5;
    uStack_6f = uStack_87;
    local_60 = cStack_78;
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
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

