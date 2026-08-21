
/* v8::internal::wasm::JumpTableAssembler::PatchJumpTableSlot(unsigned long, unsigned long, unsigned
   long) */

void v8::internal::wasm::JumpTableAssembler::PatchJumpTableSlot
               (ulong param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  JumpTableAssembler aJStack_200 [16];
  int local_1f0;
  int local_1e0;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  JumpTableAssembler(aJStack_200,param_1,0x100);
  uVar2 = EmitJumpSlot(aJStack_200,param_3);
  if ((uVar2 & 1) == 0) {
    PatchFarJumpSlot(param_2,param_3);
    uVar2 = EmitJumpSlot(aJStack_200,param_2);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","jtasm.EmitJumpSlot(far_jump_table_slot)");
    }
  }
  NopBytes(aJStack_200,(local_1f0 - local_1e0) + 4);
  FlushInstructionCache((void *)param_1,4);
  Assembler::~Assembler((Assembler *)aJStack_200);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

