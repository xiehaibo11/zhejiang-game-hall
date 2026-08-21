
/* std::__ndk1::ios_base::xalloc() */

void std::__ndk1::ios_base::xalloc(void)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(&__xindex_,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      __xindex_ = __xindex_ + 1;
    }
  } while (cVar1 != '\0');
  return;
}

