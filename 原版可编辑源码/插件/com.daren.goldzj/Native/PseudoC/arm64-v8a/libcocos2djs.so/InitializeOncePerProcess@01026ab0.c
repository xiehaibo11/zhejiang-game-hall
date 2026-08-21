
/* v8::internal::Bootstrapper::InitializeOncePerProcess() */

void v8::internal::Bootstrapper::InitializeOncePerProcess(void)

{
  Extension *pEVar1;
  char *pcVar2;
  Extension *local_60;
  Extension *local_58;
  Extension *local_50;
  Extension *local_48;
  Extension *local_40;
  Extension *local_38;
  
  pcVar2 = "gc";
  if ((FLAG_expose_gc_as != (char *)0x0) && (*FLAG_expose_gc_as != '\0')) {
    pcVar2 = FLAG_expose_gc_as;
  }
  pEVar1 = operator_new(0x68);
  *(undefined ***)pEVar1 = &PTR__Extension_01cc6b98;
  SNPrintF(pEVar1 + 0x31,0x32,"native function %s();",pcVar2);
  Extension::Extension(pEVar1,"v8/gc",(char *)(pEVar1 + 0x31),0,(char **)0x0,-1);
  *(undefined ***)pEVar1 = &PTR__Extension_01cc6b98;
  local_38 = pEVar1;
  RegisterExtension(&local_38);
  pEVar1 = local_38;
  local_38 = (Extension *)0x0;
  if (pEVar1 != (Extension *)0x0) {
    (**(code **)(*(long *)pEVar1 + 8))();
  }
  pEVar1 = operator_new(0x38);
  Extension::Extension
            (pEVar1,"v8/externalize",
             "native function externalizeString();native function isOneByteString();function x() { return 1; }"
             ,0,(char **)0x0,-1);
  *(undefined ***)pEVar1 = &PTR__Extension_01cc6ad0;
  local_40 = pEVar1;
  RegisterExtension(&local_40);
  pEVar1 = local_40;
  local_40 = (Extension *)0x0;
  if (pEVar1 != (Extension *)0x0) {
    (**(code **)(*(long *)pEVar1 + 8))();
  }
  pEVar1 = operator_new(0x38);
  Extension::Extension
            (pEVar1,"v8/statistics","native function getV8Statistics();",0,(char **)0x0,-1);
  *(undefined ***)pEVar1 = &PTR__Extension_01cc6c50;
  local_48 = pEVar1;
  RegisterExtension(&local_48);
  pEVar1 = local_48;
  local_48 = (Extension *)0x0;
  if (pEVar1 != (Extension *)0x0) {
    (**(code **)(*(long *)pEVar1 + 8))();
  }
  pEVar1 = operator_new(0x38);
  Extension::Extension
            (pEVar1,"v8/trigger-failure",
             "native function triggerCheckFalse();native function triggerAssertFalse();native function triggerSlowAssertFalse();"
             ,0,(char **)0x0,-1);
  *(undefined ***)pEVar1 = &PTR__Extension_01cc6c80;
  local_50 = pEVar1;
  RegisterExtension(&local_50);
  pEVar1 = local_50;
  local_50 = (Extension *)0x0;
  if (pEVar1 != (Extension *)0x0) {
    (**(code **)(*(long *)pEVar1 + 8))();
  }
  pEVar1 = operator_new(0x38);
  Extension::Extension
            (pEVar1,"v8/ignition-statistics","native function getIgnitionDispatchCounters();",0,
             (char **)0x0,-1);
  *(undefined ***)pEVar1 = &PTR__Extension_01cc6c20;
  local_58 = pEVar1;
  RegisterExtension(&local_58);
  pEVar1 = local_58;
  local_58 = (Extension *)0x0;
  if (pEVar1 != (Extension *)0x0) {
    (**(code **)(*(long *)pEVar1 + 8))();
  }
  if ((FLAG_expose_cputracemark_as != (char *)0x0) && (*FLAG_expose_cputracemark_as != '\0')) {
    pEVar1 = operator_new(0x68);
    pcVar2 = FLAG_expose_cputracemark_as;
    *(undefined ***)pEVar1 = &PTR__Extension_01cc6aa0;
    SNPrintF(pEVar1 + 0x31,0x32,"native function %s();",pcVar2);
    Extension::Extension(pEVar1,"v8/cpumark",(char *)(pEVar1 + 0x31),0,(char **)0x0,-1);
    *(undefined ***)pEVar1 = &PTR__Extension_01cc6aa0;
    local_60 = pEVar1;
    RegisterExtension(&local_60);
    pEVar1 = local_60;
    local_60 = (Extension *)0x0;
    if (pEVar1 != (Extension *)0x0) {
      (**(code **)(*(long *)pEVar1 + 8))();
    }
  }
  return;
}

