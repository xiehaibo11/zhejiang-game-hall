
void FUN_00e70ee0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = puVar1[0x1d];
    *(undefined4 *)((long)puVar1 + 0x54) = 9;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    puVar1[6] = 0;
    puVar1[3] = 0;
    if ((undefined8 *)puVar1[0x11] != puVar1 + 0x14) {
      FUN_00e139fc(uVar3);
      puVar1[0x11] = 0;
    }
    FUN_00e139fc(uVar3,puVar1[0xe]);
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x17] = 0;
    puVar1[0x16] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[0xd] = 0;
    puVar1[0xc] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    FUN_00e139fc(uVar2,puVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

