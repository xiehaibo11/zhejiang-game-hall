
/* v8::internal::TorqueGeneratedClassVerifiers::CellVerify(v8::internal::Cell,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::CellVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar3 = param_1 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xa2)) {
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(param_1 - 1)) == 0x99) {
      Object::VerifyPointer(param_2,uVar3 | *(uint *)(param_1 + 3));
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsCell()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","map__value.IsMap()");
}

