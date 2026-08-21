
/* v8::internal::compiler::CodeGenerator::AssembleTailCallBeforeGap(v8::internal::compiler::Instruction*,
   int) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleTailCallBeforeGap
          (CodeGenerator *this,Instruction *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 local_80 [8];
  undefined1 local_78;
  long local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = this;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar4 = *(long **)(this + 0x18);
  iVar3 = 2;
  if ((char)plVar4[2] != '\0') {
    iVar3 = 2 - *(int *)(*plVar4 + 4);
  }
  uVar1 = ((param_2 + iVar3) - *(int *)((long)plVar4 + 0xc)) - 2;
  if (0 < (int)uVar1) {
    local_60 = (ulong)uVar1 << 3;
    local_80[0] = 0;
    local_78 = 0;
    local_58 = 0x13;
    local_50 = 0xffffffff;
    local_48 = 2;
    auVar5 = TurboAssembler::AddSubMacro
                       ((TurboAssembler *)(this + 0xd0),&DAT_01a56370,&DAT_01a56370,local_80,0,
                        0x40000000);
    *(uint *)((long)plVar4 + 0xc) = *(int *)((long)plVar4 + 0xc) + uVar1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(auVar5._0_8_,auVar5._8_8_);
}

