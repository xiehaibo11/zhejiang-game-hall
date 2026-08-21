
/* v8::internal::TorqueGeneratedClassVerifiers::JSMapVerify(v8::internal::JSMap,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSMapVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedJSCollection<v8::internal::JSCollection,v8::internal::JSObject>::JSCollectionVerify
            ((Isolate *)&local_18);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x41c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSMap()");
}

