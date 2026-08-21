
/* v8::internal::Bootstrapper::CreateEnvironment(v8::internal::MaybeHandle<v8::internal::JSGlobalProxy>,
   v8::Local<v8::ObjectTemplate>, v8::ExtensionConfiguration*, unsigned long,
   v8::DeserializeInternalFieldsCallback, v8::MicrotaskQueue*) */

ulong * v8::internal::Bootstrapper::CreateEnvironment
                  (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 extraout_x1;
  Isolate *pIVar6;
  Logger *this;
  Genesis aGStack_a8 [8];
  ulong *local_a0;
  long local_70;
  SaveAndSwitchContext aSStack_68 [24];
  
  pIVar6 = (Isolate *)*param_1;
  pIVar1 = pIVar6 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(pIVar6 + 0x95a8);
  *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
  Genesis::Genesis(aGStack_a8,*param_1,param_2,param_3);
  if (local_a0 == (ulong *)0x0) {
LAB_01026f80:
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    if (pIVar6 != (Isolate *)0x0) {
      *(long *)pIVar1 = lVar2;
      *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
      if (*(long *)(pIVar6 + 0x95a8) != lVar3) {
        *(long *)(pIVar6 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(pIVar6);
      }
    }
    puVar5 = (ulong *)0x0;
  }
  else {
    if (*(char *)(*param_1 + 0xb6b8) == '\0') {
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      SaveAndSwitchContext::SaveAndSwitchContext(aSStack_68,*param_1,*local_a0);
      uVar4 = Genesis::InstallExtensions(*param_1,extraout_x1,param_4);
      if ((uVar4 & 1) == 0) {
        SaveContext::~SaveContext((SaveContext *)aSStack_68);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        goto LAB_01026f80;
      }
      Genesis::InstallSpecialObjects(*param_1);
      SaveContext::~SaveContext((SaveContext *)aSStack_68);
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    }
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + -1;
    if ((FLAG_trace_maps != '\0') && (*(char *)(*param_1 + 0xb6ba) == '\0')) {
      this = *(Logger **)(*param_1 + 0x9558);
      uVar4 = Logger::is_logging(this);
      if ((uVar4 & 1) != 0) {
        Logger::LogAllMaps(this);
      }
    }
    Heap::NotifyBootstrapComplete((Heap *)(*param_1 + 0x8850));
    uVar4 = *local_a0;
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
    if (*(long *)(pIVar6 + 0x95a8) != lVar3) {
      *(long *)(pIVar6 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar6);
    }
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar4;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar4);
    }
  }
  return puVar5;
}

