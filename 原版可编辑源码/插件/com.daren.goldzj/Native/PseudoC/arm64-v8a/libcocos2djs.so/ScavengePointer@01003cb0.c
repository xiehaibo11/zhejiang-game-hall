
/* v8::internal::RootScavengeVisitor::ScavengePointer(v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::RootScavengeVisitor::ScavengePointer(RootScavengeVisitor *this,ulong *param_2)

{
  if (((*param_2 & 1) != 0) && ((*(byte *)((*param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
    Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>(*(Scavenger **)(this + 8));
    return;
  }
  return;
}

