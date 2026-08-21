
double FUN_01208e8c(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  char *local_38;
  
  if (param_1 == param_2) {
    dVar5 = 0.0;
    *param_3 = 4;
  }
  else {
    piVar4 = (int *)__errno();
    iVar1 = *piVar4;
    *piVar4 = 0;
    if (((DAT_017942d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_017942d8), iVar3 != 0)) {
      DAT_017942d0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(&DAT_017942d8);
    }
    dVar5 = strtod(param_1,&local_38);
    iVar3 = *piVar4;
    if (iVar3 == 0) {
      *piVar4 = iVar1;
    }
    dVar2 = 0.0;
    if ((local_38 != param_2) || (dVar2 = dVar5, iVar3 == 0x22)) {
      dVar5 = dVar2;
      *param_3 = 4;
    }
  }
  return dVar5;
}

