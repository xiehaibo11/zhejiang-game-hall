
/* v8::internal::Assembler::ShouldEmitVeneer(int, unsigned long) */

bool __thiscall v8::internal::Assembler::ShouldEmitVeneer(Assembler *this,int param_1,ulong param_2)

{
  return (long)param_1 <=
         (long)(param_2 + *(long *)(this + 0x128) * 4 +
                (long)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 8);
}

