
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(v8::internal::compiler::FeedbackSource const&,
   v8::internal::compiler::FeedbackSource const&) */

bool v8::internal::compiler::operator==(FeedbackSource *param_1,FeedbackSource *param_2)

{
  if (*(long *)param_1 == *(long *)param_2) {
    return *(int *)(param_1 + 8) == *(int *)(param_2 + 8);
  }
  return false;
}

