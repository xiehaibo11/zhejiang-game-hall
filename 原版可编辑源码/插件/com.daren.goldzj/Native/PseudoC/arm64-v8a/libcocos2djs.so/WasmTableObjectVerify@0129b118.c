
/* v8::internal::TorqueGeneratedClassVerifiers::WasmTableObjectVerify(v8::internal::WasmTableObject,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::WasmTableObjectVerify
               (ulong param_1,Isolate *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  JSObject::JSObjectVerify((JSObject *)&local_38,param_2);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x437) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsWasmTableObject()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","entries__value.IsFixedArray()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","current_length__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x42))
     && (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "maximum_length__value.IsSmi() || maximum_length__value.IsHeapNumber() || maximum_length__value.IsOddball()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76 < 0xf)) {
    uVar1 = *(uint *)(local_38 + 0x1b);
    Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
    if ((uVar1 & 1) == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","raw_type__value.IsSmi()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","dispatch_tables__value.IsFixedArray()");
}

