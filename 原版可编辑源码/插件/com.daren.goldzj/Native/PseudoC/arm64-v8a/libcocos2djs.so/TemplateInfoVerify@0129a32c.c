
/* v8::internal::TorqueGeneratedClassVerifiers::TemplateInfoVerify(v8::internal::TemplateInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::TemplateInfoVerify
               (ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong local_28;
  
  local_28 = param_1;
  TorqueGeneratedStruct<v8::internal::Struct,v8::internal::HeapObject>::StructVerify
            ((Isolate *)&local_28);
  if ((*(ushort *)((local_28 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_28 - 1)) & 0xfffe)
      != 0x4e) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","o.IsTemplateInfo()");
  }
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 3));
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 7));
  uVar1 = *(uint *)(local_28 + 0xb);
  Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)uVar1);
  if ((uVar1 & 1) == 0) {
    Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0xf));
    Object::VerifyPointer(param_2,local_28 & 0xffffffff00000000 | (ulong)*(uint *)(local_28 + 0x13))
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","number_of_properties__value.IsSmi()");
}

