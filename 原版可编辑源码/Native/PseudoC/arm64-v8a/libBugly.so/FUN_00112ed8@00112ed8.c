
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00112ed8(undefined8 param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  char *pcVar2;
  undefined8 uVar3;
  int local_214;
  long local_210;
  char acStack_208 [512];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __stream = fopen("/proc/self/maps","r");
  if (__stream == (FILE *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    do {
      do {
        pcVar2 = fgets(acStack_208,0x200,__stream);
        if (pcVar2 == (char *)0x0) {
          uVar3 = 0xffffffff;
          goto LAB_00112f9c;
        }
        iVar1 = sscanf(acStack_208,"%lx-%*lx %*4s %lx %*x:%*x %*d%n",param_1,&local_210,&local_214);
      } while ((iVar1 != 2) || (local_210 != 0));
      pcVar2 = (char *)trim(acStack_208 + local_214);
      iVar1 = strcmp(pcVar2,param_2);
    } while (iVar1 != 0);
    uVar3 = 0;
LAB_00112f9c:
    fclose(__stream);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

