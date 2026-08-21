
/* v8::internal::TorqueGeneratedClassVerifiers::PromiseCapabilityVerify(v8::internal::PromiseCapability,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::PromiseCapabilityVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x62) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsPromiseCapability()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 7));
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0xb));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","promise__value.IsJSReceiver() || promise__value.IsOddball()");
}

