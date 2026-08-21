
/* v8::internal::PointersUpdatingVisitor::VisitRootPointer(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot) */

void v8::internal::PointersUpdatingVisitor::VisitRootPointer(void)

{
  ulong *in_x3;
  ulong uVar1;
  
  uVar1 = *in_x3;
  if (((uVar1 & 1) != 0) && ((*(uint *)(uVar1 - 1) & 1) == 0)) {
    *in_x3 = (uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1)) + 1;
  }
  return;
}

