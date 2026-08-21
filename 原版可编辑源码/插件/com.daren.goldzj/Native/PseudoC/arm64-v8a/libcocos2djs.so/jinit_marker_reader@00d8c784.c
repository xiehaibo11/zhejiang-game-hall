
void jinit_marker_reader(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x108);
  *(undefined8 **)(param_1 + 0x268) = puVar1;
  *puVar1 = FUN_00d8c84c;
  puVar1[2] = FUN_00d8dfe0;
  puVar1[1] = FUN_00d8c86c;
  puVar1[8] = FUN_00d8e078;
  puVar1[7] = FUN_00d8e078;
  puVar1[10] = FUN_00d8e078;
  puVar1[9] = FUN_00d8e078;
  puVar1[0xd] = FUN_00d8e078;
  puVar1[0xc] = FUN_00d8e078;
  puVar1[0xf] = FUN_00d8e078;
  puVar1[0xe] = FUN_00d8e078;
  puVar1[0x11] = FUN_00d8e078;
  puVar1[0x10] = FUN_00d8e078;
  puVar1[0x13] = FUN_00d8e078;
  puVar1[0x12] = FUN_00d8e078;
  puVar1[0x18] = 0;
  *(undefined4 *)(puVar1 + 0x19) = 0;
  *(undefined4 *)((long)puVar1 + 0xec) = 0;
  *(undefined4 *)(puVar1 + 0x1e) = 0;
  puVar1[0xb] = FUN_00d8e078;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xe4) = 0;
  *(undefined8 *)((long)puVar1 + 0xdc) = 0;
  puVar1[5] = FUN_00d8e078;
  puVar1[6] = FUN_00d8e15c;
  puVar1[0x15] = FUN_00d8e078;
  puVar1[0x14] = FUN_00d8e15c;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  lVar2 = *(long *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  return;
}

