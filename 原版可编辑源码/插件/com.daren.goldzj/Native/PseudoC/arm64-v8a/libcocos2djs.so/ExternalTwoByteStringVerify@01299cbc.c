
/* v8::internal::TorqueGeneratedClassVerifiers::ExternalTwoByteStringVerify(v8::internal::ExternalTwoByteString,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ExternalTwoByteStringVerify
               (ulong param_1,Isolate *param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = param_1;
  ExternalString::ExternalStringVerify((ExternalString *)&local_18,param_2);
  uVar1 = local_18 & 0xffffffff00000000 | 7;
  if (((*(ushort *)(uVar1 + *(uint *)(local_18 - 1)) < 0x40) &&
      ((*(ushort *)(uVar1 + *(uint *)(local_18 - 1)) & 7) == 2)) &&
     ((*(byte *)(uVar1 + *(uint *)(local_18 - 1)) >> 3 & 1) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsExternalTwoByteString()");
}

