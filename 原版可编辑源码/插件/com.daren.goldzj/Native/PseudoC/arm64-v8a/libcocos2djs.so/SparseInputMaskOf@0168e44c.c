
/* v8::internal::compiler::SparseInputMaskOf(v8::internal::compiler::Operator const*) */

undefined4 v8::internal::compiler::SparseInputMaskOf(Operator *param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  if (*(short *)(param_1 + 0x10) != 0x2b) {
    lVar1 = 0x2c;
  }
  return *(undefined4 *)(param_1 + lVar1);
}

