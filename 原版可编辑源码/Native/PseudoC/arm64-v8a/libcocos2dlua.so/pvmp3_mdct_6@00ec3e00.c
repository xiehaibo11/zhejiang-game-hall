
void pvmp3_mdct_6(undefined1 (*param_1) [16],int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)*param_1;
  iVar1 = *(int *)(param_1[1] + 4);
  auVar4 = NEON_ext(*param_1,*param_1,8,1);
  *(int *)param_1[1] = (int)((ulong)((long)*(int *)param_1[1] * 0x29cf5d40) >> 0x1d);
  *(int *)(param_1[1] + 4) = (int)((ulong)((long)iVar1 * 0x7a94ad00) >> 0x1d);
  *(ulong *)(*param_1 + 8) =
       CONCAT44((int)((ulong)((long)auVar4._4_4_ * 0x1a486a60) >> 0x1d),
                (int)((ulong)((long)auVar4._0_4_ * 0x142ae520) >> 0x1d));
  *(ulong *)*param_1 =
       CONCAT44((int)((ulong)((long)(int)((ulong)uVar3 >> 0x20) * 0x11517a80) >> 0x1d),
                (int)((ulong)((long)(int)uVar3 * 0x10235820) >> 0x1d));
  pvmp3_dct_6();
  iVar1 = -(*(int *)*param_1 + *(int *)(*param_1 + 4));
  param_2[2] = iVar1;
  param_2[3] = iVar1;
  iVar1 = *(int *)(param_1[1] + 4);
  iVar2 = -(*(int *)(*param_1 + 4) + *(int *)(*param_1 + 8));
  *(int *)*param_1 = *(int *)param_1[1] + *(int *)(*param_1 + 0xc);
  *(int *)(*param_1 + 4) = iVar1 + *(int *)param_1[1];
  param_2[4] = iVar2;
  param_2[1] = iVar2;
  iVar1 = -(*(int *)(*param_1 + 8) + *(int *)(*param_1 + 0xc));
  *(int *)param_1[1] = -*(int *)(*param_1 + 4);
  param_2[5] = iVar1;
  *param_2 = iVar1;
  iVar1 = *(int *)(param_1[1] + 4);
  iVar2 = *(int *)*param_1;
  *(int *)(*param_1 + 8) = iVar1;
  *(int *)(*param_1 + 0xc) = -iVar1;
  *(int *)(param_1[1] + 4) = -iVar2;
  return;
}

