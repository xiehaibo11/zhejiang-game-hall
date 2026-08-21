
/* v8::internal::TorqueGeneratedClassVerifiers::ObjectTemplateInfoVerify(v8::internal::ObjectTemplateInfo,
   v8::internal::Isolate*) */

void v8::internal::TorqueGeneratedClassVerifiers::ObjectTemplateInfoVerify
               (ulong param_1,undefined8 param_2)

{
  ulong local_8;
  
  local_8 = param_1;
  TorqueGeneratedTemplateInfo<v8::internal::TemplateInfo,v8::internal::Struct>::TemplateInfoVerify
            ((Isolate *)&local_8);
  if (*(short *)((local_8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_8 - 1)) == 0x4f) {
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 0x17));
    Object::VerifyPointer(param_2,local_8 & 0xffffffff00000000 | (ulong)*(uint *)(local_8 + 0x1b));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","o.IsObjectTemplateInfo()");
}

