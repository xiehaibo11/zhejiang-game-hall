
/* v8::internal::TorqueGeneratedClassVerifiers::StructVerify(v8::internal::Struct,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::StructVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar3 = param_1 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) &&
     (uVar2 = param_1 & 0xffffffff00000000 | 7, *(short *)(uVar2 + *(uint *)(uVar3 - 1)) == 0xa2)) {
    if (*(ushort *)(uVar2 + *(uint *)(param_1 - 1)) - 0x47 < 0x2f) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsStruct()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","map__value.IsMap()");
}

