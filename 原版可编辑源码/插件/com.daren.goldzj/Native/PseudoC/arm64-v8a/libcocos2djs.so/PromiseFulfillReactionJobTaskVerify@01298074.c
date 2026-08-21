
/* v8::internal::TorqueGeneratedClassVerifiers::PromiseFulfillReactionJobTaskVerify(v8::internal::PromiseFulfillReactionJobTask,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::PromiseFulfillReactionJobTaskVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedPromiseReactionJobTask<v8::internal::PromiseReactionJobTask,v8::internal::Microtask>
  ::PromiseReactionJobTaskVerify((Isolate *)&local_18);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x47) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsPromiseFulfillReactionJobTask()");
}

