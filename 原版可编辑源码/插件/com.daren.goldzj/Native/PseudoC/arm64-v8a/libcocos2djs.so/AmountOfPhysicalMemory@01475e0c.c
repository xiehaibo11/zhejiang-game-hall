
/* v8::base::SysInfo::AmountOfPhysicalMemory() */

long v8::base::SysInfo::AmountOfPhysicalMemory(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = sysconf(0x62);
  lVar3 = sysconf(0x27);
  lVar1 = 0;
  if (lVar3 != -1 && lVar2 != -1) {
    lVar1 = lVar3 * lVar2;
  }
  return lVar1;
}

