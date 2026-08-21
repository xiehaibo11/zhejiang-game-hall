
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::CallRuntimeParameters
   const&, v8::internal::compiler::CallRuntimeParameters const&) */

bool v8::internal::compiler::operator!=
               (CallRuntimeParameters *param_1,CallRuntimeParameters *param_2)

{
  return *(int *)param_1 != *(int *)param_2 || *(long *)(param_1 + 8) != *(long *)(param_2 + 8);
}

