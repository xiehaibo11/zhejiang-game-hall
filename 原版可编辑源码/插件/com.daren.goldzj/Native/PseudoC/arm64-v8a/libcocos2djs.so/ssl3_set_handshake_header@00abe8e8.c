
undefined8 ssl3_set_handshake_header(long param_1,undefined1 param_2,int param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*(long *)(param_1 + 0x78) + 8);
  *puVar1 = param_2;
  puVar1[1] = (char)((uint)param_3 >> 0x10);
  puVar1[2] = (char)((uint)param_3 >> 8);
  puVar1[3] = (char)param_3;
  *(int *)(param_1 + 0x88) = param_3 + 4;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return 1;
}

