
/* v8::internal::TorqueGeneratedClassVerifiers::StackFrameInfoVerify(v8::internal::StackFrameInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::StackFrameInfoVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  if (*(short *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x6b) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsStackFrameInfo()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","line_number__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","column_number__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","promise_all_index__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","script_id__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","wasm_function_index__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0x17);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) ||
     (((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "script_name__value.IsString() || script_name__value.IsOddball() || script_name__value.IsOddball()"
            );
  }
  uVar1 = *(uint *)(local_38 + 0x1b);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     (((uVar3 = uVar3 | 7, *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40 ||
       (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)) ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
    uVar1 = *(uint *)(local_38 + 0x1f);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) == 0) ||
       (((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
         (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "function_name__value.IsString() || function_name__value.IsOddball() || function_name__value.IsOddball()"
              );
    }
    uVar1 = *(uint *)(local_38 + 0x23);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) == 0) ||
       (((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
         (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "method_name__value.IsString() || method_name__value.IsOddball() || method_name__value.IsOddball()"
              );
    }
    uVar1 = *(uint *)(local_38 + 0x27);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) &&
       (((uVar3 = uVar3 | 7, *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) < 0x40 ||
         (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)) ||
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)))) {
      uVar1 = *(uint *)(local_38 + 0x2b);
      uVar3 = local_38 & 0xffffffff00000000;
      uVar2 = uVar3 | uVar1;
      Object::VerifyPointer(param_2,uVar2);
      if (((uVar1 & 1) == 0) ||
         (((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
           (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
          (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "eval_origin__value.IsString() || eval_origin__value.IsOddball() || eval_origin__value.IsOddball()"
                );
      }
      uVar1 = *(uint *)(local_38 + 0x2f);
      uVar3 = local_38 & 0xffffffff00000000;
      uVar2 = uVar3 | uVar1;
      Object::VerifyPointer(param_2,uVar2);
      if (((uVar1 & 1) == 0) ||
         (((uVar3 = uVar3 | 7, 0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) &&
           (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)) &&
          (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43)))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "wasm_module_name__value.IsString() || wasm_module_name__value.IsOddball() || wasm_module_name__value.IsOddball()"
                );
      }
      uVar1 = *(uint *)(local_38 + 0x33);
      uVar3 = local_38 & 0xffffffff00000000;
      uVar2 = uVar3 | uVar1;
      Object::VerifyPointer(param_2,uVar2);
      if (((uVar1 & 1) != 0) &&
         (((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
           (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43)) ||
          (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x434)))) {
        uVar1 = *(uint *)(local_38 + 0x37);
        Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
        if ((uVar1 & 1) == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","flag__value.IsSmi()");
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "wasm_instance__value.IsOddball() || wasm_instance__value.IsOddball() || wasm_instance__value.IsWasmInstanceObject()"
              );
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "type_name__value.IsString() || type_name__value.IsOddball() || type_name__value.IsOddball()"
            );
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "script_name_or_source_url__value.IsString() || script_name_or_source_url__value.IsOddball() || script_name_or_source_url__value.IsOddball()"
          );
}

