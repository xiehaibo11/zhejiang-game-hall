
/* v8::internal::Genesis::InstallAutoExtensions(v8::internal::Isolate*,
   v8::internal::Genesis::ExtensionStates*) */

undefined8 v8::internal::Genesis::InstallAutoExtensions(Isolate *param_1,ExtensionStates *param_2)

{
  ulong uVar1;
  RegisteredExtension *pRVar2;
  
  pRVar2 = RegisteredExtension::first_extension_;
  while( true ) {
    if (pRVar2 == (RegisteredExtension *)0x0) {
      return 1;
    }
    if ((*(char *)(*(long *)pRVar2 + 0x30) != '\0') &&
       (uVar1 = InstallExtension(param_1,pRVar2,param_2), (uVar1 & 1) == 0)) break;
    pRVar2 = *(RegisteredExtension **)(pRVar2 + 8);
  }
  return 0;
}

