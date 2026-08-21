
void cpArrayFreeEach(int *param_1,code *param_2)

{
  long lVar1;
  
  if (0 < *param_1) {
    lVar1 = 0;
    do {
      (*param_2)(*(undefined8 *)(*(long *)(param_1 + 2) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *param_1);
  }
  return;
}

