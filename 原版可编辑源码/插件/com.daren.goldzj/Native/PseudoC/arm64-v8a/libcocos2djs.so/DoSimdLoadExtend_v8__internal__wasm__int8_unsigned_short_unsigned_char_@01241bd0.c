
/* bool v8::internal::wasm::ThreadImpl::DoSimdLoadExtend<v8::internal::wasm::int8, unsigned short,
   unsigned char>(v8::internal::wasm::Decoder*, v8::internal::wasm::InterpreterCode*, unsigned long,
   int*, v8::internal::MachineRepresentation) */

bool v8::internal::wasm::ThreadImpl::
     DoSimdLoadExtend<v8::internal::wasm::int8,unsigned_short,unsigned_char>(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined7 uStack_7f;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 local_60;
  ThreadImpl local_50;
  undefined7 uStack_4f;
  ulong uStack_48;
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
    uVar3 = CONCAT17(uStack_68,uStack_6f);
    auVar10._8_8_ = 0xfffffffffffffff0;
    auVar10._0_8_ = 0xfffffffffffffff8;
    auVar8._8_8_ = 0xffffffffffffffe0;
    auVar8._0_8_ = 0xffffffffffffffe8;
    auVar9._8_8_ = uVar3;
    auVar9._0_8_ = uVar3;
    auVar10 = NEON_ushl(auVar9,auVar10,8);
    auVar2._8_8_ = uVar3;
    auVar2._0_8_ = uVar3;
    auVar9 = NEON_ushl(auVar2,auVar8,8);
    uVar7 = CONCAT26(auVar9._8_2_,CONCAT24(auVar9._0_2_,CONCAT22(auVar10._8_2_,auVar10._0_2_))) &
            0xff00ff00ff00ff;
    uStack_96 = (undefined6)uVar7;
    uStack_90 = (undefined2)(uVar7 >> 0x30);
    uVar7 = CONCAT62(uStack_96,(short)uStack_6f) & 0xffffffffffff00ff;
    uStack_48 = (ulong)CONCAT16(uStack_68,
                                CONCAT24((short)((ulong)uVar3 >> 0x30),
                                         CONCAT22((short)((uint7)uStack_6f >> 0x28),uStack_90))) &
                0xffff00ff00ffffff;
    local_50 = SUB81(uVar7,0);
    uStack_4f = (undefined7)(uVar7 >> 8);
    uStack_7f = (undefined7)uStack_48;
    uStack_68 = 0;
    uStack_67 = uStack_7f;
    local_70 = 5;
    uStack_6f = (undefined7)uVar7;
    local_60 = 0;
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

