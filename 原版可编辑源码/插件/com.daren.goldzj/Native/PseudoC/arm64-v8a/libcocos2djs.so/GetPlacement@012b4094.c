
/* v8::internal::compiler::Scheduler::GetPlacement(v8::internal::compiler::Node*) */

undefined4 __thiscall v8::internal::compiler::Scheduler::GetPlacement(Scheduler *this,Node *param_1)

{
  return *(undefined4 *)
          (*(long *)(this + 0xb0) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10 + 0xc);
}

