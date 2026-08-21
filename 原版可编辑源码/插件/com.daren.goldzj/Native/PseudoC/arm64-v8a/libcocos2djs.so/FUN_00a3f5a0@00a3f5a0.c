
int FUN_00a3f5a0(char *param_1,size_t param_2)

{
  int iVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  iVar1 = gethostname(param_1,param_2);
  param_1[param_2 - 1] = '\0';
  if ((iVar1 == 0) && (pcVar2 = strchr(param_1,0x2e), iVar1 = 0, pcVar2 != (char *)0x0)) {
                    /* try { // try from 00a3f5d8 to 00b3f767 has its CatchHandler @ 00a3f18c */
    iVar1 = 0;
    *pcVar2 = '\0';
  }
  return iVar1;
}

