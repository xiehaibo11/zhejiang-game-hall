
/* v8::internal::MacroAssembler::ExitFramePreserveFPRegs() */

void __thiscall v8::internal::MacroAssembler::ExitFramePreserveFPRegs(MacroAssembler *this)

{
  undefined1 auVar1 [16];
  
  auVar1 = CPURegList::GetCallerSavedV(0x40);
  TurboAssembler::PushCPURegList(this,auVar1._0_8_,auVar1._8_8_);
  return;
}

