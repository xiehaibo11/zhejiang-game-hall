
/* v8::internal::abort_with_reason(int) */

void v8::internal::abort_with_reason(int param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = IsValidAbortReason(param_1);
  if ((uVar1 & 1) != 0) {
    uVar2 = GetAbortReason((ulong)(uint)param_1);
    base::OS::PrintError("abort: %s\n",uVar2);
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
  base::OS::PrintError("abort: <unknown reason: %d>\n",(ulong)(uint)param_1);
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

