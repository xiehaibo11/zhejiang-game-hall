
void FT_List_Remove(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (long *)0x0)) {
    lVar2 = *param_2;
    plVar3 = (long *)param_2[1];
    puVar1 = (undefined8 *)(lVar2 + 8);
    if (lVar2 == 0) {
      puVar1 = param_1;
    }
    *puVar1 = plVar3;
    if (plVar3 == (long *)0x0) {
      plVar3 = param_1 + 1;
    }
    *plVar3 = lVar2;
  }
  return;
}

