
/* v8::internal::IncrementalMarkingRootMarkingVisitor::VisitRootPointer(v8::internal::Root, char
   const*, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::IncrementalMarkingRootMarkingVisitor::VisitRootPointer
          (IncrementalMarkingRootMarkingVisitor *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4)

{
  MarkObjectByPointer(this,param_4);
  return;
}

