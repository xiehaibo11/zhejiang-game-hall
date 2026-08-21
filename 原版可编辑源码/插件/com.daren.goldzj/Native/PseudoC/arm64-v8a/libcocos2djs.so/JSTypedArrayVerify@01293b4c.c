
/* v8::internal::TorqueGeneratedClassVerifiers::JSTypedArrayVerify(v8::internal::JSTypedArray,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSTypedArrayVerify(ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSArrayBufferView::JSArrayBufferViewVerify((JSArrayBufferView *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x41b) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSTypedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0x2f);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x85)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","base_pointer__value.IsSmi() || base_pointer__value.IsByteArray()")
    ;
  }
  return;
}

