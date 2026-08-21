
/* v8::internal::TorqueGeneratedClassVerifiers::HeapObjectVerify(v8::internal::HeapObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::HeapObjectVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar2 = param_1 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     (*(short *)((param_1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xa2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","map__value.IsMap()");
}

