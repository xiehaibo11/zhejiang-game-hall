
/* v8::internal::compiler::InstructionSelector::VisitWord64Sar(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64Sar(InstructionSelector *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  InstructionSequence *this_00;
  ulong local_90;
  undefined8 local_88;
  ulong local_80 [2];
  char local_70 [16];
  Node *local_60;
  int local_58;
  uint local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_016286f0(local_70,param_1,this);
  if (local_70[0] == '\0') {
    FUN_0161e41c(this,0x90,param_1,2);
  }
  else {
    uVar2 = GetVirtualRegister(this,local_60);
    MarkAsUsed(this,local_60);
    this_00 = *(InstructionSequence **)(this + 0x10);
    local_90 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
    Constant::Constant((Constant *)local_80,local_58);
    local_88 = InstructionSequence::AddImmediate(this_00,(Constant *)local_80);
    uVar2 = GetVirtualRegister(this,param_1);
    MarkAsDefined(this,param_1);
    local_80[0] = (uVar2 & 0xffffffff) << 3 | 0xd800000001;
    Emit(this,local_50 | 0x200,1,(InstructionOperand *)local_80,2,(InstructionOperand *)&local_90,0,
         (InstructionOperand *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

