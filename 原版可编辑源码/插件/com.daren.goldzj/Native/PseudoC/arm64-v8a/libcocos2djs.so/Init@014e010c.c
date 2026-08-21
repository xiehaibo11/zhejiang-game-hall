
/* v8::internal::ExternalReferenceTable::Init(v8::internal::Isolate*) */

void __thiscall
v8::internal::ExternalReferenceTable::Init(ExternalReferenceTable *this,Isolate *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int local_24;
  
  local_24 = 1;
  *(undefined8 *)this = 0;
  AddReferences(this,param_1,&local_24);
  if (local_24 != 0xa2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kSpecialReferenceCount + kExternalReferenceCount == *index");
  }
  lVar3 = 0;
  do {
    uVar1 = ExternalReference::Create(*(ulong *)((long)&PTR_Builtin_HandleApiCall_01cc6180 + lVar3))
    ;
    lVar2 = (long)local_24;
    lVar3 = lVar3 + 8;
    local_24 = local_24 + 1;
    *(undefined8 *)(this + lVar2 * 8) = uVar1;
  } while (lVar3 != 0x618);
  if (local_24 != 0x165) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount == *index")
    ;
  }
  lVar3 = 0;
  local_24 = 0x165;
  do {
    uVar1 = ExternalReference::Create(*(undefined4 *)((long)&DAT_01a47204 + lVar3));
    lVar2 = (long)local_24;
    lVar3 = lVar3 + 4;
    local_24 = local_24 + 1;
    *(undefined8 *)(this + lVar2 * 8) = uVar1;
  } while (lVar3 != 0x76c);
  if (local_24 != 0x340) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount == *index"
            );
  }
  AddIsolateAddresses(this,param_1,&local_24);
  AddAccessors(this,&local_24);
  if (local_24 != 0x35d) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount + kAccessorReferenceCount == *index"
            );
  }
  lVar3 = *(long *)(param_1 + 0x9560);
  *(long *)(this + 0x1af0) = lVar3 + 4;
  *(long *)(this + 0x1af8) = lVar3 + 8;
  *(long *)(this + 0x1ae8) = lVar3;
  *(long *)(this + 0x1b00) = lVar3 + 0x6000;
  *(long *)(this + 0x1b10) = lVar3 + 0x6008;
  *(long *)(this + 0x1b08) = lVar3 + 0x6004;
  lVar3 = *(long *)(param_1 + 0x9568);
  *(long *)(this + 0x1b20) = lVar3 + 4;
  *(long *)(this + 0x1b18) = lVar3;
  *(long *)(this + 0x1b28) = lVar3 + 8;
  *(long *)(this + 0x1b30) = lVar3 + 0x6000;
  *(long *)(this + 0x1b38) = lVar3 + 0x6004;
  local_24 = 0x369;
  *(long *)(this + 0x1b40) = lVar3 + 0x6008;
  AddNativeCodeStatsCounters(this,param_1,&local_24);
  *(undefined4 *)(this + 0x1ba0) = 1;
  if (local_24 == 0x374) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kSize == index");
}

