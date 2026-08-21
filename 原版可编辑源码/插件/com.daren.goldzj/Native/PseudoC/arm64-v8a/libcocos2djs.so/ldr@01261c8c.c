
/* v8::internal::Assembler::ldr(v8::internal::CPURegister const&, v8::internal::MemOperand const&)
    */

void v8::internal::Assembler::ldr(CPURegister *param_1,MemOperand *param_2)

{
  if (*(int *)(param_2 + 8) == 0) {
    LoadStore();
    return;
  }
  if ((*(int *)(param_2 + 4) - 8U >> 3 | *(int *)(param_2 + 4) << 0x1d) < 8) {
    LoadStore();
    return;
  }
  LoadStore();
  return;
}

