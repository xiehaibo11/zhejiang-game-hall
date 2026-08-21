
void FT_List_Remove(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (long *)0x0)) {
    lVar3 = *param_2;
    plVar4 = (long *)param_2[1];
    puVar1 = param_1;
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar3 + 8);
    }
    *puVar1 = plVar4;
    plVar2 = param_1 + 1;
    if (plVar4 != (long *)0x0) {
      plVar2 = plVar4;
    }
    *plVar2 = lVar3;
  }
  return;
}

