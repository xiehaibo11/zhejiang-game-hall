
void spTriangulator_dispose(undefined8 *param_1)

{
  int *piVar1;
  long lVar2;
  
  piVar1 = (int *)*param_1;
  if (0 < *piVar1) {
    lVar2 = 0;
    do {
      spFloatArray_dispose(*(undefined8 *)(*(long *)(piVar1 + 2) + lVar2 * 8));
      piVar1 = (int *)*param_1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
  }
  spArrayFloatArray_dispose();
  piVar1 = (int *)param_1[1];
  if (0 < *piVar1) {
    lVar2 = 0;
    do {
      spShortArray_dispose(*(undefined8 *)(*(long *)(piVar1 + 2) + lVar2 * 8));
      piVar1 = (int *)param_1[1];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
  }
  spArrayShortArray_dispose();
  spShortArray_dispose(param_1[2]);
  spIntArray_dispose(param_1[3]);
  spShortArray_dispose(param_1[4]);
  piVar1 = (int *)param_1[5];
  if (0 < *piVar1) {
    lVar2 = 0;
    do {
      spFloatArray_dispose(*(undefined8 *)(*(long *)(piVar1 + 2) + lVar2 * 8));
      piVar1 = (int *)param_1[5];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
  }
  spArrayFloatArray_dispose();
  piVar1 = (int *)param_1[6];
  if (0 < *piVar1) {
    lVar2 = 0;
    do {
      spShortArray_dispose(*(undefined8 *)(*(long *)(piVar1 + 2) + lVar2 * 8));
      piVar1 = (int *)param_1[6];
      lVar2 = lVar2 + 1;
    } while (lVar2 < *piVar1);
  }
  spArrayShortArray_dispose();
  _spFree(param_1);
  return;
}

