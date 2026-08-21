
/* v8::internal::Genesis::InstallExtension(v8::internal::Isolate*, v8::RegisteredExtension*,
   v8::internal::Genesis::ExtensionStates*) */

uint v8::internal::Genesis::InstallExtension
               (Isolate *param_1,RegisteredExtension *param_2,ExtensionStates *param_3)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  RegisteredExtension *pRVar9;
  undefined8 *puVar10;
  ulong uVar11;
  RegisteredExtension *pRVar12;
  Extension *pEVar13;
  char *__s1;
  
  uVar5 = ~(uint)param_2 + (uint)param_2 * 0x8000;
  uVar5 = (uVar5 ^ uVar5 >> 0xc) * 5;
  uVar5 = (uVar5 ^ uVar5 >> 4) * 0x809;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  lVar6 = *(long *)param_3;
  uVar3 = *(int *)(param_3 + 8) - 1;
  uVar8 = (ulong)(uVar3 & (uVar5 & 0x3fffffff ^ uVar5 >> 0x10));
  puVar7 = (undefined8 *)(lVar6 + uVar8 * 0x18);
  pRVar9 = (RegisteredExtension *)*puVar7;
  uVar1 = *(undefined8 *)(param_1 + 0x95a0);
  lVar2 = *(long *)(param_1 + 0x95a8);
  uVar11 = uVar8;
  puVar10 = puVar7;
  pRVar12 = pRVar9;
  if (pRVar9 != (RegisteredExtension *)0x0) {
    do {
      if (pRVar12 == param_2) {
        if (((param_2 != (RegisteredExtension *)0x0) && (puVar10 != (undefined8 *)0x0)) &&
           (*(int *)(puVar10 + 1) == 2)) {
          uVar5 = 1;
          goto joined_r0x0103be20;
        }
        break;
      }
      uVar11 = (ulong)((int)uVar11 + 1U & uVar3);
      puVar10 = (undefined8 *)(lVar6 + uVar11 * 0x18);
      pRVar12 = (RegisteredExtension *)*puVar10;
    } while (pRVar12 != (RegisteredExtension *)0x0);
    do {
      if (pRVar9 == param_2) {
        if (((param_2 != (RegisteredExtension *)0x0) && (puVar7 != (undefined8 *)0x0)) &&
           (*(int *)(puVar7 + 1) == 1)) {
          Utils::ReportApiFailure("v8::Context::New()","Circular extension dependency");
          uVar5 = 0;
          goto joined_r0x0103be20;
        }
        break;
      }
      uVar8 = (ulong)((int)uVar8 + 1U & uVar3);
      puVar7 = (undefined8 *)(lVar6 + uVar8 * 0x18);
      pRVar9 = (RegisteredExtension *)*puVar7;
    } while (pRVar9 != (RegisteredExtension *)0x0);
  }
  ExtensionStates::set_state(param_3,param_2,1);
  pEVar13 = *(Extension **)param_2;
  if (0 < *(int *)(pEVar13 + 0x20)) {
    lVar6 = 0;
    do {
      if (RegisteredExtension::first_extension_ == (RegisteredExtension *)0x0) {
LAB_0103be04:
        Utils::ReportApiFailure("v8::Context::New()","Cannot find required extension");
LAB_0103be18:
        uVar5 = 0;
        goto joined_r0x0103be20;
      }
      __s1 = *(char **)(*(long *)(pEVar13 + 0x28) + lVar6 * 8);
      pRVar12 = RegisteredExtension::first_extension_;
      while (iVar4 = strcmp(__s1,*(char **)(*(long *)pRVar12 + 8)), iVar4 != 0) {
        pRVar12 = *(RegisteredExtension **)(pRVar12 + 8);
        if (pRVar12 == (RegisteredExtension *)0x0) goto LAB_0103be04;
      }
      uVar11 = InstallExtension(param_1,pRVar12,param_3);
      if ((uVar11 & 1) == 0) goto LAB_0103be18;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(pEVar13 + 0x20));
  }
  uVar5 = CompileExtension(param_1,pEVar13);
  if ((uVar5 & 1) == 0) {
    base::OS::PrintError
              ("Error installing extension \'%s\'.\n",*(undefined8 *)(*(long *)param_2 + 8));
    *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
  }
  ExtensionStates::set_state(param_3,param_2,2);
joined_r0x0103be20:
  if (param_1 != (Isolate *)0x0) {
    *(undefined8 *)(param_1 + 0x95a0) = uVar1;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar2) {
      *(long *)(param_1 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(param_1);
    }
  }
  return uVar5 & 1;
}

