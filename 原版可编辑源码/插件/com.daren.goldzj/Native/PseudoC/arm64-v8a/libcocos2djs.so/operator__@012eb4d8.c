
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::ElementsTransition
   const&, v8::internal::compiler::ElementsTransition const&) */

bool v8::internal::compiler::operator==(ElementsTransition *param_1,ElementsTransition *param_2)

{
  if ((*param_1 == *param_2) && (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) {
    return *(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10);
  }
  return false;
}

