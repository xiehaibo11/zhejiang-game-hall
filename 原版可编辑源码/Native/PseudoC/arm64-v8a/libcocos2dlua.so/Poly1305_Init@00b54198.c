
void Poly1305_Init(long param_1,long param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = poly1305_init((int)param_1,param_2,param_1 + 0xe8);
  if (iVar1 == 0) {
    *(code **)(param_1 + 0xe8) = poly1305_blocks;
    *(code **)(param_1 + 0xf0) = poly1305_emit;
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}

