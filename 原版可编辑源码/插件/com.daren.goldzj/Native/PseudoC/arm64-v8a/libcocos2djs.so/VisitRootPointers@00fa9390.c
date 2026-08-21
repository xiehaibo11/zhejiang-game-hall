
/* v8::internal::IncrementalMarkingRootMarkingVisitor::VisitRootPointers(v8::internal::Root, char
   const*, v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::IncrementalMarkingRootMarkingVisitor::VisitRootPointers
          (IncrementalMarkingRootMarkingVisitor *this,undefined8 param_2,undefined8 param_3,
          ulong param_4,ulong param_5)

{
  for (; param_4 < param_5; param_4 = param_4 + 8) {
    MarkObjectByPointer(this,param_4);
  }
  return;
}

