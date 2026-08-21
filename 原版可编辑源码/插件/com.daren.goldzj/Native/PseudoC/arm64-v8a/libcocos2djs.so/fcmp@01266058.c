
/* v8::internal::Assembler::fcmp(v8::internal::VRegister const&, double) */

void v8::internal::Assembler::fcmp(VRegister *param_1,double param_2)

{
  ulong *in_x1;
  
  Emit((Assembler *)param_1,(int)*in_x1 << 5 | (uint)(*in_x1 >> 0x20 == 0x40) << 0x16 | 0x1e202008);
  return;
}

