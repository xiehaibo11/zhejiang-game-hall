
/* v8::internal::TorqueGeneratedClassVerifiers::SeqStringVerify(v8::internal::SeqString,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SeqStringVerify(ulong param_1,Isolate *param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = param_1;
  String::StringVerify((String *)&local_18,param_2);
  uVar1 = local_18 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar1 + *(uint *)(local_18 - 1)) < 0x40) &&
     ((*(byte *)(uVar1 + *(uint *)(local_18 - 1)) & 7) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsSeqString()");
}

