
/* v8::internal::compiler::hash_value(v8::internal::compiler::CreateArrayParameters const&) */

void v8::internal::compiler::hash_value(CreateArrayParameters *param_1)

{
  base::hash_combine(*(ulong *)param_1,*(ulong *)(param_1 + 8));
  return;
}

