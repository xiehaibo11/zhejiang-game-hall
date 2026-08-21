
undefined8 * sb_decoder_init(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  void *pvVar8;
  size_t __nmemb;
  undefined4 local_3c;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  puVar6 = calloc(0xa0,1);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = param_1;
    param_1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 0x11) = 1;
    uVar7 = speex_decoder_init(*param_1);
    puVar6[1] = uVar7;
    puVar6[6] = 0;
    iVar1 = *(int *)(param_1 + 1);
    *(int *)(puVar6 + 2) = iVar1 << 1;
    *(int *)((long)puVar6 + 0x14) = iVar1;
    iVar2 = *(int *)((long)param_1 + 0xc);
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    *(int *)(puVar6 + 3) = iVar2;
    *(int *)((long)puVar6 + 0x1c) = iVar4;
    *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(param_1 + 2);
    speex_decoder_ctl(uVar7,0x19,puVar6 + 5);
    *(int *)(puVar6 + 5) = *(int *)(puVar6 + 5) << 1;
    local_3c = 1;
    speex_decoder_ctl(puVar6[1],0x69,&local_3c);
    puVar6[0x12] = param_1 + 4;
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((long)puVar6 + 0x24) = 1;
    *(undefined4 *)(puVar6 + 0x13) = uVar3;
    pvVar8 = calloc(0x80,1);
    puVar6[7] = pvVar8;
    pvVar8 = calloc(0x80,1);
    puVar6[8] = pvVar8;
    pvVar8 = calloc((long)(*(int *)(puVar6 + 3) << 1),1);
    iVar1 = *(int *)(puVar6 + 4);
    puVar6[9] = pvVar8;
    __nmemb = (size_t)(iVar1 << 1);
    pvVar8 = calloc(__nmemb,1);
    puVar6[10] = pvVar8;
    pvVar8 = calloc(__nmemb,1);
    iVar2 = *(int *)((long)puVar6 + 0x1c);
    puVar6[0xb] = pvVar8;
    pvVar8 = calloc((long)(iVar2 << 2),1);
    puVar6[0xd] = pvVar8;
    pvVar8 = calloc((long)(iVar2 << 1),1);
    puVar6[0xe] = pvVar8;
    pvVar8 = calloc((long)(iVar1 << 3),1);
    puVar6[0xc] = pvVar8;
    puVar6[0xf] = 0;
    *(undefined4 *)((long)puVar6 + 0x2c) = 0;
    *(undefined4 *)((long)puVar6 + 0x84) = 1000;
  }
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

