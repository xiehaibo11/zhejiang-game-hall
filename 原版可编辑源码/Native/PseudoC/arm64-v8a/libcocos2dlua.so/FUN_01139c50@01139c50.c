
void FUN_01139c50(long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  short sVar2;
  undefined1 uVar3;
  short *psVar4;
  double dVar5;
  double __x;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    psVar4 = *(short **)(param_1 + 0x10);
    do {
      sVar2 = *psVar4;
      uVar1 = (int)sVar2 & 0x7fff;
      uVar3 = 0;
      if (uVar1 != 0) {
        dVar5 = exp(((double)uVar1 + 0.5) * 0.0027076061740622863 + -44.3614195558365);
        __x = -dVar5;
        if (((int)sVar2 & 0x8000U) == 0) {
          __x = dVar5;
        }
        if (__x <= 0.0) {
          uVar3 = 0;
        }
        else if (1.0 <= __x) {
          uVar3 = 0xff;
        }
        else {
          dVar5 = SQRT(__x);
          if (NAN(dVar5)) {
            dVar5 = sqrt(__x);
          }
          uVar3 = (undefined1)(int)(dVar5 * 256.0);
        }
      }
      param_3 = param_3 + -1;
      *param_2 = uVar3;
      param_2 = param_2 + 1;
      psVar4 = psVar4 + 1;
    } while (1 < param_3);
  }
  return;
}

