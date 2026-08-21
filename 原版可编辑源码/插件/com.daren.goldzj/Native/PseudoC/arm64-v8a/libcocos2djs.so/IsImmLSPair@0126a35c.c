
/* v8::internal::Assembler::IsImmLSPair(long, unsigned int) */

bool v8::internal::Assembler::IsImmLSPair(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 >> ((ulong)param_2 & 0x3f);
  return lVar1 << ((ulong)param_2 & 0x3f) == param_1 && lVar1 + 0x40U < 0x80;
}

