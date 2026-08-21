
/* v8::internal::ScopeInfo::NeedsPositionInfo(v8::internal::ScopeType) */

bool v8::internal::ScopeInfo::NeedsPositionInfo(char param_1)

{
  return (byte)(param_1 - 1U) < 4;
}

