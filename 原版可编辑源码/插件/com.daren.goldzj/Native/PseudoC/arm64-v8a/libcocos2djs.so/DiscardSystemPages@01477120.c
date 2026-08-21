
/* v8::base::OS::DiscardSystemPages(void*, unsigned long) */

bool v8::base::OS::DiscardSystemPages(void *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = madvise(param_1,param_2,8);
  if (iVar1 != 0) {
    piVar2 = (int *)__errno();
    if (*piVar2 == 0x26) {
      return true;
    }
    if (*piVar2 == 0x16) {
      iVar1 = madvise(param_1,param_2,4);
    }
  }
  return iVar1 == 0;
}

