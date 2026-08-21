
bool FUN_00f644a0(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  char *__s2;
  char *__s1;
  
  switch(*param_1) {
  case 0:
    bVar1 = **(char **)(param_1 + 4) == **(char **)(param_1 + 6);
    break;
  case 1:
    bVar1 = **(char **)(param_1 + 4) == '\0';
    break;
  case 2:
  case 3:
    bVar1 = **(int **)(param_1 + 4) == **(int **)(param_1 + 6);
    break;
  case 4:
  case 6:
    bVar1 = **(long **)(param_1 + 4) == **(long **)(param_1 + 6);
    break;
  case 5:
    bVar1 = false;
    if (!NAN(**(double **)(param_1 + 4)) && !NAN(**(double **)(param_1 + 6))) {
      bVar1 = **(double **)(param_1 + 4) == **(double **)(param_1 + 6);
    }
    break;
  case 7:
    __s1 = (char *)**(undefined8 **)(param_1 + 4);
    __s2 = (char *)**(undefined8 **)(param_1 + 6);
    bVar1 = __s1 == (char *)0x0 && __s2 == (char *)0x0;
    if ((__s1 != (char *)0x0) && (__s2 != (char *)0x0)) {
      iVar2 = strcmp(__s1,__s2);
      bVar1 = iVar2 == 0;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return bVar1;
}

