
size_t EC_get_builtin_curves(EC_builtin_curve *r,size_t nitems)

{
  int *piVar1;
  ulong uVar2;
  char **ppcVar3;
  int *piVar4;
  
  if ((r != (EC_builtin_curve *)0x0) && (nitems != 0)) {
    if (0x50 < nitems) {
      nitems = 0x51;
    }
    if (nitems != 0) {
      uVar2 = 0;
      piVar4 = &DAT_016b04c0;
      ppcVar3 = &r->comment;
      do {
        uVar2 = uVar2 + 1;
        ((EC_builtin_curve *)(ppcVar3 + -1))->nid = *piVar4;
        piVar1 = piVar4 + 6;
        piVar4 = piVar4 + 8;
        *ppcVar3 = *(char **)piVar1;
        ppcVar3 = ppcVar3 + 2;
      } while (uVar2 < nitems);
    }
  }
  return 0x51;
}

