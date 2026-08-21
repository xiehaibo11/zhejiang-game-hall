
void cpShapeFree(long *param_1)

{
  code *pcVar1;
  
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0x10), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    free(param_1);
    return;
  }
  return;
}

