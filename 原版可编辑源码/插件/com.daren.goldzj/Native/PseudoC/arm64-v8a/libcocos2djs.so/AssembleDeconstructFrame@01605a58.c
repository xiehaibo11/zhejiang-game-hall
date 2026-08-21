
/* v8::internal::compiler::CodeGenerator::AssembleDeconstructFrame() */

void __thiscall v8::internal::compiler::CodeGenerator::AssembleDeconstructFrame(CodeGenerator *this)

{
  long lVar1;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0x13;
  local_80[0] = 0;
  local_78 = 0;
  local_60 = 0;
  local_50 = 0x400000001d;
  uStack_40 = 0xffffffff;
  local_48 = 0;
  TurboAssembler::Mov((TurboAssembler *)(this + 0xd0),&DAT_01a56370,local_80,0);
  TurboAssembler::Pop((TurboAssembler *)(this + 0xd0),(CPURegister *)&DAT_01a5637c,
                      (CPURegister *)&DAT_01a56388,(CPURegister *)&DAT_01a56394,
                      (CPURegister *)&DAT_01a56394);
  UnwindingInfoWriter::MarkFrameDeconstructed
            ((UnwindingInfoWriter *)(this + 0x30),*(int *)(this + 0xf0) - *(int *)(this + 0xe0));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

