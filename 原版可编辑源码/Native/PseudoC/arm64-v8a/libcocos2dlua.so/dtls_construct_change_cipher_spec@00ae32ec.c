
bool dtls_construct_change_cipher_spec(int *param_1)

{
  short sVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  
  puVar4 = *(undefined1 **)(*(long *)(param_1 + 0x1e) + 8);
  *puVar4 = 1;
  lVar3 = *(long *)(param_1 + 0x26);
  sVar1 = *(short *)(lVar3 + 0x10a);
  *(short *)(lVar3 + 0x108) = sVar1;
  param_1[0x22] = 1;
  if (*param_1 == 0x100) {
    *(short *)(lVar3 + 0x10a) = sVar1 + 1;
    puVar4[1] = (char)((ushort)sVar1 >> 8);
    puVar4[2] = *(undefined1 *)(*(long *)(param_1 + 0x26) + 0x108);
    lVar3 = *(long *)(param_1 + 0x26);
    param_1[0x22] = param_1[0x22] + 2;
    sVar1 = *(short *)(lVar3 + 0x108);
  }
  param_1[0x23] = 0;
  *(undefined1 *)(lVar3 + 0x128) = 1;
  *(undefined8 *)(lVar3 + 0x130) = 0;
  *(short *)(lVar3 + 0x138) = sVar1;
  *(undefined8 *)(lVar3 + 0x140) = 0;
  *(undefined8 *)(lVar3 + 0x148) = 0;
  iVar2 = dtls1_buffer_message(param_1,1);
  if (iVar2 == 0) {
    ERR_put_error(0x14,0x173,0x44,"ssl/statem/statem_dtls.c",0x381);
  }
  return iVar2 != 0;
}

