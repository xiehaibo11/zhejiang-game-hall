
/* v8::base::OS::Free(void*, unsigned long) */

bool v8::base::OS::Free(void *param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = munmap(param_1,param_2);
  return iVar1 == 0;
}

