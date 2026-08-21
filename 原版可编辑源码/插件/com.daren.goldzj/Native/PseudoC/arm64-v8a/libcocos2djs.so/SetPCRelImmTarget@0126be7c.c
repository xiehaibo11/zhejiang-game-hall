
/* v8::internal::Instruction::SetPCRelImmTarget(v8::internal::AssemblerOptions const&,
   v8::internal::Instruction*) */

void __thiscall
v8::internal::Instruction::SetPCRelImmTarget
          (Instruction *this,AssemblerOptions *param_1,Instruction *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined **local_1c0 [47];
  Assembler *local_48;
  BlockScope aBStack_40 [8];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = ((long)param_2 - (long)this) + 0x100000;
  if (uVar1 >> 0x15 == 0) {
    if (0x1fffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","is_int21(imm21)");
    }
    uVar3 = (uint)((long)param_2 - (long)this);
    *(uint *)this = (uVar3 & 0x1ffffc) << 3 | (uVar3 & 3) << 0x1d | *(uint *)this & 0x9f00001f;
  }
  else {
    PatchingAssembler::PatchingAssembler((PatchingAssembler *)local_1c0,param_1,(uchar *)this,4);
    PatchingAssembler::PatchAdrFar((long)local_1c0);
    local_1c0[0] = &PTR__PatchingAssembler_01cbcf38;
    Assembler::EndBlockVeneerPool(local_48);
    ConstantPool::BlockScope::~BlockScope(aBStack_40);
    Assembler::~Assembler((Assembler *)local_1c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

