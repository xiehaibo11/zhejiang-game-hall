
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */
/* v8::base::SysInfo::AmountOfVirtualMemory() */

rlim_t v8::base::SysInfo::AmountOfVirtualMemory(void)

{
  rlim_t rVar1;
  int iVar2;
  rlimit local_20;
  
  iVar2 = getrlimit(RLIMIT_DATA,&local_20);
  rVar1 = 0;
  if (local_20.rlim_cur != 0xffffffffffffffff) {
    rVar1 = local_20.rlim_cur;
  }
  if (iVar2 != 0) {
    rVar1 = 0;
  }
  return rVar1;
}

