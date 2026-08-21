
/* bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int8, short, signed
   char>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long, int*,
   v8::internal::MachineRepresentation) */

bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int8,short,signed_char>
               (ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined7 uStack_7f;
  char cStack_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  char cStack_68;
  undefined7 uStack_67;
  char local_60;
  ThreadImpl local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined1 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  bVar4 = ExecuteLoad<unsigned_long,unsigned_long>();
  if (bVar4) {
    lVar5 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar5 + -0x11;
    local_40 = *(undefined1 *)(lVar5 + -1);
    uStack_48 = *(undefined8 *)(lVar5 + -9);
    local_50 = SUB81(*(undefined8 *)(lVar5 + -0x11),0);
    uStack_4f = (undefined7)((ulong)*(undefined8 *)(lVar5 + -0x11) >> 8);
    StackValue::ExtractValue(&local_50,param_1);
    if (local_50 == (ThreadImpl)0x6) {
      *(undefined4 *)
       ((**(ulong **)(param_1 + 0x30) & 0xffffffff00000000 |
        (ulong)*(uint *)(**(ulong **)(param_1 + 0x30) + 3)) +
        (long)((*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x18)) * -0x3c3c3c3c) + 7) =
           *(undefined4 *)(*(long *)(param_1 + 8) + 0xa8);
    }
    uVar3 = CONCAT17(cStack_68,uStack_6f);
    local_50 = SUB71(uStack_6f,0);
    auVar9._8_8_ = 0xfffffffffffffff0;
    auVar9._0_8_ = 0xfffffffffffffff8;
    auVar7._8_8_ = 0xffffffffffffffe0;
    auVar7._0_8_ = 0xffffffffffffffe8;
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = uVar3;
    auVar9 = NEON_ushl(auVar8,auVar9,8);
    auVar2._8_8_ = uVar3;
    auVar2._0_8_ = uVar3;
    auVar8 = NEON_ushl(auVar2,auVar7,8);
    uStack_48 = CONCAT26((short)cStack_68,
                         CONCAT24((short)(char)((uint7)uStack_6f >> 0x30),
                                  CONCAT22((short)(char)((uint7)uStack_6f >> 0x28),(short)auVar8[8])
                                 ));
    uStack_4f = (undefined7)
                (CONCAT62(CONCAT24((short)auVar8[0],CONCAT22((short)auVar9[8],(short)auVar9[0])),
                          (short)(char)local_50) >> 8);
    uStack_7f = (undefined7)uStack_48;
    cStack_78 = cStack_68 >> 7;
    cStack_68 = auVar8[0] >> 7;
    uStack_67 = uStack_7f;
    local_70 = 5;
    uStack_6f = (undefined7)CONCAT71(uStack_4f,local_50);
    local_60 = cStack_78;
    StackValue::StackValue
              ((StackValue *)&local_50,&local_70,param_1,
               (*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x18)) * -0xf0f0f0f0f0f0f0f);
    puVar6 = *(undefined8 **)(param_1 + 0x28);
    bVar4 = true;
    *(long *)(param_1 + 0x28) = (long)puVar6 + 0x11;
    *(undefined1 *)(puVar6 + 2) = local_40;
    puVar6[1] = uStack_48;
    *puVar6 = CONCAT71(uStack_4f,local_50);
  }
  else {
    bVar4 = false;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

