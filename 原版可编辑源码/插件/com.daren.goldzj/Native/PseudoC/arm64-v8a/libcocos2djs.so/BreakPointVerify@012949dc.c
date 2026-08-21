
/* v8::internal::TorqueGeneratedClassVerifiers::BreakPointVerify(v8::internal::BreakPoint,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::BreakPointVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedTuple2<v8::internal::Tuple2,v8::internal::Struct>::Tuple2Verify
            ((Isolate *)&local_18);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x6e) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsBreakPoint()");
}

