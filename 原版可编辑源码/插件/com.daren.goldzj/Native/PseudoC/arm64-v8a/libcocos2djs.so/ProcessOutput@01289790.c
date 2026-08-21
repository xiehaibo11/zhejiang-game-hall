
/* v8::internal::PrintDisassembler::ProcessOutput(v8::internal::Instruction*) */

int __thiscall
v8::internal::PrintDisassembler::ProcessOutput(PrintDisassembler *this,Instruction *param_1)

{
  int iVar1;
  
  iVar1 = fprintf(*(FILE **)(this + 0x20),"0x%016lx  %08x\t\t%s\n",param_1,(ulong)*(uint *)param_1,
                  *(undefined8 *)(this + 8));
  return iVar1;
}

