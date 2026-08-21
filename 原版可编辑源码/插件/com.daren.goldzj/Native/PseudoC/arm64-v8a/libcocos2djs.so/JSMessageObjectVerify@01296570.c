
/* v8::internal::TorqueGeneratedClassVerifiers::JSMessageObjectVerify(v8::internal::JSMessageObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSMessageObjectVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  if (*(short *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x42c) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSMessageObject()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","message_type__value.IsSmi()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0xf));
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x65)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","script__value.IsScript()");
  }
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 + 0x17));
  uVar1 = *(uint *)(local_38 + 0x1b);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) ||
     ((uVar2 = uVar2 | 7, *(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0x43 &&
      (*(short *)(uVar2 + *(uint *)(uVar3 - 1)) != 0xa6)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "shared_info__value.IsOddball() || shared_info__value.IsSharedFunctionInfo()");
  }
  uVar1 = *(uint *)(local_38 + 0x1f);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","bytecode_offset__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x23);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","start_position__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x27);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","end_position__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x2b);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","error_level__value.IsSmi()");
}

