
void FT_List_Up(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (((param_1 != (undefined8 *)0x0) && (param_2 != (long *)0x0)) && (lVar2 = *param_2, lVar2 != 0)
     ) {
    plVar4 = (long *)param_2[1];
    *(long **)(lVar2 + 8) = plVar4;
    plVar1 = param_1 + 1;
    if (plVar4 != (long *)0x0) {
      plVar1 = plVar4;
    }
    *plVar1 = lVar2;
    *param_2 = 0;
    puVar3 = (undefined8 *)*param_1;
    param_2[1] = (long)puVar3;
    *puVar3 = param_2;
    *param_1 = param_2;
  }
  return;
}

