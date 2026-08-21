
/* v8::internal::compiler::BasicBlock::GetCommonDominator(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*) */

void v8::internal::compiler::BasicBlock::GetCommonDominator(BasicBlock *param_1,BasicBlock *param_2)

{
  if (param_1 != param_2) {
    do {
      while (*(int *)(param_2 + 0xc) <= *(int *)(param_1 + 0xc)) {
        param_1 = *(BasicBlock **)(param_1 + 0x10);
        if (param_1 == param_2) {
          return;
        }
      }
      param_2 = *(BasicBlock **)(param_2 + 0x10);
    } while (param_1 != param_2);
  }
  return;
}

