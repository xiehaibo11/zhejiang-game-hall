
/* v8::internal::Builtins::IsBuiltin(v8::internal::Code) */

bool v8::internal::Builtins::IsBuiltin(long param_1)

{
  return *(uint *)(param_1 + 0x27) < 0x5bc;
}

