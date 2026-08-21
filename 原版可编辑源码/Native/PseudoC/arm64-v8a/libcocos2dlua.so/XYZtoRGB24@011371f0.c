
void XYZtoRGB24(float *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double __x;
  
  dVar2 = (double)*param_1;
  dVar4 = (double)param_1[1];
  dVar6 = (double)param_1[2];
  dVar3 = dVar2 * 2.69 + dVar4 * -1.276 + dVar6 * -0.414;
  __x = dVar4 * 1.978 + dVar2 * -1.022 + dVar6 * 0.044;
  if (dVar3 <= 0.0) {
    uVar1 = 0;
  }
  else if (1.0 <= dVar3) {
    uVar1 = 0xff;
  }
  else {
    dVar5 = SQRT(dVar3);
    if (NAN(dVar5)) {
      dVar5 = sqrt(dVar3);
    }
    uVar1 = (undefined1)(int)(dVar5 * 256.0);
  }
  dVar2 = dVar2 * 0.061 + dVar4 * -0.224 + dVar6 * 1.163;
  *param_2 = uVar1;
  if (__x <= 0.0) {
    uVar1 = 0;
  }
  else if (1.0 <= __x) {
    uVar1 = 0xff;
  }
  else {
    dVar3 = SQRT(__x);
    if (NAN(dVar3)) {
      dVar3 = sqrt(__x);
    }
    uVar1 = (undefined1)(int)(dVar3 * 256.0);
  }
  param_2[1] = uVar1;
  if (dVar2 <= 0.0) {
    uVar1 = 0;
  }
  else if (1.0 <= dVar2) {
    uVar1 = 0xff;
  }
  else {
    dVar3 = SQRT(dVar2);
    if (NAN(dVar3)) {
      dVar3 = sqrt(dVar2);
    }
    uVar1 = (undefined1)(int)(dVar3 * 256.0);
  }
  param_2[2] = uVar1;
  return;
}

