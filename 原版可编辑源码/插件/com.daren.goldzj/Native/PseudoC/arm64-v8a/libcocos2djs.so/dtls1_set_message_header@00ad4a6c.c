
void dtls1_set_message_header
               (long param_1,undefined1 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  short sVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  if (param_4 == 0) {
    sVar1 = *(short *)(lVar2 + 0x10a);
    *(short *)(lVar2 + 0x108) = sVar1;
    *(short *)(lVar2 + 0x10a) = sVar1 + 1;
  }
  else {
    sVar1 = *(short *)(lVar2 + 0x108);
  }
  *(undefined1 *)(lVar2 + 0x128) = param_2;
  *(undefined8 *)(lVar2 + 0x130) = param_3;
  *(short *)(lVar2 + 0x138) = sVar1;
  *(long *)(lVar2 + 0x140) = param_4;
  *(undefined8 *)(lVar2 + 0x148) = param_5;
  return;
}

