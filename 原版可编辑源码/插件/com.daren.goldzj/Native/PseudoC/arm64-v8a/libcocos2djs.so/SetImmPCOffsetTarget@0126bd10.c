
/* v8::internal::Instruction::SetImmPCOffsetTarget(v8::internal::AssemblerOptions const&,
   v8::internal::Instruction*) */

void __thiscall
v8::internal::Instruction::SetImmPCOffsetTarget
          (Instruction *this,AssemblerOptions *param_1,Instruction *param_2)

{
  uint uVar1;
  long lVar2;
  undefined **local_1d0 [47];
  Assembler *local_58;
  BlockScope aBStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)this;
  if ((uVar1 & 0x1f000000) == 0x10000000) {
    SetPCRelImmTarget(this,param_1,param_2);
  }
  else if (((uVar1 >> 0x19 == 0x2a) || ((uVar1 & 0x7c000000) == 0x14000000)) ||
          ((uVar1 & 0x7e000000 | 0x2000000) == 0x36000000)) {
    SetBranchImmTarget(this,param_2);
  }
  else if (((uVar1 & 0xffe0001f) == 0xd4200000) &&
          ((*(uint *)(this + 4) & 0xffe0001f) == 0xd4200000)) {
    PatchingAssembler::PatchingAssembler((PatchingAssembler *)local_1d0,param_1,(uchar *)this,2);
    Assembler::brk((int)local_1d0);
    Assembler::brk((int)local_1d0);
    local_1d0[0] = &PTR__PatchingAssembler_01cbcf38;
    Assembler::EndBlockVeneerPool(local_58);
    ConstantPool::BlockScope::~BlockScope(aBStack_50);
    Assembler::~Assembler((Assembler *)local_1d0);
  }
  else {
    if (0x7ffff < (((long)param_2 - (long)this) * 0x40000000 >> 0x20) + 0x40000U) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","is_int19(imm19)");
    }
    *(uint *)this =
         uVar1 & 0xff000000 |
         uVar1 & 0x1f | ((uint)((ulong)((long)param_2 - (long)this) >> 2) & 0x7ffff) << 5;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

