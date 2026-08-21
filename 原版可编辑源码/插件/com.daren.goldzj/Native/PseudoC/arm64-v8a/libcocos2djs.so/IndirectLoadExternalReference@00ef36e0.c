
/* v8::internal::TurboAssemblerBase::IndirectLoadExternalReference(v8::internal::Register,
   v8::internal::ExternalReference) */

void v8::internal::TurboAssemblerBase::IndirectLoadExternalReference
               (long *param_1,undefined8 param_2,undefined4 param_3,ulong param_4)

{
  int iVar1;
  ExternalReferenceEncoder aEStack_38 [8];
  
  if ((char)param_1[0x31] != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","root_array_available_");
  }
  if (param_4 - param_1[0x2f] < 0x8848) {
                    /* WARNING: Could not recover jumptable at 0x00ef3748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))(param_1,param_2,param_3);
    return;
  }
  ExternalReferenceEncoder::ExternalReferenceEncoder(aEStack_38,(Isolate *)param_1[0x2f]);
  iVar1 = ExternalReferenceEncoder::Encode(aEStack_38,param_4);
  if (-1 < iVar1) {
    ExternalReferenceEncoder::~ExternalReferenceEncoder(aEStack_38);
    (**(code **)(*param_1 + 0x50))(param_1,param_2,param_3,iVar1 * 8 + 0x1010);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!v.is_from_api()");
}

