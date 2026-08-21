
void FUN_00ddc928(long param_1,undefined1 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double __x;
  float local_7c;
  float fStack_78;
  float local_74;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    do {
      LogLuv24toXYZ(*puVar2,&local_7c);
      dVar7 = (double)local_7c;
      dVar4 = (double)fStack_78;
      dVar6 = (double)local_74;
      dVar3 = dVar7 * 2.69 + dVar4 * -1.276 + dVar6 * -0.414;
      __x = dVar4 * 1.978 + dVar7 * -1.022 + dVar6 * 0.044;
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
      dVar3 = dVar7 * 0.061 + dVar4 * -0.224 + dVar6 * 1.163;
      *param_2 = uVar1;
      if (__x <= 0.0) {
        uVar1 = 0;
      }
      else if (1.0 <= __x) {
        uVar1 = 0xff;
      }
      else {
        dVar4 = SQRT(__x);
        if (NAN(dVar4)) {
          dVar4 = sqrt(__x);
        }
        uVar1 = (undefined1)(int)(dVar4 * 256.0);
      }
      param_2[1] = uVar1;
      if (dVar3 <= 0.0) {
        uVar1 = 0;
      }
      else if (1.0 <= dVar3) {
        uVar1 = 0xff;
      }
      else {
        dVar4 = SQRT(dVar3);
        if (NAN(dVar4)) {
          dVar4 = sqrt(dVar3);
        }
        uVar1 = (undefined1)(int)(dVar4 * 256.0);
      }
      param_3 = param_3 + -1;
      param_2[2] = uVar1;
      param_2 = param_2 + 3;
      puVar2 = puVar2 + 1;
    } while (1 < param_3);
  }
  return;
}

