
void dtls1_reset_seq_numbers(long param_1,uint param_2)

{
  short *psVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((param_2 & 1) == 0) {
    puVar3 = (undefined8 *)(param_1 + 0x1118);
    *(undefined8 *)(*(long *)(param_1 + 0x1128) + 0x70) = *(undefined8 *)(param_1 + 0x1118);
    *(short *)(*(long *)(param_1 + 0x1128) + 2) = *(short *)(*(long *)(param_1 + 0x1128) + 2) + 1;
  }
  else {
    psVar1 = *(short **)(param_1 + 0x1128);
    *(undefined8 *)(psVar1 + 8) = *(undefined8 *)(psVar1 + 0x10);
    *(undefined8 *)(psVar1 + 4) = *(undefined8 *)(psVar1 + 0xc);
    *psVar1 = *psVar1 + 1;
    lVar2 = *(long *)(param_1 + 0x1128);
    puVar3 = (undefined8 *)(param_1 + 0x1110);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    dtls1_clear_received_buffer();
  }
  *puVar3 = 0;
  return;
}

