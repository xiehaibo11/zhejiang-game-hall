
/* v8::internal::TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(v8::internal::SeqTwoByteString,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SeqTwoByteStringVerify(ulong param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = param_1;
  TorqueGeneratedSeqString<v8::internal::SeqString,v8::internal::String>::SeqStringVerify
            ((Isolate *)&local_18);
  uVar1 = local_18 & 0xffffffff00000000 | 7;
  if (((*(ushort *)(uVar1 + *(uint *)(local_18 - 1)) < 0x40) &&
      ((*(byte *)(uVar1 + *(uint *)(local_18 - 1)) & 7) == 0)) &&
     ((*(byte *)(uVar1 + *(uint *)(local_18 - 1)) >> 3 & 1) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsSeqTwoByteString()");
}

