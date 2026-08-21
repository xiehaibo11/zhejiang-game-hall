
/* v8::internal::ExternalReferenceTable::AddRuntimeFunctions(int*) */

void __thiscall
v8::internal::ExternalReferenceTable::AddRuntimeFunctions(ExternalReferenceTable *this,int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*param_1 != 0x165) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount == *index")
    ;
  }
  lVar3 = 0;
  do {
    uVar2 = ExternalReference::Create(*(undefined4 *)((long)&DAT_01a47204 + lVar3));
    iVar1 = *param_1;
    lVar3 = lVar3 + 4;
    *param_1 = iVar1 + 1;
    *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  } while (lVar3 != 0x76c);
  if (*param_1 == 0x340) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount == *index"
          );
}

