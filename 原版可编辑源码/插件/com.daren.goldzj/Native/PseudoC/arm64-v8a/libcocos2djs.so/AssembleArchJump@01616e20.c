
/* v8::internal::compiler::CodeGenerator::AssembleArchJump(v8::internal::compiler::RpoNumber) */

void __thiscall
v8::internal::compiler::CodeGenerator::AssembleArchJump(CodeGenerator *this,uint param_2)

{
  ulong uVar1;
  
  uVar1 = IsNextInAssemblyOrder(this,param_2);
  if ((uVar1 & 1) != 0) {
    return;
  }
  Assembler::b((Assembler *)(this + 0xd0),
               (Label *)(*(long *)(this + 0xa8) + ((long)((ulong)param_2 << 0x20) >> 0x1d)));
  Assembler::CheckVeneerPool((Assembler *)(this + 0xd0),false,false,0x400);
  return;
}

