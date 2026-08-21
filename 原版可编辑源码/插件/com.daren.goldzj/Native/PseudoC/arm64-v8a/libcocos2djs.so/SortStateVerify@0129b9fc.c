
/* v8::internal::TorqueGeneratedClassVerifiers::SortStateVerify(v8::internal::SortState,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SortStateVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x68) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSortState()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","receiver__value.IsJSReceiver()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","initialReceiverMap__value.IsMap()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "initialReceiverLength__value.IsSmi() || initialReceiverLength__value.IsHeapNumber()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
        (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xaa)) &&
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa9)) &&
      ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x439 &&
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x438)))))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "userCmpFn__value.IsOddball() || userCmpFn__value.IsJSObject() || userCmpFn__value.IsJSProxy() || userCmpFn__value.IsJSFunction() || userCmpFn__value.IsJSBoundFunction()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","sortComparePtr__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","loadFn__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x1b);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storeFn__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x1f);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","deleteFn__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x23);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","canUseSameAccessorFn__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x27);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(local_38 + 0x2b);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","pendingRunsSize__value.IsSmi()");
    }
    uVar1 = *(uint *)(local_38 + 0x2f);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) == 0) || (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76))
    {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","pendingRuns__value.IsFixedArray()");
    }
    uVar1 = *(uint *)(local_38 + 0x33);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) == 0) || (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76))
    {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","workArray__value.IsFixedArray()");
    }
    uVar1 = *(uint *)(local_38 + 0x37);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76 < 0xf))
    {
      uVar1 = *(uint *)(local_38 + 0x3b);
      Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","sortLength__value.IsSmi()");
      }
      uVar1 = *(uint *)(local_38 + 0x3f);
      Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
      if ((uVar1 & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","numberOfUndefined__value.IsSmi()");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","tempArray__value.IsFixedArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","minGallop__value.IsSmi()");
}

