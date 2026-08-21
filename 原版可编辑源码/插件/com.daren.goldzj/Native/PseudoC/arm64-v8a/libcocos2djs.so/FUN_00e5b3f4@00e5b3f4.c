
uint FUN_00e5b3f4(long param_1,short param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  short *psVar3;
  
  *param_3 = 0xffffffff;
  *param_4 = 0xffffffff;
  uVar1 = (ulong)*(ushort *)(param_1 + 0x230);
  if (uVar1 != 0) {
    uVar2 = 0;
    psVar3 = (short *)(*(long *)(param_1 + 0x248) + 4);
    do {
      while ((psVar3[1] != param_2 || (psVar3[2] == 0))) {
joined_r0x00e5b4a0:
        psVar3 = psVar3 + 0x10;
        uVar2 = uVar2 + 1;
        if (uVar1 <= uVar2) goto LAB_00e5b4bc;
      }
      if (psVar3[-2] == 1) {
        if ((psVar3[-1] == 0) && ((*psVar3 == 0 || (*param_4 == 0xffffffff)))) {
          *param_4 = (uint)uVar2;
        }
        goto joined_r0x00e5b4a0;
      }
      if (((psVar3[-2] != 3) || (1 < (ushort)psVar3[-1])) ||
         ((*psVar3 != 0x409 && (*param_3 != 0xffffffff)))) goto joined_r0x00e5b4a0;
      *param_3 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 0x10;
    } while (uVar2 < uVar1);
  }
LAB_00e5b4bc:
  if ((int)*param_3 < 0) {
    return *param_4 >> 0x1f ^ 1;
  }
  return 1;
}

