
/* v8::internal::CallPrinter::Print(v8::internal::Handle<v8::internal::String>) */

void v8::internal::CallPrinter::Print(long param_1)

{
  if ((*(char *)(param_1 + 0x1c) != '\0') && (*(char *)(param_1 + 0x1d) == '\0')) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    IncrementalStringBuilder::AppendString(*(IncrementalStringBuilder **)(param_1 + 0x10));
    return;
  }
  return;
}

