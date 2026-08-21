
/* v8::internal::ObjectVisitor::VisitRelocInfo(v8::internal::RelocIterator*) */

void __thiscall
v8::internal::ObjectVisitor::VisitRelocInfo(ObjectVisitor *this,RelocIterator *param_1)

{
  if (param_1[0x38] == (RelocIterator)0x0) {
    do {
      RelocInfo::Visit<v8::internal::ObjectVisitor>((RelocInfo *)(param_1 + 0x10),this);
      RelocIterator::next(param_1);
    } while (param_1[0x38] == (RelocIterator)0x0);
  }
  return;
}

