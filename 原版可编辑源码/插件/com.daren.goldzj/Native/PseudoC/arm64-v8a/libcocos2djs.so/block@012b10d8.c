
/* v8::internal::compiler::Schedule::block(v8::internal::compiler::Node*) const */

undefined8 __thiscall v8::internal::compiler::Schedule::block(Schedule *this,Node *param_1)

{
  if ((uint)((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) <
      (uint)((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28)) >> 3)) {
    return *(undefined8 *)
            (*(long *)(this + 0x28) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8);
  }
  return 0;
}

