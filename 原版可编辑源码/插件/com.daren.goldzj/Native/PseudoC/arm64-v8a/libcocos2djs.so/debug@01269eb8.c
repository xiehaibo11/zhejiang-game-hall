
/* v8::internal::Assembler::debug(char const*, unsigned int, unsigned int) */

void __thiscall
v8::internal::Assembler::debug(Assembler *this,char *param_1,uint param_2,uint param_3)

{
  if ((param_3 & 1) == 0) {
    return;
  }
  Emit(this,0xd4200000);
  return;
}

