
/* v8::internal::CompilerDispatcher::RegisterSharedFunctionInfo(unsigned long,
   v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::CompilerDispatcher::RegisterSharedFunctionInfo
          (CompilerDispatcher *this,ulong param_1,undefined8 param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  CompilerDispatcher *pCVar3;
  CompilerDispatcher *pCVar4;
  CompilerDispatcher *pCVar5;
  long lVar6;
  undefined8 local_38;
  
  local_38 = param_3;
  if (this[0x40] != (CompilerDispatcher)0x0) {
    PrintF("CompilerDispatcher: registering ");
    Object::ShortPrint((Object *)&local_38,(__sFILE *)waitpid);
    PrintF(" with job id %zu\n",param_1);
  }
  puVar1 = (ulong *)GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),local_38);
  pCVar3 = this + 0x60;
  pCVar5 = *(CompilerDispatcher **)pCVar3;
  pCVar4 = pCVar3;
  if (pCVar5 != (CompilerDispatcher *)0x0) {
    do {
      if (*(ulong *)(pCVar5 + 0x20) >= param_1) {
        pCVar4 = pCVar5;
      }
      pCVar5 = *(CompilerDispatcher **)(pCVar5 + (ulong)(*(ulong *)(pCVar5 + 0x20) < param_1) * 8);
    } while (pCVar5 != (CompilerDispatcher *)0x0);
    if ((pCVar4 != pCVar3) && (*(ulong *)(pCVar4 + 0x20) <= param_1)) goto LAB_00ef5e98;
  }
  pCVar4 = pCVar3;
LAB_00ef5e98:
  lVar6 = *(long *)(pCVar4 + 0x28);
  puVar2 = (ulong *)IdentityMapBase::GetEntry((IdentityMapBase *)(this + 0x70),*puVar1);
  *puVar2 = param_1;
  base::Mutex::Lock((Mutex *)(this + 0xb0));
  *(ulong **)(lVar6 + 8) = puVar1;
  if ((*(char *)(lVar6 + 0x10) != '\0') &&
     ((puVar1 != (ulong *)0x0 || (*(char *)(lVar6 + 0x11) != '\0')))) {
    ScheduleIdleTaskFromAnyThread((LockGuard *)this);
  }
  base::Mutex::Unlock((Mutex *)(this + 0xb0));
  return;
}

