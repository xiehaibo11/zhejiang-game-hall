
/* v8::internal::LoadHandler::GetKeyedAccessLoadMode(v8::internal::MaybeObject) */

bool v8::internal::LoadHandler::GetKeyedAccessLoadMode(ulong param_1)

{
  if ((param_1 & 1) == 0) {
    return (param_1 & 0x9c) == 0x80;
  }
  return false;
}

