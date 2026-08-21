
/* v8::base::SysInfo::NumberOfProcessors() */

undefined4 v8::base::SysInfo::NumberOfProcessors(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = sysconf(0x61);
  uVar1 = (undefined4)lVar2;
  if (lVar2 == -1) {
    uVar1 = 1;
  }
  return uVar1;
}

