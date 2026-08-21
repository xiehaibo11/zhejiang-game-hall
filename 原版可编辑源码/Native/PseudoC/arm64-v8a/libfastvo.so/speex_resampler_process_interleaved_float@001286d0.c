
undefined8
speex_resampler_process_interleaved_float
          (long param_1,long param_2,undefined8 param_3,long param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 0x14);
  uVar2 = *param_5;
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar1;
  *(int *)(param_1 + 0x7c) = iVar1;
  if (iVar1 != 0) {
    uVar4 = 0;
    lVar5 = param_2;
    do {
      *param_5 = uVar2;
      lVar3 = lVar5;
      if (param_2 == 0) {
        lVar3 = 0;
      }
      speex_resampler_process_float(param_1,uVar4 & 0xffffffff,lVar3,param_3,param_4,param_5);
      uVar4 = uVar4 + 1;
      param_4 = param_4 + 4;
      lVar5 = lVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x14));
  }
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  return 0;
}

