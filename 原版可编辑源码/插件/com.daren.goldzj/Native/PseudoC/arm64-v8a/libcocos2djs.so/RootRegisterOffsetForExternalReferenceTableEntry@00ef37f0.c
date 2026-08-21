
/* v8::internal::TurboAssemblerBase::RootRegisterOffsetForExternalReferenceTableEntry(v8::internal::Isolate*,
   v8::internal::ExternalReference const&) */

int v8::internal::TurboAssemblerBase::RootRegisterOffsetForExternalReferenceTableEntry
              (Isolate *param_1,ExternalReference *param_2)

{
  int iVar1;
  ExternalReferenceEncoder aEStack_8 [8];
  
  ExternalReferenceEncoder::ExternalReferenceEncoder(aEStack_8,param_1);
  iVar1 = ExternalReferenceEncoder::Encode(aEStack_8,*(ulong *)param_2);
  if (-1 < iVar1) {
    ExternalReferenceEncoder::~ExternalReferenceEncoder(aEStack_8);
    return iVar1 * 8 + 0x1010;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","!v.is_from_api()");
}

