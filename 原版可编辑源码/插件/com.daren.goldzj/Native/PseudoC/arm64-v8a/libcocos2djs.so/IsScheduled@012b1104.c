
/* v8::internal::compiler::Schedule::IsScheduled(v8::internal::compiler::Node*) */

bool __thiscall v8::internal::compiler::Schedule::IsScheduled(Schedule *this,Node *param_1)

{
  if (((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) <
      (ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3)) {
    return *(long *)(*(long *)(this + 0x28) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8) !=
           0;
  }
  return false;
}

