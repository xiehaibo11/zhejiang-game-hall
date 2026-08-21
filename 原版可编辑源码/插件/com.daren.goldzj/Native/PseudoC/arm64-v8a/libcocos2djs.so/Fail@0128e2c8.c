
/* v8::internal::RegExpMacroAssemblerARM64::Fail() */

void __thiscall v8::internal::RegExpMacroAssemblerARM64::Fail(RegExpMacroAssemblerARM64 *this)

{
  Assembler *this_00;
  
  TurboAssembler::Mov(*(TurboAssembler **)(this + 0x28),(Register *)&DAT_019f7c20,0);
  this_00 = *(Assembler **)(this + 0x28);
  Assembler::b(this_00,(Label *)(this + 0x5c));
  Assembler::CheckVeneerPool(this_00,false,false,0x400);
  return;
}

