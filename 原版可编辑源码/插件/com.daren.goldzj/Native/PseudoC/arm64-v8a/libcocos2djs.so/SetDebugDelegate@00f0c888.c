
/* v8::internal::Debug::SetDebugDelegate(v8::debug::DebugDelegate*) */

void __thiscall v8::internal::Debug::SetDebugDelegate(Debug *this,DebugDelegate *param_1)

{
  *(DebugDelegate **)this = param_1;
  UpdateState(this);
  return;
}

