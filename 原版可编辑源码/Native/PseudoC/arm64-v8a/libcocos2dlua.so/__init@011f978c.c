
/* std::__ndk1::locale::id::__init() */

void __thiscall std::__ndk1::locale::id::__init(id *this)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  
  do {
    iVar1 = __next_id + 1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(&__next_id,0x10);
    if (bVar3) {
      cVar2 = ExclusiveMonitorsStatus();
      __next_id = iVar1;
    }
  } while (cVar2 != '\0');
  *(int *)(this + 8) = iVar1;
  return;
}

