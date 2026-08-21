
/* v8::internal::VerifySmisVisitor::VisitRootPointers(v8::internal::Root, char const*,
   v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void v8::internal::VerifySmisVisitor::VisitRootPointers(void)

{
  byte bVar1;
  byte *in_x3;
  byte *in_x4;
  
  do {
    if (in_x4 <= in_x3) {
      return;
    }
    bVar1 = *in_x3;
    in_x3 = in_x3 + 8;
  } while ((bVar1 & 1) == 0);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(*current).IsSmi()");
}

