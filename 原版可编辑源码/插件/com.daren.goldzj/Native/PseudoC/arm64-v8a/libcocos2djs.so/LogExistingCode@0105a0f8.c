
/* v8::internal::ExternalCodeEventListener::LogExistingCode() */

void __thiscall
v8::internal::ExternalCodeEventListener::LogExistingCode(ExternalCodeEventListener *this)

{
  undefined8 uVar1;
  long lVar2;
  Isolate *pIVar3;
  undefined8 local_40;
  ExternalCodeEventListener *pEStack_38;
  
  pIVar3 = *(Isolate **)(this + 0x10);
  uVar1 = *(undefined8 *)(pIVar3 + 0x95a0);
  lVar2 = *(long *)(pIVar3 + 0x95a8);
  *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + 1;
  local_40 = *(undefined8 *)(this + 0x10);
  pEStack_38 = this;
  ExistingCodeLogger::LogCodeObjects((ExistingCodeLogger *)&local_40);
  ExistingCodeLogger::LogCompiledFunctions((ExistingCodeLogger *)&local_40);
  if (pIVar3 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar3 + 0x95a0) = uVar1;
    *(int *)(pIVar3 + 0x95b0) = *(int *)(pIVar3 + 0x95b0) + -1;
    if (*(long *)(pIVar3 + 0x95a8) != lVar2) {
      *(long *)(pIVar3 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar3);
      return;
    }
  }
  return;
}

