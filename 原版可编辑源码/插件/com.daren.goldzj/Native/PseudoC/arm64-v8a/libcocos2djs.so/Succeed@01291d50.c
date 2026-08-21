
/* v8::internal::RegExpMacroAssemblerARM64::Succeed() */

bool __thiscall v8::internal::RegExpMacroAssemblerARM64::Succeed(RegExpMacroAssemblerARM64 *this)

{
  Assembler *this_00;
  
  this_00 = *(Assembler **)(this + 0x28);
  Assembler::b(this_00,(Label *)(this + 0x4c));
  Assembler::CheckVeneerPool(this_00,false,false,0x400);
  return *(int *)(this + 0x10) != 0;
}

