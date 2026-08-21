
undefined8 FUN_00c21fa4(long *param_1,uint *param_2,undefined8 param_3,double *param_4,int *param_5)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  double dVar4;
  uint uVar5;
  long lVar6;
  uint local_4;
  
  uVar1 = *param_2;
  if (uVar1 >> 0x1c != 0) {
    if (((uVar1 & 0xfc000000) == 0x30000000) || (uVar1 >> 0x1c == 1)) {
      uVar3 = FUN_00c20ce0(param_1,param_5);
      *param_4 = (double)(uVar3 | 0xfffa800000000000);
      return 1;
    }
    uVar5 = param_2[1];
LAB_00c22054:
    lVar6 = *param_1;
    uVar3 = FUN_00c1a314(param_1[2],(ulong)uVar5 + 0x10);
    *(short *)(uVar3 + 10) = (short)((long)param_2 - lVar6 >> 3) * -0x5555;
    *(undefined1 *)(uVar3 + 9) = 10;
    *param_4 = (double)(uVar3 | 0xfffa800000000000);
    memcpy((void *)(uVar3 + 0x10),param_5,(ulong)uVar5);
    return 1;
  }
  if ((uVar1 & 0xf8000000) == 0x8000000) {
    if (param_2[1] == 1) {
      bVar2 = (char)*param_5 != '\0';
    }
    else {
      bVar2 = *param_5 != 0;
    }
    dVar4 = (double)~((ulong)(bVar2 + 1) << 0x2f);
    *param_4 = dVar4;
    *(double *)(param_1[3] + 0xe0) = dVar4;
    return 0;
  }
  if ((uVar1 & 0xfc000000) == 0) {
    uVar5 = param_2[1];
    if (4 < uVar5) goto LAB_00c22054;
    FUN_00c21820(param_1,*param_1 + 0xd8,param_2,&local_4,param_5,0);
    if (((uVar1 >> 0x17 & 1) == 0) || (-1 < (int)local_4)) {
      *(uint *)param_4 = local_4;
      *(undefined4 *)((long)param_4 + 4) = 0xfff90000;
    }
    else {
      *param_4 = (double)local_4;
    }
  }
  else {
    FUN_00c21820(param_1,*param_1 + 0x150,param_2,param_4,param_5,0);
  }
  return 0;
}

