
undefined1 FUN_00d4ebac(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  char *__s2;
  size_t __n;
  
  __s2 = (char *)*param_2;
  __n = (size_t)(*(int *)(param_2 + 1) - (int)__s2);
  iVar2 = strncmp(*(char **)(param_1 + 0x38),__s2,__n);
  if (iVar2 == 0) {
    uVar1 = 7;
  }
  else {
    iVar2 = strncmp(*(char **)(param_1 + 0x30),__s2,__n);
    if (iVar2 == 0) {
      uVar1 = 6;
    }
    else {
      iVar2 = strncmp(*(char **)(param_1 + 0x28),__s2,__n);
      if (iVar2 == 0) {
                    /* try { // try from 00d4ec74 to 00e4ec8f has its CatchHandler @ 00d4ee2c */
        uVar1 = 5;
      }
      else {
        iVar2 = strncmp(*(char **)(param_1 + 0x20),__s2,__n);
        if (iVar2 == 0) {
          uVar1 = 4;
        }
        else {
          iVar2 = strncmp(*(char **)(param_1 + 0x18),__s2,__n);
          if (iVar2 == 0) {
            uVar1 = 3;
          }
          else {
            iVar2 = strncmp(*(char **)(param_1 + 0x10),__s2,__n);
            if (iVar2 == 0) {
              uVar1 = 2;
            }
            else {
              iVar2 = strncmp(*(char **)(param_1 + 8),__s2,__n);
              uVar1 = iVar2 == 0;
            }
          }
        }
      }
    }
  }
                    /* try { // try from 00d4ec90 to 00e4ecd7 has its CatchHandler @ 00d4e60c */
  return uVar1;
}

