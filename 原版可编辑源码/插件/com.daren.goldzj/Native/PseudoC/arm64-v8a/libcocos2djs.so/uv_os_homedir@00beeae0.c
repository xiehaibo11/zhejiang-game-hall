
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_os_homedir(void *param_1,size_t *param_2)

{
  int iVar1;
  char *__s;
  size_t sVar2;
  undefined1 auStack_30 [32];
  char *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 == (void *)0x0) || (param_2 == (size_t *)0x0)) || (*param_2 == 0)) {
    iVar1 = -0x16;
  }
  else {
    __s = getenv("HOME");
    if (__s == (char *)0x0) {
      iVar1 = uv__getpwuid_r(auStack_30);
      if (iVar1 == 0) {
        sVar2 = strlen(local_10);
        if (sVar2 < *param_2) {
          memcpy(param_1,local_10,sVar2 + 1);
          *param_2 = sVar2;
          uv_os_free_passwd(auStack_30);
        }
        else {
          *param_2 = sVar2 + 1;
          iVar1 = -0x69;
          uv_os_free_passwd(auStack_30);
        }
      }
    }
    else {
      sVar2 = strlen(__s);
      if (sVar2 < *param_2) {
        memcpy(param_1,__s,sVar2 + 1);
        *param_2 = sVar2;
        iVar1 = 0;
      }
      else {
        iVar1 = -0x69;
        *param_2 = sVar2 + 1;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

