
/* v8::internal::TorqueGeneratedClassVerifiers::JSWeakMapVerify(v8::internal::JSWeakMap,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSWeakMapVerify(ulong param_1)

{
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedJSWeakCollection<v8::internal::JSWeakCollection,v8::internal::JSObject>::
  JSWeakCollectionVerify((Isolate *)&local_18);
  if (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) == 0x41e) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsJSWeakMap()");
}

