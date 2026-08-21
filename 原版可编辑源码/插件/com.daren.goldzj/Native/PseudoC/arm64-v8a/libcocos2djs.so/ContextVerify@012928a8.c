
/* v8::internal::TorqueGeneratedClassVerifiers::ContextVerify(v8::internal::Context,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ContextVerify(ulong param_1,undefined8 param_2)

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
  uVar3 = param_1 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (uVar4 = uVar3 | 7, *(short *)(uVar4 + *(uint *)(uVar2 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if (9 < *(ushort *)(uVar4 + *(uint *)(param_1 - 1)) - 0x88) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsContext()");
  }
  uVar1 = *(uint *)(param_1 + 3);
  Object::VerifyPointer(param_2,uVar3 | uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 7);
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) && (*(short *)(uVar4 + *(uint *)(uVar2 - 1)) == 0x83)) {
      Object::VerifyPointer(param_2,uVar3 | *(uint *)(param_1 + 0xb));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","scope_info__value.IsScopeInfo()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","length__value.IsSmi()");
}

