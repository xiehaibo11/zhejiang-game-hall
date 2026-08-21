
void FUN_00ddd9b8(long param_1,short *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  if (0 < param_3) {
    param_3 = param_3 + 1;
    puVar4 = *(uint **)(param_1 + 0x10);
    do {
      if (*param_2 < 1) {
        iVar5 = 0;
      }
      else {
        iVar5 = (int)*param_2;
        if (iVar5 < 0x1cf2) {
          if (*(int *)(param_1 + 4) == 0) {
            iVar5 = iVar5 + -0xcf2 >> 2;
          }
          else {
            iVar2 = rand();
            iVar5 = (int)(((double)iVar5 + -3314.0) * 0.25 + (double)iVar2 * 4.656612875245797e-10 +
                         -0.5);
          }
        }
        else {
          iVar5 = 0x3ff;
        }
      }
      uVar3 = uv_encode(((double)(int)param_2[1] + 0.5) * 3.0517578125e-05,
                        ((double)(int)param_2[2] + 0.5) * 3.0517578125e-05,
                        *(undefined4 *)(param_1 + 4));
      uVar1 = 0x2fea;
      if (-1 < (int)uVar3) {
        uVar1 = uVar3;
      }
      param_3 = param_3 + -1;
      *puVar4 = uVar1 | iVar5 << 0xe;
      param_2 = param_2 + 3;
      puVar4 = puVar4 + 1;
    } while (1 < param_3);
  }
  return;
}

