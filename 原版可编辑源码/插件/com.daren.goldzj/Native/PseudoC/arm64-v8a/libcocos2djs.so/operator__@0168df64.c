
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::RelocatablePtrConstantInfo
   const&, v8::internal::compiler::RelocatablePtrConstantInfo const&) */

bool v8::internal::compiler::operator!=
               (RelocatablePtrConstantInfo *param_1,RelocatablePtrConstantInfo *param_2)

{
  if ((param_1[8] == param_2[8]) && (*(long *)param_1 == *(long *)param_2)) {
    return *(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc);
  }
  return true;
}

