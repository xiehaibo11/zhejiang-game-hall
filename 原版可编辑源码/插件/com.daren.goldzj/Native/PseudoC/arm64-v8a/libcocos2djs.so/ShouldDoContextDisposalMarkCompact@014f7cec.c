
/* v8::internal::GCIdleTimeHandler::ShouldDoContextDisposalMarkCompact(int, double, unsigned long)
    */

bool v8::internal::GCIdleTimeHandler::ShouldDoContextDisposalMarkCompact
               (int param_1,double param_2,ulong param_3)

{
  return param_3 < 0x6400001 && (param_2 < 100.0 && (0 < param_1 && 0.0 < param_2));
}

