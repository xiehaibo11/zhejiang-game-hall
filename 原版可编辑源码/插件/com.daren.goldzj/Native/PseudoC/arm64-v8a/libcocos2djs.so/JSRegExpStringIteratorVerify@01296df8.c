
/* v8::internal::TorqueGeneratedClassVerifiers::JSRegExpStringIteratorVerify(v8::internal::JSRegExpStringIterator,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSRegExpStringIteratorVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x42f) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSRegExpStringIterator()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (0xa8 < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) {
    uVar1 = *(uint *)(local_38 + 0xf);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40)) {
      uVar1 = *(uint *)(local_38 + 0x13);
      Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
      if ((uVar1 & 1) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","iterated_string__value.IsString()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","iterating_reg_exp__value.IsJSReceiver()");
}

