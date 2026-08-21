
/* v8::internal::Genesis::InstallExtension(v8::internal::Isolate*, char const*,
   v8::internal::Genesis::ExtensionStates*) */

undefined8
v8::internal::Genesis::InstallExtension(Isolate *param_1,char *param_2,ExtensionStates *param_3)

{
  int iVar1;
  undefined8 uVar2;
  RegisteredExtension *pRVar3;
  
  pRVar3 = RegisteredExtension::first_extension_;
  while( true ) {
    if (pRVar3 == (RegisteredExtension *)0x0) {
      Utils::ReportApiFailure("v8::Context::New()","Cannot find required extension");
      return 0;
    }
    iVar1 = strcmp(param_2,*(char **)(*(long *)pRVar3 + 8));
    if (iVar1 == 0) break;
    pRVar3 = *(RegisteredExtension **)(pRVar3 + 8);
  }
  uVar2 = InstallExtension(param_1,pRVar3,param_3);
  return uVar2;
}

