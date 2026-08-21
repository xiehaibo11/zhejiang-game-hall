
/* v8::internal::TorqueGeneratedClassVerifiers::ExternalStringVerify(v8::internal::ExternalString,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ExternalStringVerify
               (ulong param_1,Isolate *param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = param_1;
  String::StringVerify((String *)&local_18,param_2);
  uVar1 = local_18 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar1 + *(uint *)(local_18 - 1)) < 0x40) &&
     ((*(ushort *)(uVar1 + *(uint *)(local_18 - 1)) & 7) == 2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsExternalString()");
}

