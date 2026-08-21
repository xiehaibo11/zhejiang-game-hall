
/* v8::internal::TorqueGeneratedClassVerifiers::WasmDebugInfoVerify(v8::internal::WasmDebugInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::WasmDebugInfoVerify
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
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x71) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsWasmDebugInfo()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x434)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","instance__value.IsWasmInstanceObject()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x46)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "interpreter_handle__value.IsOddball() || interpreter_handle__value.IsForeign()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x99)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","interpreter_reference_stack__value.IsCell()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
      (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76 < 0xf)))) {
    uVar1 = *(uint *)(local_38 + 0x13);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) == 0) ||
       ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
        (0xe < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "c_wasm_entries__value.IsOddball() || c_wasm_entries__value.IsFixedArray()");
    }
    uVar1 = *(uint *)(local_38 + 0x17);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) &&
       ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x46)))) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "c_wasm_entry_map__value.IsOddball() || c_wasm_entry_map__value.IsForeign()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "locals_names__value.IsOddball() || locals_names__value.IsFixedArray()");
}

