
/* v8::internal::MarkCompactCollector::MarkRoots(v8::internal::RootVisitor*,
   v8::internal::ObjectVisitor*) */

void __thiscall
v8::internal::MarkCompactCollector::MarkRoots
          (MarkCompactCollector *this,RootVisitor *param_1,ObjectVisitor *param_2)

{
  Heap::IterateStrongRoots(*(Heap **)(this + 8),param_1,5);
  MarkStringTable(this,param_2);
  ProcessTopOptimizedFrame(this,param_2);
  return;
}

