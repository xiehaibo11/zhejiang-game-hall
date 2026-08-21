
/* v8::internal::Builtins::IsIsolateIndependentBuiltin(v8::internal::Code) */

bool v8::internal::Builtins::IsIsolateIndependentBuiltin(long param_1)

{
  return *(uint *)(param_1 + 0x27) < 0x5bc;
}

