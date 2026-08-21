
/* v8::internal::TorqueGeneratedClassVerifiers::JSReceiverVerify(v8::internal::JSReceiver,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSReceiverVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar4 = param_1 & 0xffffffff00000000;
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (uVar3 = uVar4 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if (*(ushort *)(uVar3 + *(uint *)(param_1 - 1)) < 0xa9) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSReceiver()");
  }
  uVar1 = *(uint *)(param_1 + 3);
  uVar4 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar4);
  if ((((uVar1 & 1) != 0) && (0x11 < *(ushort *)(uVar3 + *(uint *)(uVar4 - 1)) - 0x76)) &&
     (*(short *)(uVar3 + *(uint *)(uVar4 - 1)) != 0xa4)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "properties_or_hash__value.IsSmi() || properties_or_hash__value.IsFixedArrayBase() || properties_or_hash__value.IsPropertyArray()"
            );
  }
  return;
}

