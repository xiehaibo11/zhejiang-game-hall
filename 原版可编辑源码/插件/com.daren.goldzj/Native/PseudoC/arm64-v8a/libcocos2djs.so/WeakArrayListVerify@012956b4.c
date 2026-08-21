
/* v8::internal::TorqueGeneratedClassVerifiers::WeakArrayListVerify(v8::internal::WeakArrayList,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::WeakArrayListVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint *puVar5;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar4 = param_1 & 0xffffffff00000000;
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(param_1 - 1)) != 0xa7) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsWeakArrayList()");
  }
  uVar1 = *(uint *)(param_1 + 3);
  Object::VerifyPointer(param_2,uVar4 | uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 7);
    Object::VerifyPointer(param_2,uVar4 | uVar1);
    if ((uVar1 & 1) == 0) {
      if (1 < *(int *)(param_1 + 7)) {
        lVar3 = 0;
        puVar5 = (uint *)(param_1 + 0xb);
        do {
          MaybeObject::VerifyMaybeObjectPointer(param_2,uVar4 | *puVar5);
          lVar3 = lVar3 + 1;
          puVar5 = puVar5 + 1;
        } while (lVar3 < *(int *)(param_1 + 7) >> 1);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","length__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","capacity__value.IsSmi()");
}

