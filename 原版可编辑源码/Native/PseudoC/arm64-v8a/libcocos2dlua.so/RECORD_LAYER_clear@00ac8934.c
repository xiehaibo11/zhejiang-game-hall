
void RECORD_LAYER_clear(long param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xd4c) = 0;
  *(undefined8 *)(param_1 + 0xd50) = 0;
  *(undefined2 *)(param_1 + 0xd48) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xf0;
  *(undefined8 *)(param_1 + 0xd40) = 0;
  *(undefined8 *)(param_1 + 0xd38) = 0;
  *(undefined4 *)(param_1 + 0xd6c) = 0;
  *(undefined8 *)(param_1 + 0xd64) = 0;
  *(undefined8 *)(param_1 + 0xd5c) = 0;
  SSL3_BUFFER_clear(param_1 + 0x18);
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = 0;
    do {
      SSL3_BUFFER_clear(param_1 + (ulong)uVar1 * 0x20 + 0x38);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 0x14));
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  SSL3_RECORD_clear(param_1 + 0x438,0x20);
  *(undefined8 *)(param_1 + 0xd78) = 0;
  *(undefined8 *)(param_1 + 0xd70) = 0;
  if (*(long *)(param_1 + 0xd88) != 0) {
    DTLS_RECORD_LAYER_clear(param_1);
    return;
  }
  return;
}

