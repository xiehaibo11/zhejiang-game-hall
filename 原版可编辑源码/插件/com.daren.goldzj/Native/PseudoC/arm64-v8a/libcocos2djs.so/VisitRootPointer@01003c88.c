
/* v8::internal::RootScavengeVisitor::VisitRootPointer(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::RootScavengeVisitor::VisitRootPointer
          (RootScavengeVisitor *this,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  if (((*param_4 & 1) != 0) && ((*(byte *)((*param_4 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
    Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>(*(Scavenger **)(this + 8),param_4);
    return;
  }
  return;
}

