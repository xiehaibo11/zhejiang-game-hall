
/* v8::internal::compiler::Scheduler::IsLive(v8::internal::compiler::Node*) */

bool __thiscall v8::internal::compiler::Scheduler::IsLive(Scheduler *this,Node *param_1)

{
  return *(int *)(*(long *)(this + 0xb0) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 +
                 0xc) != 0;
}

