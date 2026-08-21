
/* v8::internal::TorqueGeneratedClassVerifiers::JSArrayIteratorVerify(v8::internal::JSArrayIterator,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSArrayIteratorVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x425) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSArrayIterator()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) {
    uVar1 = *(uint *)(local_38 + 0xf);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x42)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","next_index__value.IsSmi() || next_index__value.IsHeapNumber()");
    }
    uVar1 = *(uint *)(local_38 + 0x13);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kind__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","iterated_object__value.IsJSReceiver()");
}

