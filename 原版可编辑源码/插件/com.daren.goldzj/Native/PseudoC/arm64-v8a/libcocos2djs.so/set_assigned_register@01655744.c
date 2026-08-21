
/* v8::internal::compiler::LiveRange::set_assigned_register(int) */

void __thiscall
v8::internal::compiler::LiveRange::set_assigned_register(LiveRange *this,int param_1)

{
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffffe07f | param_1 << 7;
  return;
}

