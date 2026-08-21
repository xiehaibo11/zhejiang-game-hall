
int FUN_00a55f88(char *param_1,size_t param_2)

{
  int iVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  iVar1 = gethostname(param_1,param_2);
                    /* try { // try from 00a55fa4 to 00b55fb7 has its CatchHandler @ 00a55ffc */
  param_1[param_2 - 1] = '\0';
                    /* try { // try from 00a55fb8 to 00b56017 has its CatchHandler @ 00a55eec */
  if ((iVar1 == 0) && (pcVar2 = strchr(param_1,0x2e), iVar1 = 0, pcVar2 != (char *)0x0)) {
    iVar1 = 0;
    *pcVar2 = '\0';
  }
  return iVar1;
}

