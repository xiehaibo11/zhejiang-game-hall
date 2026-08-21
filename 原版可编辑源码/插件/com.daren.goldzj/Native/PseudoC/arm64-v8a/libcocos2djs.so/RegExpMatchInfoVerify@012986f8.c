
/* v8::internal::TorqueGeneratedClassVerifiers::RegExpMatchInfoVerify(v8::internal::RegExpMatchInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::RegExpMatchInfoVerify
               (ulong param_1,Isolate *param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  FixedArray::FixedArrayVerify((FixedArray *)&local_18,param_2);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x76) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsRegExpMatchInfo()");
}

