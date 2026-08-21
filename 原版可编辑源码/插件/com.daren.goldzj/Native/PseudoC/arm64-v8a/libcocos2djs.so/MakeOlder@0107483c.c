
/* v8::internal::BytecodeArray::MakeOlder() */

void __thiscall v8::internal::BytecodeArray::MakeOlder(BytecodeArray *this)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  
  cVar2 = *(char *)(*(long *)this + 0x20);
  if (cVar2 < '\x05') {
    pcVar1 = (char *)(*(long *)this + 0x20);
    do {
      if (*pcVar1 != cVar2) {
        ClearExclusiveLocal();
        return;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar4) {
        *pcVar1 = cVar2 + '\x01';
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}

