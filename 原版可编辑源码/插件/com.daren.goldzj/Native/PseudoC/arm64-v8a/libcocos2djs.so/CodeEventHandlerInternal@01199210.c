
/* v8::internal::ProfilerCodeObserver::CodeEventHandlerInternal(v8::internal::CodeEventsContainer
   const&) */

void __thiscall
v8::internal::ProfilerCodeObserver::CodeEventHandlerInternal
          (ProfilerCodeObserver *this,CodeEventsContainer *param_1)

{
  uint uVar1;
  int iVar2;
  CodeEntry *pCVar3;
  long lVar4;
  void *__dest;
  ulong uVar5;
  CodeEntry *pCVar6;
  void *__src;
  void *pvVar7;
  void *local_68;
  void *local_60;
  void *local_58;
  
  if (*(int *)param_1 - 1U < 5) {
    uVar5 = *(ulong *)(param_1 + 8);
    pCVar6 = *(CodeEntry **)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 0x18);
    switch(*(int *)param_1) {
    case 1:
      CodeMap::AddCode((CodeMap *)(this + 0x10),uVar5,pCVar6,uVar1);
      return;
    case 2:
      CodeMap::MoveCode((CodeMap *)(this + 0x10),uVar5,(ulong)pCVar6);
      return;
    case 3:
      pCVar3 = (CodeEntry *)CodeMap::FindEntry((CodeMap *)(this + 0x10),uVar5);
      if (pCVar3 != (CodeEntry *)0x0) {
        lVar4 = CodeEntry::EnsureRareData(pCVar3);
        *(CodeEntry **)(lVar4 + 8) = pCVar6;
      }
      break;
    case 4:
      __src = *(void **)(param_1 + 0x30);
      iVar2 = *(int *)(param_1 + 0x38);
      pCVar3 = (CodeEntry *)CodeMap::FindEntry((CodeMap *)(this + 0x10),uVar5);
      if (pCVar3 != (CodeEntry *)0x0) {
        if (iVar2 == 0) {
          __dest = (void *)0x0;
          pvVar7 = (void *)0x0;
        }
        else {
          if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar5 = (long)iVar2 << 4;
          __dest = operator_new(uVar5);
          pvVar7 = (void *)((long)__dest + (long)iVar2 * 0x10);
          memcpy(__dest,__src,uVar5);
        }
        local_68 = __dest;
        local_60 = pvVar7;
        local_58 = pvVar7;
        CodeEntry::set_deopt_info(pCVar3,pCVar6,uVar1,&local_68);
        if (local_68 != (void *)0x0) {
          local_60 = local_68;
          operator_delete(local_68);
        }
        if (__src != (void *)0x0) {
          operator_delete__(__src);
        }
      }
      break;
    case 5:
      pCVar3 = (CodeEntry *)CodeMap::FindEntry((CodeMap *)(this + 0x10),uVar5);
      if (pCVar3 != (CodeEntry *)0x0) {
        CodeEntry::SetBuiltinId(pCVar3,(ulong)pCVar6 & 0xffffffff);
        return;
      }
    }
  }
  return;
}

