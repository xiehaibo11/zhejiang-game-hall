
/* v8::internal::Assembler::brk(int) */

void v8::internal::Assembler::brk(int param_1)

{
  int in_w1;
  
  Emit((Assembler *)(ulong)(uint)param_1,in_w1 << 5 | 0xd4200000);
  return;
}

