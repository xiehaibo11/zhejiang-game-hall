
/* v8::internal::Assembler::IsImmLSScaled(long, unsigned int) */

bool v8::internal::Assembler::IsImmLSScaled(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 >> ((ulong)param_2 & 0x3f);
  return uVar1 < 0x1000 && uVar1 << ((ulong)param_2 & 0x3f) == param_1;
}

