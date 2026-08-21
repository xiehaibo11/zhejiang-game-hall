
/* v8::internal::TorqueGeneratedClassVerifiers::InternalizedStringVerify(v8::internal::InternalizedString,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::InternalizedStringVerify
               (ulong param_1,Isolate *param_2)

{
  ulong local_18;
  
  local_18 = param_1;
  String::StringVerify((String *)&local_18,param_2);
  if (*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0x20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsInternalizedString()");
}

