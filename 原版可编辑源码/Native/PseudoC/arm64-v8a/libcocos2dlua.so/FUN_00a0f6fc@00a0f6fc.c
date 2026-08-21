
int FUN_00a0f6fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *__s2;
  char *__s1;
  
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  iVar2 = strcmp(__s1,__s2);
  iVar1 = 0;
  if (iVar2 != 0) {
    if (*__s1 == 'C') {
      uVar3 = (uint)(__s1[1] == 'S');
    }
    else {
      uVar3 = 0;
    }
    if (*__s2 == 'C') {
      uVar4 = (uint)(__s2[1] == 'S');
    }
    else {
      uVar4 = 0;
    }
    iVar1 = -1;
    if (-1 < iVar2) {
      iVar1 = 1;
    }
    iVar1 = iVar1 + (uVar3 - uVar4) * 4;
  }
                    /* try { // try from 00a0f77c to 00b0f78b has its CatchHandler @ 00a0f980 */
  return iVar1;
}

