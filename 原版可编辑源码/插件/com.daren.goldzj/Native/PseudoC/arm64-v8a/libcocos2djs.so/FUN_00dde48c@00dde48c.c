
void FUN_00dde48c(long param_1,float *param_2,long param_3)

{
  int iVar1;
  ushort uVar2;
  ushort *puVar3;
  double dVar4;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    puVar3 = *(ushort **)(param_1 + 0x10);
    do {
      dVar4 = (double)*param_2;
      if (1.8371976e+19 <= dVar4) {
        uVar2 = 0x7fff;
      }
      else if (dVar4 <= -1.8371976e+19) {
        uVar2 = 0xffff;
      }
      else {
        iVar1 = *(int *)(param_1 + 4);
        if (dVar4 <= 5.4136769e-20) {
          if (-5.4136769e-20 <= dVar4) {
            uVar2 = 0;
          }
          else {
            dVar4 = log(-dVar4);
            dVar4 = (dVar4 * 1.4426950408889634 + 64.0) * 256.0;
            if (iVar1 != 0) {
              iVar1 = rand();
              dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
            }
            uVar2 = (ushort)(int)dVar4 | 0x8000;
          }
        }
        else {
          dVar4 = log(dVar4);
          dVar4 = (dVar4 * 1.4426950408889634 + 64.0) * 256.0;
          if (iVar1 != 0) {
            iVar1 = rand();
            dVar4 = dVar4 + (double)iVar1 * 4.656612875245797e-10 + -0.5;
          }
          uVar2 = (ushort)(int)dVar4;
        }
      }
      param_3 = param_3 + -1;
      *puVar3 = uVar2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    } while (1 < param_3);
  }
  return;
}

