
undefined4 FUN_00a239f8(long *param_1,int param_2,void *param_3,ulong param_4,size_t *param_5)

{
  ulong uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  void *pvVar5;
  size_t sVar6;
  undefined4 local_34;
  
  local_34 = 0x38;
  uVar4 = FUN_00a12594(*(undefined8 *)(*param_1 + 0x60),1);
  if ((uVar4 & 1) == 0) {
    iVar2 = *(int *)((long)param_1 + 0x264);
    *param_5 = 0;
    uVar4 = (ulong)(iVar2 == param_2);
  }
  else {
    iVar2 = *(int *)param_1[0xe3];
    uVar4 = (ulong)(*(int *)((long)param_1 + 0x264) == param_2);
    *param_5 = 0;
    if (iVar2 == 1) {
      sVar6 = param_1[0x93] - param_1[0x92];
      if (param_4 <= sVar6) {
        sVar6 = param_4;
      }
      if (sVar6 != 0) {
        memcpy(param_3,(void *)(param_1[0x91] + param_1[0x92]),sVar6);
        *(undefined1 *)((long)param_1 + 0x3d1) = 0;
        param_1[0x92] = param_1[0x92] + sVar6;
        *param_5 = sVar6;
        return 0;
      }
      if (0x3fff < param_4) {
        param_4 = 0x4000;
      }
      bVar3 = true;
      pvVar5 = (void *)param_1[0x91];
      goto LAB_00a23ad8;
    }
  }
  bVar3 = false;
  uVar1 = 0x4000;
  if (*(ulong *)(*param_1 + 0x5d0) != 0) {
    uVar1 = *(ulong *)(*param_1 + 0x5d0);
  }
  pvVar5 = param_3;
  if ((long)uVar1 <= (long)param_4) {
    param_4 = uVar1;
  }
LAB_00a23ad8:
                    /* try { // try from 00a23ae0 to 00b23afb has its CatchHandler @ 00a23940 */
                    /* catch() { ... } // from try @ 00a239c8 with catch @ 00a23ae8 */
  sVar6 = (*(code *)param_1[uVar4 + 0x4f])(param_1,uVar4,pvVar5,param_4,&local_34);
  if (-1 < (long)sVar6) {
    if (bVar3) {
      memcpy(param_3,(void *)param_1[0x91],sVar6);
      param_1[0x93] = sVar6;
      param_1[0x92] = sVar6;
    }
    local_34 = 0;
    *param_5 = *param_5 + sVar6;
  }
  return local_34;
}

