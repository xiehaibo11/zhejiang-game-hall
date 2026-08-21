
/* v8::internal::Genesis::InstallRequestedExtensions(v8::internal::Isolate*,
   v8::ExtensionConfiguration*, v8::internal::Genesis::ExtensionStates*) */

undefined8
v8::internal::Genesis::InstallRequestedExtensions
          (Isolate *param_1,ExtensionConfiguration *param_2,ExtensionStates *param_3)

{
  int iVar1;
  ulong uVar2;
  RegisteredExtension *pRVar3;
  char *__s1;
  undefined8 *puVar4;
  
  if (*(int *)param_2 != 0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    do {
      if (RegisteredExtension::first_extension_ == (RegisteredExtension *)0x0) {
LAB_0103bbc4:
        Utils::ReportApiFailure("v8::Context::New()","Cannot find required extension");
        return 0;
      }
      __s1 = (char *)*puVar4;
      pRVar3 = RegisteredExtension::first_extension_;
      while (iVar1 = strcmp(__s1,*(char **)(*(long *)pRVar3 + 8)), iVar1 != 0) {
        pRVar3 = *(RegisteredExtension **)(pRVar3 + 8);
        if (pRVar3 == (RegisteredExtension *)0x0) goto LAB_0103bbc4;
      }
      uVar2 = InstallExtension(param_1,pRVar3,param_3);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined8 *)(*(long *)(param_2 + 8) + (long)*(int *)param_2 * 8));
  }
  return 1;
}

