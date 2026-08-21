
/* v8::internal::ExternalReferenceTable::AddStubCache(v8::internal::Isolate*, int*) */

void __thiscall
v8::internal::ExternalReferenceTable::AddStubCache
          (ExternalReferenceTable *this,Isolate *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  
  if (*param_2 != 0x35d) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount + kAccessorReferenceCount == *index"
            );
  }
  lVar2 = *(long *)(param_1 + 0x9560);
  *param_2 = 0x35e;
  *(long *)(this + 0x1ae8) = lVar2;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 4;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 8;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 0x6000;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 0x6004;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 0x6008;
  iVar1 = *param_2;
  lVar2 = *(long *)(param_1 + 0x9568);
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 4;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 8;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 0x6000;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 0x6004;
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(long *)(this + (long)iVar1 * 8) = lVar2 + 0x6008;
  if (*param_2 == 0x369) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount + kAccessorReferenceCount + kStubCacheReferenceCount == *index"
          );
}

