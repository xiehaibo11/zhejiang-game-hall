
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::ContextAccess const&,
   v8::internal::compiler::ContextAccess const&) */

bool v8::internal::compiler::operator!=(ContextAccess *param_1,ContextAccess *param_2)

{
  if ((*(short *)(param_1 + 2) == *(short *)(param_2 + 2)) &&
     (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) {
    return (*param_1 != (ContextAccess)0x0) != (*param_2 != (ContextAccess)0x0);
  }
  return true;
}

