
/* v8::base::OS::SetPermissions(void*, unsigned long, v8::base::OS::MemoryPermission) */

bool v8::base::OS::SetPermissions(void *param_1,size_t param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 < 5) {
    iVar1 = mprotect(param_1,param_2,*(int *)(&DAT_01a3dbe0 + (long)(int)param_3 * 4));
    if (iVar1 == 0 && param_3 == 0) {
      iVar2 = madvise(param_1,param_2,8);
      if ((iVar2 != 0) && (piVar3 = (int *)__errno(), *piVar3 == 0x16)) {
        madvise(param_1,param_2,4);
      }
    }
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

