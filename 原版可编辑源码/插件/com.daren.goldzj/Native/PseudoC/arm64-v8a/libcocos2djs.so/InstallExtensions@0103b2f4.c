
/* v8::internal::Genesis::InstallExtensions(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Context>, v8::ExtensionConfiguration*) */

undefined4
v8::internal::Genesis::InstallExtensions(Isolate *param_1,undefined8 param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  RegisteredExtension *pRVar6;
  char *__s1;
  undefined8 *puVar7;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = malloc(0xc0);
  if (local_70 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Out of memory: HashMap::Initialize");
  }
  local_68 = 8;
  *local_70 = 0;
  local_70[3] = 0;
  local_70[6] = 0;
  local_70[9] = 0;
  local_70[0xc] = 0;
  uVar3 = 5;
  lVar4 = 0x78;
  do {
    uVar3 = uVar3 + 1;
    *(undefined8 *)((long)local_70 + lVar4) = 0;
    lVar4 = lVar4 + 0x18;
  } while (uVar3 < 8);
  local_64 = 0;
  for (pRVar6 = RegisteredExtension::first_extension_; pRVar6 != (RegisteredExtension *)0x0;
      pRVar6 = *(RegisteredExtension **)(pRVar6 + 8)) {
    if ((*(char *)(*(long *)pRVar6 + 0x30) != '\0') &&
       (uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70), (uVar3 & 1) == 0))
    goto LAB_0103b644;
  }
  pRVar6 = RegisteredExtension::first_extension_;
  if (FLAG_expose_gc == '\0') {
LAB_0103b418:
    pRVar6 = RegisteredExtension::first_extension_;
    if (FLAG_expose_externalize_string == '\0') {
LAB_0103b46c:
      pRVar6 = RegisteredExtension::first_extension_;
      if (TracingFlags::gc_stats == 0) {
LAB_0103b4c0:
        pRVar6 = RegisteredExtension::first_extension_;
        if (FLAG_expose_trigger_failure == '\0') {
LAB_0103b514:
          pRVar6 = RegisteredExtension::first_extension_;
          if (FLAG_trace_ignition_dispatches == '\0') {
LAB_0103b568:
            if ((FLAG_expose_cputracemark_as == (char *)0x0) ||
               (pRVar6 = RegisteredExtension::first_extension_, *FLAG_expose_cputracemark_as == '\0'
               )) {
LAB_0103b5c4:
              if (*param_3 == 0) {
                uVar5 = 1;
              }
              else {
                puVar7 = *(undefined8 **)(param_3 + 2);
                do {
                  if (RegisteredExtension::first_extension_ == (RegisteredExtension *)0x0)
                  goto LAB_0103b630;
                  __s1 = (char *)*puVar7;
                  pRVar6 = RegisteredExtension::first_extension_;
                  while (iVar2 = strcmp(__s1,*(char **)(*(long *)pRVar6 + 8)), iVar2 != 0) {
                    pRVar6 = *(RegisteredExtension **)(pRVar6 + 8);
                    if (pRVar6 == (RegisteredExtension *)0x0) goto LAB_0103b630;
                  }
                  uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70);
                  if ((uVar3 & 1) == 0) goto LAB_0103b644;
                  puVar7 = puVar7 + 1;
                  uVar5 = 1;
                } while (puVar7 != (undefined8 *)(*(long *)(param_3 + 2) + (long)*param_3 * 8));
              }
              goto LAB_0103b648;
            }
            for (; pRVar6 != (RegisteredExtension *)0x0;
                pRVar6 = *(RegisteredExtension **)(pRVar6 + 8)) {
              iVar2 = strcmp("v8/cpumark",*(char **)(*(long *)pRVar6 + 8));
              if (iVar2 == 0) {
                uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70);
                if ((uVar3 & 1) != 0) goto LAB_0103b5c4;
                goto LAB_0103b644;
              }
            }
          }
          else {
            for (; pRVar6 != (RegisteredExtension *)0x0;
                pRVar6 = *(RegisteredExtension **)(pRVar6 + 8)) {
              iVar2 = strcmp("v8/ignition-statistics",*(char **)(*(long *)pRVar6 + 8));
              if (iVar2 == 0) {
                uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70);
                if ((uVar3 & 1) != 0) goto LAB_0103b568;
                goto LAB_0103b644;
              }
            }
          }
        }
        else {
          for (; pRVar6 != (RegisteredExtension *)0x0;
              pRVar6 = *(RegisteredExtension **)(pRVar6 + 8)) {
            iVar2 = strcmp("v8/trigger-failure",*(char **)(*(long *)pRVar6 + 8));
            if (iVar2 == 0) {
              uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70);
              if ((uVar3 & 1) != 0) goto LAB_0103b514;
              goto LAB_0103b644;
            }
          }
        }
      }
      else {
        for (; pRVar6 != (RegisteredExtension *)0x0; pRVar6 = *(RegisteredExtension **)(pRVar6 + 8))
        {
          iVar2 = strcmp("v8/statistics",*(char **)(*(long *)pRVar6 + 8));
          if (iVar2 == 0) {
            uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70);
            if ((uVar3 & 1) != 0) goto LAB_0103b4c0;
            goto LAB_0103b644;
          }
        }
      }
    }
    else {
      for (; pRVar6 != (RegisteredExtension *)0x0; pRVar6 = *(RegisteredExtension **)(pRVar6 + 8)) {
        iVar2 = strcmp("v8/externalize",*(char **)(*(long *)pRVar6 + 8));
        if (iVar2 == 0) {
          uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70);
          if ((uVar3 & 1) != 0) goto LAB_0103b46c;
          goto LAB_0103b644;
        }
      }
    }
  }
  else {
    for (; pRVar6 != (RegisteredExtension *)0x0; pRVar6 = *(RegisteredExtension **)(pRVar6 + 8)) {
      iVar2 = strcmp("v8/gc",*(char **)(*(long *)pRVar6 + 8));
      if (iVar2 == 0) {
        uVar3 = InstallExtension(param_1,pRVar6,(ExtensionStates *)&local_70);
        if ((uVar3 & 1) != 0) goto LAB_0103b418;
        goto LAB_0103b644;
      }
    }
  }
LAB_0103b630:
  Utils::ReportApiFailure("v8::Context::New()","Cannot find required extension");
LAB_0103b644:
  uVar5 = 0;
LAB_0103b648:
  free(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

