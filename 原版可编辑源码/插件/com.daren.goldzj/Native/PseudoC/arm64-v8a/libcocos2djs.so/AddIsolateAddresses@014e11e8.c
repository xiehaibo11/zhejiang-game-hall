
/* v8::internal::ExternalReferenceTable::AddIsolateAddresses(v8::internal::Isolate*, int*) */

void __thiscall
v8::internal::ExternalReferenceTable::AddIsolateAddresses
          (ExternalReferenceTable *this,Isolate *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0x340) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount == *index"
            );
  }
  uVar2 = Isolate::get_address_from_id(param_1,0);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,1);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,2);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,3);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,4);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,5);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,6);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,7);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,8);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,9);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,10);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  uVar2 = Isolate::get_address_from_id(param_1,0xb);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined8 *)(this + (long)iVar1 * 8) = uVar2;
  if (*param_2 == 0x34c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount == *index"
          );
}

