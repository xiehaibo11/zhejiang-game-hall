
/* v8::internal::CheckHandleCountVisitor::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::CheckHandleCountVisitor::VisitRootPointers
          (CheckHandleCountVisitor *this,undefined8 param_2,undefined8 param_3,long param_4,
          long param_5)

{
  *(ulong *)(this + 8) = *(long *)(this + 8) + ((ulong)(param_5 - param_4) >> 3);
  return;
}

