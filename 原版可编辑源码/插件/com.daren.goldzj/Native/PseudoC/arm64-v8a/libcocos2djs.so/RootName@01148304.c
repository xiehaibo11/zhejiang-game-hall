
/* v8::internal::RootVisitor::RootName(v8::internal::Root) */

undefined * v8::internal::RootVisitor::RootName(uint param_1)

{
  if (param_1 < 0x17) {
    return (&PTR_s__Internalized_strings__01cb4ff8)[(int)param_1];
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

