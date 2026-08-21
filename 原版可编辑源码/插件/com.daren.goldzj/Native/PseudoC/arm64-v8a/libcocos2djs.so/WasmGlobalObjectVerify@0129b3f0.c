
/* v8::internal::TorqueGeneratedClassVerifiers::WasmGlobalObjectVerify(v8::internal::WasmGlobalObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::WasmGlobalObjectVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x433) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsWasmGlobalObject()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x424)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "untagged_buffer__value.IsOddball() || untagged_buffer__value.IsJSArrayBuffer()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "tagged_buffer__value.IsOddball() || tagged_buffer__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","offset__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
}

