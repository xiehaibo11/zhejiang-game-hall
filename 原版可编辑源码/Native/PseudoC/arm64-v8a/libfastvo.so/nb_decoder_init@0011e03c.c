
undefined8 * nb_decoder_init(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  size_t __nmemb;
  int *piVar7;
  undefined8 uVar8;
  
  piVar7 = (int *)*param_1;
  puVar5 = calloc(0x370,1);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = param_1;
    *(undefined4 *)((long)puVar5 + 0x94) = 1;
    *(undefined4 *)(puVar5 + 1) = 1;
    iVar1 = *piVar7;
    *(int *)(puVar5 + 2) = iVar1;
    iVar2 = piVar7[1];
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    *(int *)((long)puVar5 + 0x14) = iVar2;
    *(int *)(puVar5 + 3) = iVar4;
    uVar8 = *(undefined8 *)(piVar7 + 2);
    *(undefined8 *)((long)puVar5 + 0x1c) = uVar8;
    iVar3 = piVar7[4];
    puVar5[0x13] = piVar7 + 8;
    *(int *)((long)puVar5 + 0x24) = iVar3;
    *(int *)(puVar5 + 0x14) = piVar7[0x28];
    *(undefined4 *)((long)puVar5 + 0xa4) = 1;
    pvVar6 = calloc((long)((iVar2 + iVar1 + iVar3 * 2) * 2 + 0x18),1);
    puVar5[7] = pvVar6;
    puVar5[8] = (long)pvVar6 + (long)iVar2 * 2 + (long)iVar3 * 4 + 0xc;
    memset(pvVar6,0,-(ulong)((uint)(iVar3 + iVar1) >> 0x1f) & 0xfffffffe00000000 |
                    (ulong)(uint)(iVar3 + iVar1) << 1);
    iVar1 = (int)uVar8;
    __nmemb = (size_t)(iVar1 << 1);
    pvVar6 = calloc(__nmemb,1);
    puVar5[10] = pvVar6;
    pvVar6 = calloc(__nmemb,1);
    puVar5[9] = pvVar6;
    pvVar6 = calloc((long)(iVar1 << 2),1);
    puVar5[0xb] = pvVar6;
    pvVar6 = calloc((long)(iVar4 << 2),1);
    puVar5[0xd] = pvVar6;
    *(undefined2 *)((long)puVar5 + 0x8e) = 0;
    *(undefined8 *)((long)puVar5 + 0x86) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0x28;
    *(undefined4 *)(puVar5 + 0x12) = 1000;
    *(undefined4 *)(puVar5 + 5) = 8000;
    puVar5[0x66] = speex_default_user_handler;
    *(undefined4 *)(puVar5 + 0x6d) = 1;
  }
  return puVar5;
}

