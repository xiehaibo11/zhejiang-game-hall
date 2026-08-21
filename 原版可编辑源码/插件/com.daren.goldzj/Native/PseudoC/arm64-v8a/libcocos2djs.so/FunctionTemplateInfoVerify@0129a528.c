
/* v8::internal::TorqueGeneratedClassVerifiers::FunctionTemplateInfoVerify(v8::internal::FunctionTemplateInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::FunctionTemplateInfoVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong local_28;
  
  local_28 = param_1;
  TorqueGeneratedTemplateInfo<v8::internal::TemplateInfo,v8::internal::Struct>::TemplateInfoVerify
            ((Isolate *)&local_28);
  if (*(short *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) != 0x4e) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsFunctionTemplateInfo()");
  }
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0x17));
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0x1b));
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0x1f));
  uVar1 = *(uint *)(local_28 + 0x23);
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","rare_data__value.IsHeapObject()");
  }
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0x27));
  uVar1 = *(uint *)(local_28 + 0x2b);
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","flag__value.IsSmi()");
  }
  uVar1 = *(uint *)(local_28 + 0x2f);
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0x33))
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","length__value.IsSmi()");
}

