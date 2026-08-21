
/* v8::internal::Bootstrapper::NewRemoteContext(v8::internal::MaybeHandle<v8::internal::JSGlobalProxy>,
   v8::Local<v8::ObjectTemplate>) */

ulong * __thiscall
v8::internal::Bootstrapper::NewRemoteContext
          (Bootstrapper *this,undefined8 param_2,undefined8 param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  Logger *this_00;
  Genesis aGStack_80 [24];
  ulong *local_68;
  long local_48;
  
  pIVar6 = *(Isolate **)this;
  pIVar1 = pIVar6 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(pIVar6 + 0x95a8);
  *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
  Genesis::Genesis(aGStack_80,*(undefined8 *)this,param_2,param_3);
  *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + -1;
  if (local_68 == (ulong *)0x0) {
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
    if ((FLAG_trace_maps != '\0') && (*(char *)(*(long *)this + 0xb6ba) == '\0')) {
      this_00 = *(Logger **)(*(long *)this + 0x9558);
      uVar4 = Logger::is_logging(this_00);
      if ((uVar4 & 1) != 0) {
        Logger::LogAllMaps(this_00);
      }
    }
    uVar4 = *local_68;
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

