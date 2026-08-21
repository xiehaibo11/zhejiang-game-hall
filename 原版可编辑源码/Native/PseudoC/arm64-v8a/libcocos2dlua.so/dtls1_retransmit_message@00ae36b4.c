
undefined4 dtls1_retransmit_message(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  pitem *ppVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long local_58;
  
  local_58 = (ulong)CONCAT11((char)param_2,(char)((ulong)param_2 >> 8)) << 0x30;
  ppVar4 = pqueue_find(*(pqueue *)(*(long *)(param_1 + 0x98) + 0x118),(uchar *)&local_58);
  if (ppVar4 == (pitem *)0x0) {
    ERR_put_error(0x14,0x186,0x44,"ssl/statem/statem_dtls.c",0x435);
    uVar3 = 0;
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    puVar9 = ppVar4->data;
    lVar6 = 0xc;
    if (*(int *)(puVar9 + 0x28) != 0) {
      lVar6 = 1;
    }
    memcpy(*(void **)(*(long *)(param_1 + 0x78) + 8),*(void **)(puVar9 + 0x58),
           *(long *)(puVar9 + 8) + lVar6);
    uVar5 = *(undefined8 *)(puVar9 + 8);
    lVar7 = *(long *)(param_1 + 0x98);
    *(int *)(param_1 + 0x88) = (int)uVar5 + (int)lVar6;
    uVar1 = *puVar9;
    uVar2 = *(undefined2 *)(puVar9 + 0x10);
    uVar8 = *(undefined8 *)(puVar9 + 0x20);
    *(undefined8 *)(lVar7 + 0x130) = uVar5;
    *(undefined1 *)(lVar7 + 0x128) = uVar1;
    *(undefined2 *)(lVar7 + 0x138) = uVar2;
    *(undefined8 *)(lVar7 + 0x140) = 0;
    *(undefined8 *)(lVar7 + 0x148) = uVar8;
    uVar5 = *(undefined8 *)(param_1 + 0x138);
    uVar8 = *(undefined8 *)(param_1 + 0x140);
    uVar10 = *(undefined8 *)(param_1 + 0x128);
    uVar11 = *(undefined8 *)(param_1 + 0x178);
    uVar2 = *(undefined2 *)(*(long *)(param_1 + 0x1128) + 2);
    *(undefined4 *)(lVar7 + 0x1fc) = 1;
    uVar12 = *(undefined8 *)(puVar9 + 0x30);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(puVar9 + 0x38);
    *(undefined8 *)(param_1 + 0x138) = uVar12;
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(puVar9 + 0x40);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(puVar9 + 0x48);
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x3a0,*(undefined2 *)(puVar9 + 0x50));
    uVar3 = 0x14;
    if (*(int *)(puVar9 + 0x28) == 0) {
      uVar3 = 0x16;
    }
    uVar3 = dtls1_do_write(param_1,uVar3);
    *(undefined8 *)(param_1 + 0x138) = uVar5;
    *(undefined8 *)(param_1 + 0x140) = uVar8;
    *(undefined8 *)(param_1 + 0x128) = uVar10;
    *(undefined8 *)(param_1 + 0x178) = uVar11;
    DTLS_RECORD_LAYER_set_saved_w_epoch(param_1 + 0x3a0,uVar2);
    *(undefined4 *)(*(long *)(param_1 + 0x98) + 0x1fc) = 0;
    BIO_ctrl(*(BIO **)(param_1 + 0x18),0xb,0,(void *)0x0);
  }
  return uVar3;
}

