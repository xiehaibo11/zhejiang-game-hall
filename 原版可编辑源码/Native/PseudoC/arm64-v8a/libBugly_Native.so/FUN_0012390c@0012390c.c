
void FUN_0012390c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if (*(int *)(lVar1 + 0x28) == 1) {
    if (*(void **)(lVar1 + 0x48) == (void *)0x0) goto LAB_00123954;
    free(*(void **)(lVar1 + 0x48));
  }
  else {
    if ((*(int *)(lVar1 + 0x28) != 0) || (*(long *)(lVar1 + 0x48) == 0)) goto LAB_00123954;
    FUN_00123d1c();
  }
  *(undefined8 *)(lVar1 + 0x48) = 0;
LAB_00123954:
  free(*(void **)(param_2 + 0x38));
  *(undefined8 *)(param_2 + 0x38) = 0;
  return;
}

