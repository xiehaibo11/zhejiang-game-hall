
/* v8::internal::RootScavengeVisitor::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::RootScavengeVisitor::VisitRootPointers
          (RootScavengeVisitor *this,undefined8 param_2,undefined8 param_3,ulong *param_4,
          ulong *param_5)

{
  ulong uVar1;
  
  if (param_4 < param_5) {
    uVar1 = *param_4;
    while( true ) {
      if (((uVar1 & 1) != 0) && ((*(byte *)((uVar1 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) {
        Scavenger::ScavengeObject<v8::internal::FullHeapObjectSlot>
                  (*(Scavenger **)(this + 8),param_4);
      }
      param_4 = param_4 + 1;
      if (param_5 <= param_4) break;
      uVar1 = *param_4;
    }
  }
  return;
}

