
/* v8::internal::TorqueGeneratedClassVerifiers::SharedFunctionInfoVerify(v8::internal::SharedFunctionInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::SharedFunctionInfoVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 - 1);
  uVar4 = param_1 & 0xffffffff00000000;
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (uVar3 = uVar4 | 7, *(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map__value.IsMap()");
  }
  if (*(short *)(uVar3 + *(uint *)(param_1 - 1)) != 0xa6) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsSharedFunctionInfo()");
  }
  Object::VerifyPointer(param_2,uVar4 | *(uint *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 7);
  uVar2 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if ((((uVar1 & 1) != 0) && (0x3f < *(ushort *)(uVar3 + *(uint *)(uVar2 - 1)))) &&
     (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0x83)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "name_or_scope_info__value.IsString() || name_or_scope_info__value.IsSmi() || name_or_scope_info__value.IsScopeInfo()"
            );
  }
  uVar1 = *(uint *)(param_1 + 0xb);
  Object::VerifyPointer(param_2,uVar4 | uVar1);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","outer_scope_info_or_feedback_metadata__value.IsHeapObject()");
  }
  uVar1 = *(uint *)(param_1 + 0xf);
  uVar4 = uVar4 | uVar1;
  Object::VerifyPointer(param_2,uVar4);
  if (((uVar1 & 1) != 0) &&
     (((*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x43 ||
       (*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x5b)) ||
      (*(short *)(uVar3 + *(uint *)(uVar4 - 1)) == 0x65)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "script_or_debug_info__value.IsOddball() || script_or_debug_info__value.IsDebugInfo() || script_or_debug_info__value.IsScript()"
          );
}

