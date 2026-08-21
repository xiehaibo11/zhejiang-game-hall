
/* v8::internal::ExternalReferenceTable::AddBuiltins(int*) */

void __thiscall
v8::internal::ExternalReferenceTable::AddBuiltins(ExternalReferenceTable *this,int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*param_1 != 0xa2) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kSpecialReferenceCount + kExternalReferenceCount == *index");
  }
  lVar3 = 0;
  do {
    uVar2 = ExternalReference::Create(*(ulong *)((long)&PTR_Builtin_HandleApiCall_01cc6180 + lVar3))
    ;
    iVar1 = *param_1;
    lVar3 = lVar3 + 8;
    *param_1 = iVar1 + 1;
    *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  } while (lVar3 != 0x618);
  if (*param_1 == 0x165) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount == *index");
}

