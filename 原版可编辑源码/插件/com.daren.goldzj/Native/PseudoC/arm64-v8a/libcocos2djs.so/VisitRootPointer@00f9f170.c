
/* v8::internal::FixStaleLeftTrimmedHandlesVisitor::VisitRootPointer(v8::internal::Root, char
   const*, v8::internal::FullObjectSlot) */

void v8::internal::FixStaleLeftTrimmedHandlesVisitor::VisitRootPointer(void)

{
  ulong *in_x3;
  ulong uVar1;
  
  uVar1 = *in_x3;
  if ((((uVar1 & 1) != 0) && ((*(uint *)(uVar1 - 1) & 1) != 0)) &&
     ((*(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) | 1) == 0xa1)) {
    *in_x3 = 0;
  }
  return;
}

