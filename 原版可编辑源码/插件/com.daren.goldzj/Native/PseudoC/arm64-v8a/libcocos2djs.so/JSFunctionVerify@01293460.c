
/* v8::internal::TorqueGeneratedClassVerifiers::JSFunctionVerify(v8::internal::JSFunction,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::JSFunctionVerify(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_38;
  
  local_38 = param_1;
  TorqueGeneratedJSFunctionOrBoundFunction<v8::internal::JSFunctionOrBoundFunction,v8::internal::JSObject>
  ::JSFunctionOrBoundFunctionVerify((Isolate *)&local_38);
  uVar3 = local_38 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar3 + *(uint *)(local_38 - 1)) != 0x439) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsJSFunction()");
  }
  uVar1 = *(uint *)(local_38 + 0xb);
  uVar2 = local_38 & 0xffffffff00000000 | (ulong)uVar1;
  Object::VerifyPointer(param_2,uVar2);
  if (((uVar1 & 1) == 0) || (*(short *)(uVar3 + *(uint *)(uVar2 - 1)) != 0xa6)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","shared_function_info__value.IsSharedFunctionInfo()");
  }
  uVar1 = *(uint *)(local_38 + 0xf);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) == 0) || (9 < *(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) - 0x88)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","context__value.IsContext()");
  }
  uVar1 = *(uint *)(local_38 + 0x13);
  uVar2 = local_38 & 0xffffffff00000000;
  uVar3 = uVar2 | uVar1;
  Object::VerifyPointer(param_2,uVar3);
  if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x5d)) {
    uVar1 = *(uint *)(local_38 + 0x17);
    uVar2 = local_38 & 0xffffffff00000000;
    uVar3 = uVar2 | uVar1;
    Object::VerifyPointer(param_2,uVar3);
    if (((uVar1 & 1) != 0) && (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x9a)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","code__value.IsCode()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","feedback_cell__value.IsFeedbackCell()");
}

