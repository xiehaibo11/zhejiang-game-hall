
void FT_List_Add(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar2 = param_1[1];
    *param_2 = lVar2;
    param_2[1] = 0;
    plVar1 = param_1;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 8);
    }
    *plVar1 = (long)param_2;
    param_1[1] = (long)param_2;
  }
  return;
}

