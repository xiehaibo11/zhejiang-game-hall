
/* v8::internal::ProfilerCodeObserver::CreateEntriesForRuntimeCallStats() */

void __thiscall
v8::internal::ProfilerCodeObserver::CreateEntriesForRuntimeCallStats(ProfilerCodeObserver *this)

{
  CodeEntry *pCVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0x4af;
  puVar4 = (undefined8 *)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58c0);
  do {
    pCVar1 = operator_new(0x40);
    uVar2 = *puVar4;
    *(undefined4 *)pCVar1 = 0x5bc0b;
    *(undefined8 *)(pCVar1 + 0x38) = 0;
    *(undefined8 *)(pCVar1 + 0x30) = 0;
    *(undefined8 *)(pCVar1 + 0x28) = 0;
    *(undefined8 *)(pCVar1 + 8) = uVar2;
    *(char **)(pCVar1 + 0x10) = "native V8Runtime";
    *(undefined8 *)(pCVar1 + 0x20) = 0;
    *(undefined8 *)(pCVar1 + 0x18) = 0;
    CodeMap::AddCode((CodeMap *)(this + 0x10),(ulong)puVar4,pCVar1,1);
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 3;
  } while (lVar3 != 0);
  return;
}

