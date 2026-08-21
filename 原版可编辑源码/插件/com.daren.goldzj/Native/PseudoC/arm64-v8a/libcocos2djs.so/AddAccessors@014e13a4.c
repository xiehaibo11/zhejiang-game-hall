
/* v8::internal::ExternalReferenceTable::AddAccessors(int*) */

void __thiscall
v8::internal::ExternalReferenceTable::AddAccessors(ExternalReferenceTable *this,int *param_1)

{
  int iVar1;
  
  if (*param_1 != 0x34c) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount == *index"
            );
  }
  *param_1 = 0x34d;
  *(code **)(this + 0x1a60) = Accessors::ArgumentsIteratorGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::ArrayLengthGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::BoundFunctionLengthGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::BoundFunctionNameGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::ErrorStackGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::FunctionArgumentsGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::FunctionCallerGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::FunctionNameGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::FunctionLengthGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::FunctionPrototypeGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::RegExpResultIndicesGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::StringLengthGetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::ArrayLengthSetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::ErrorStackSetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::FunctionPrototypeSetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::ModuleNamespaceEntrySetter;
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  *(code **)(this + (long)iVar1 * 8) = Accessors::ReconfigureToDataProperty;
  if (*param_1 == 0x35d) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.",
           "kSpecialReferenceCount + kExternalReferenceCount + kBuiltinsReferenceCount + kRuntimeReferenceCount + kIsolateAddressReferenceCount + kAccessorReferenceCount == *index"
          );
}

