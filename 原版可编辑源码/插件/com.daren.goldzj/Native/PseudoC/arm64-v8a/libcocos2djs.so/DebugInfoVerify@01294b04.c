
/* v8::internal::TorqueGeneratedClassVerifiers::DebugInfoVerify(v8::internal::DebugInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::DebugInfoVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x5b) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsDebugInfo()");
  }
  uVar1 = *(uint *)(local_38 + 3);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa6)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","shared__value.IsSharedFunctionInfo()");
  }
  uVar1 = *(uint *)(local_38 + 7);
  Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","debugger_hints__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar3 = local_38 & 0xffffffff00000000;
  uVar2 = uVar3 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) != 0) &&
     ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
      (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x65)))) {
    uVar1 = *(uint *)(local_38 + 0xf);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) == 0) ||
       ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x43 &&
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x86)))) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "original_bytecode_array__value.IsOddball() || original_bytecode_array__value.IsBytecodeArray()"
              );
    }
    uVar1 = *(uint *)(local_38 + 0x13);
    uVar3 = local_38 & 0xffffffff00000000;
    uVar2 = uVar3 | uVar1;
    Object::VerifyPointer(param_2,uVar2);
    if (((uVar1 & 1) != 0) &&
       ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
        (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x86)))) {
      uVar1 = *(uint *)(local_38 + 0x17);
      uVar2 = local_38 & 0xffffffff00000000;
      uVar3 = uVar2 | uVar1;
      Object::VerifyPointer(param_2,uVar3);
      if (((uVar1 & 1) == 0) ||
         (0xe < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x76)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","break_points__value.IsFixedArray()");
      }
      uVar1 = *(uint *)(local_38 + 0x1b);
      Object::VerifyPointer(param_2,local_38 & 0xffffffff00000000 | (ulong)uVar1);
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","flags__value.IsSmi()");
      }
      uVar1 = *(uint *)(local_38 + 0x1f);
      uVar3 = local_38 & 0xffffffff00000000;
      uVar2 = uVar3 | uVar1;
      Object::VerifyPointer(param_2,uVar2);
      if (((uVar1 & 1) != 0) &&
         ((uVar3 = uVar3 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) == 0x43 ||
          (*(ushort *)(uVar3 + *(uint *)(uVar2 - 1)) - 0x76 < 0xf)))) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "coverage_info__value.IsOddball() || coverage_info__value.IsFixedArray()");
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "debug_bytecode_array__value.IsOddball() || debug_bytecode_array__value.IsBytecodeArray()"
            );
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","script__value.IsOddball() || script__value.IsScript()");
}

