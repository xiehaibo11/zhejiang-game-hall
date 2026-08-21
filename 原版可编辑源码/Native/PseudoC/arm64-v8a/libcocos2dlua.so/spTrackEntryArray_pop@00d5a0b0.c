
undefined8 spTrackEntryArray_pop(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)((long)iVar1 + -1);
  return *(undefined8 *)(*(long *)(param_1 + 2) + ((long)iVar1 + -1) * 8);
}

