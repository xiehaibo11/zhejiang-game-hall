
/* v8::internal::PointersUpdatingVisitor::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void v8::internal::PointersUpdatingVisitor::VisitRootPointers(void)

{
  ulong *in_x3;
  ulong *in_x4;
  ulong uVar1;
  
  for (; in_x3 < in_x4; in_x3 = in_x3 + 1) {
    uVar1 = *in_x3;
    if (((uVar1 & 1) != 0) && ((*(uint *)(uVar1 - 1) & 1) == 0)) {
      *in_x3 = (uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1)) + 1;
    }
  }
  return;
}

