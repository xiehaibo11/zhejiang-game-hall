
/* v8::internal::TorqueGeneratedClassVerifiers::WeakCellVerify(v8::internal::WeakCell,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::WeakCellVerify(ulong param_1,undefined8 param_2)

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
  if (*(short *)(uVar3 + *(uint *)(param_1 - 1)) != 0xa8) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsWeakCell()");
  }
  uVar1 = *(uint *)(param_1 + 3);
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42a)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "finalization_group__value.IsOddball() || finalization_group__value.IsJSFinalizationGroup()"
            );
  }
  uVar1 = *(uint *)(param_1 + 7);
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","target__value.IsJSReceiver() || target__value.IsOddball()");
  }
  Object::VerifyPointer(param_2,uVar4 | *(uint *)(param_1 + 0xb));
  uVar1 = *(uint *)(param_1 + 0xf);
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa8)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","prev__value.IsOddball() || prev__value.IsWeakCell()");
  }
  uVar1 = *(uint *)(param_1 + 0x13);
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa8)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","next__value.IsOddball() || next__value.IsWeakCell()");
  }
  Object::VerifyPointer(param_2,uVar4 | *(uint *)(param_1 + 0x17));
  uVar1 = *(uint *)(param_1 + 0x1b);
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0xa8)))) {
    uVar1 = *(uint *)(param_1 + 0x1f);
    uVar4 = uVar4 | uVar1;
    Object::VerifyPointer(param_2,uVar4);
    if (((uVar1 & 1) != 0) &&
       ((*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x43 ||
        (*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0xa8)))) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "key_list_next__value.IsOddball() || key_list_next__value.IsWeakCell()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "key_list_prev__value.IsOddball() || key_list_prev__value.IsWeakCell()");
}

