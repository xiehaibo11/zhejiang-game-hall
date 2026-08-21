
/* v8::internal::TorqueGeneratedClassVerifiers::WasmJSFunctionDataVerify(v8::internal::WasmJSFunctionData,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::WasmJSFunctionDataVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x75) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsWasmJSFunctionData()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0xa9)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","callable__value.IsJSReceiver()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x9a)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","wrapper_code__value.IsCode()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","serialized_return_count__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(uint *)(local_38 + 0x13);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x85)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","serialized_signature__value.IsByteArray()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","serialized_parameter_count__value.IsSmi()");
}

