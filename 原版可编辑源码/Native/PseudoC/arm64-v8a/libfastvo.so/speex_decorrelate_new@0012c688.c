
undefined4 * speex_decorrelate_new(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  size_t __nmemb;
  long lVar9;
  double dVar10;
  double dVar11;
  
  puVar2 = calloc(0x50,1);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  puVar2[2] = param_3;
  pvVar3 = calloc((long)(param_3 << 2),1);
  *(void **)(puVar2 + 8) = pvVar3;
  pvVar3 = calloc((long)(int)(param_2 * param_3 * 8),1);
  __nmemb = (size_t)(int)(param_2 * 4);
  *(void **)(puVar2 + 10) = pvVar3;
  puVar4 = calloc(__nmemb,1);
  *(undefined4 **)(puVar2 + 0xe) = puVar4;
  puVar5 = calloc(__nmemb,1);
  *(undefined4 **)(puVar2 + 0x10) = puVar5;
  puVar6 = calloc(__nmemb,1);
  *(undefined4 **)(puVar2 + 0x12) = puVar6;
  puVar7 = calloc((long)(int)(param_2 * 0x50),1);
  *(undefined8 **)(puVar2 + 0xc) = puVar7;
  pvVar3 = calloc((long)(param_3 * 8 + 0x50),1);
  *(void **)(puVar2 + 4) = pvVar3;
  if (0 < param_3) {
    lVar9 = 0;
    do {
      dVar11 = ((double)(int)lVar9 * 3.141592653589793) / (double)(param_3 << 1);
      dVar10 = sin(dVar11);
      dVar11 = sin(dVar11);
      dVar10 = sin(dVar10 * 1.5707963267948966 * dVar11);
      *(float *)((long)pvVar3 + lVar9 * 4) = (float)dVar10;
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_3 << 1);
  }
  iVar1 = rand();
  puVar2[6] = iVar1;
  if (0 < (int)param_2) {
    uVar8 = (ulong)param_2;
    do {
      puVar7[7] = 0;
      puVar7[6] = 0;
      puVar7[9] = 0;
      puVar7[8] = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
      *puVar4 = 0;
      *puVar6 = 0;
      *puVar5 = 10;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 10;
    } while (uVar8 != 0);
  }
  return puVar2;
}

