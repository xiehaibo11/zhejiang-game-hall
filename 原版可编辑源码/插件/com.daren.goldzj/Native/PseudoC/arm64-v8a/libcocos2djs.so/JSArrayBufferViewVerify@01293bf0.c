
/* v8::internal::TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify(v8::internal::JSArrayBufferView,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSArrayBufferViewVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar3 + *(uint *)(local_38 - 1)) & 0xfffe) != 0x41a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSArrayBufferView()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x424)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","buffer__value.IsJSArrayBuffer()");
}

